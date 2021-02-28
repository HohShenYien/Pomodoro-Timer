#include "timer.h"
#include "ui_timer.h"

Timer::Timer(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Timer), trayIcon(new QSystemTrayIcon(this))
{
    this->setWindowIcon(QIcon(":/tomato.png"));
    this->setFixedSize(QSize(400, 400));
    this->setWindowTitle("Focus Timer");
    QCoreApplication::setApplicationName("Focus Timer");
    ui->setupUi(this);

    // loading the icons
    myIcons[0] = new QIcon(":/icons/next.png");
    myIcons[1] = new QIcon(":/icons/next_pressed.png");
    myIcons[2] = new QIcon(":/icons/pause.png");
    myIcons[3] = new QIcon(":/icons/pause_pressed.png");
    myIcons[4] = new QIcon(":/icons/play.png");
    myIcons[5] = new QIcon(":/icons/play_pressed.png");
    myIcons[6] = new QIcon(":/icons/stop.png");
    myIcons[7] = new QIcon(":/icons/stop_pressed.png");
    appIcon = new QIcon(":/icons/tomato.png");

    // load the audio at start
    // need to get the absolute path, so needs few extra steps here
    player[0] = new QMediaPlayer;
    player[0]->setMedia(QUrl("qrc:/sounds/focus_start.wav"));
    player[1] = new QMediaPlayer;
    player[1]->setMedia(QUrl("qrc:/sounds/rest.wav"));
    player[2] = new QMediaPlayer;
    player[2]->setMedia(QUrl("qrc:/sounds/rest_start.wav"));
    player[3] = new QMediaPlayer;
    player[3]->setMedia(QUrl("qrc:/sounds/start.wav"));

    // now setting initial icons
    ui->continueOrPause->setIcon(*myIcons[2]);
    ui->continueOrPause->setIconSize(QSize(64, 64));
    ui->continueOrPause->setText("");

    ui->nextBtn->setIcon(*myIcons[0]);
    ui->nextBtn->setIconSize(QSize(64, 64));
    ui->nextBtn->setText("");

    ui->endBtn->setIcon(*myIcons[6]);
    ui->endBtn->setIconSize(QSize(64, 64));
    ui->endBtn->setText("");

    // setting initial values of checkbox
    ui->sound_effect_ckbox->setChecked(1);
    ui->tray_ckbox->setChecked(1);
    ui->total_ckbox->setChecked(1);

    //setting tomato icon on first page
    QPixmap tomato(":/icons/tomato.png"); // load pixmap

    // set a scaled pixmap to a w x h window keeping its aspect ratio
    ui->tomato_label->setPixmap(tomato.scaled(64 ,64 ,Qt::KeepAspectRatio));

    // setting default page to page 1, the setting page, and initializing the background color
    ui->stack->setCurrentWidget(ui->page_settings);

    // initializing thread objects
    thread = new QThread();
    timerWorker = new TimerThread();

    // preparing the threads
    timerWorker->moveToThread(thread);

    // connecting to slots
    connect(timerWorker, SIGNAL(valueChanged(QString)), ui->time, SLOT(setText(QString)));
    connect(timerWorker, SIGNAL(valueChanged(int)), this, SLOT(changeStatus(int)));
    connect(timerWorker, SIGNAL(workRequested()), thread, SLOT(start()));
    connect(thread, SIGNAL(started()), timerWorker, SLOT(doWork()));
    connect(timerWorker, SIGNAL(finished()), thread, SLOT(quit()), Qt::DirectConnection);

    // music player
    connect(timerWorker, SIGNAL(sound(int)), this, SLOT(play_sound(int)));

    // creating system tray, specifically for the ability to send notification

    // Tray icon menu
    auto menu = this->createMenu();
    this->trayIcon->setContextMenu(menu);

    // App icon
    this->trayIcon->setIcon(*appIcon);
    this->trayIcon->setToolTip(tr("Pomodoro Timer is waiting to be started"));

    // Interaction
    connect(trayIcon, SIGNAL(activated(QSystemTrayIcon::ActivationReason)), this, SLOT(iconActivated(QSystemTrayIcon::ActivationReason)));
    connect(timerWorker, SIGNAL(notif(int)), this, SLOT(sendNotif(int)));
}


Timer::~Timer()
{
    if (ui->stack->currentIndex() == 0) {
        // currently in timer_page, so quit the thread, reused the codes from below
        timerWorker->stop();
        thread->wait();
        // check if the user wants to see the total time
        if (ui->total_ckbox->isChecked()){
            int totalTime = timerWorker->the_timer->total;
            // check what is the current status, if in rest, no need add cur_time
            if (timerWorker->the_timer->status == 0) {
             totalTime += timerWorker->the_timer->duration - timerWorker->the_timer->cur_time;
            }
            QString totalTimeStr;
            totalTimeStr.sprintf("You have been focusing for %i hours %02i minutes %02i seconds!",
                                 totalTime/3600, totalTime % 3600 / 60, totalTime % 60);
            // A small extra feature: add a message depends on studied time
            if (totalTime <= 3600) {
                // less than an hour I will comment short
                totalTimeStr += QString("\nThat was quite a short period.");
            } else {
                // more than hour I will praise
                totalTimeStr += QString("\nYou have been working hard today!");
            }
            QMessageBox::information(this, tr("Total Focus Time"),
                                     totalTimeStr);
        }
    }
    trayIcon->hide();
    delete thread; // I guess I am deleting these to avoid memory leak?
    delete timerWorker;

    delete ui;
}

// The followings are for display purpose, to show the effect of pressing
void Timer::on_continueOrPause_pressed()
{
    // the first two are slightly special because it uses two types of images
    if (timerWorker->isRunning) {
        ui->continueOrPause->setIcon(*myIcons[3]);
    } else {
        ui->continueOrPause->setIcon(*myIcons[5]);
    }
}

void Timer::on_continueOrPause_released()
{
    // special
    if (timerWorker->isRunning) {
        ui->continueOrPause->setIcon(*myIcons[4]);
        ui->continueOrPause->setToolTip("Continue the timer");
    } else {
        ui->continueOrPause->setIcon(*myIcons[2]);
        ui->continueOrPause->setToolTip("Pause the timer");
    }
}

void Timer::on_nextBtn_pressed()
{
    ui->nextBtn->setIcon(*myIcons[1]); // next button
}

void Timer::on_nextBtn_released()
{
    ui->nextBtn->setIcon(*myIcons[0]); // next button
}

void Timer::on_endBtn_pressed()
{
    ui->endBtn->setIcon(*myIcons[7]); // stop button
}

void Timer::on_endBtn_released()
{
    ui->endBtn->setIcon(*myIcons[6]); // stop button
}


void Timer::on_startBtn_pressed()
{
    ui->startBtn->setStyleSheet("background-color: rgb(25,111,61);");
}

void Timer::on_startBtn_released()
{
    ui->startBtn->setStyleSheet("background-color: rgb(129, 238, 107);");
}

// changeStatus SLOT
void Timer::changeStatus(int new_status) {
    // -1 for pause, 0 for focus, 1 for short rest, 2 for long rest
    switch (new_status) {
    case -1:
        // just change the title to Pause
        ui->status->setText(QString("Pause"));
        break;
    case 0:
        // set to focus mode, changing the stylesheet as well
        ui->status->setText(QString("Focus"));
        ui->centralwidget->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0.507, y1:1, x2:0.522, y2:0, stop:0 rgba(229, 57, 53, 255), stop:1 rgba(227, 93, 91, 255));");
        break;
    case 1:
        // set to short break mode, changing the background to bluish
        ui->status->setText(QString("Short Break"));
        ui->centralwidget->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0.512, y1:0, x2:0.488, y2:1, stop:0 rgba(67, 206, 162, 255), stop:1 rgba(24, 90, 157, 255));");
        break;
    case 2:
        // set to long break mode, changing the background to greenish
        ui->status->setText(QString("Long Break"));
        ui->centralwidget->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0.492366, y1:0, x2:0.497, y2:1, stop:0 rgba(56, 239, 125, 255), stop:1 rgba(17, 153, 142, 255));");
        break;
    default:
        break;
    }
}

// page_setting button actions
void Timer::on_startBtn_clicked()
{
    // store the values by creating a new timerthread object
    // and enters page_timer
    ui->stack->setCurrentWidget(ui->page_timer);

    // gets the essential value and start the worker based on these values.
    int duration = ui->duration_box->value();
    int short_rest = ui->short_rest_box->value();
    int long_rest = ui->long_rest_box->value();
    int session = ui->session_box->value();

    // gets the boolean values of checkboxes
    bool soundOrNot = ui->sound_effect_ckbox->isChecked();
    bool notifOrNot = ui->notif_ckbox->isChecked();
    timerWorker->requestWork(duration, short_rest, long_rest, session, soundOrNot, notifOrNot);
}

// now setting all the buttons of page_timer
void Timer::on_continueOrPause_clicked()
{
    timerWorker->pauseOrContinue();
    if (!timerWorker->isRunning) {
        // pause, set the label
        changeStatus(-1);
    } else {
        // continue, set the label back
        changeStatus(timerWorker->the_timer->status);
    }
}

void Timer::on_nextBtn_clicked()
{
    // will call the_timer function and let doWork deals with other part
    // somehow the sound is not emitted, so I will do it manually here
    switch (timerWorker->the_timer->status) {
    case 0:
        // going to rest session
        player[2] -> play();
        break;
    default:
        // going to focus session
        player[0] -> play();
    }

    timerWorker->the_timer->skip();
}


void Timer::on_endBtn_clicked()
{
    // this will end the running thread, and then go back to previous page
    // ending the running thread here, it will send a popup message about how long you've been focusing
    timerWorker->stop();
    thread->wait();
    if (ui->total_ckbox->isChecked()) {
        int totalTime = timerWorker->the_timer->total;
        if (timerWorker->the_timer->status == 0) {
         totalTime += timerWorker->the_timer->duration - timerWorker->the_timer->cur_time;
        }        QString totalTimeStr;
        totalTimeStr.sprintf("You have been focusing for %i hours %02i minutes %02i seconds!",
                             totalTime/3600, totalTime % 3600 / 60, totalTime % 60);
        // A small extra feature: add a message depends on studied time
        if (totalTime <= 3600) {
            // less than an hour I will comment short
            totalTimeStr += QString("\nThat was quite a short period.");
        } else {
            // more than hour I will praise
            totalTimeStr += QString("\nYou have been working hard today!");
        }
        QMessageBox::information(this, tr("Total Focus Time"),
                                 totalTimeStr);
    }

    // so need to reset the page theme color again
    ui->stack->setCurrentWidget(ui->page_settings);
    ui->centralwidget->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0.522, y1:1, x2:0.507171, y2:0, stop:0 rgba(239, 50, 217, 255), stop:1 rgba(137, 255, 253, 255));");
}

void Timer::play_sound(int track){
    player[track]->play();
}

QMenu* Timer::createMenu()
{
  // App can hide via Hide Menu
  auto hideAction = new QAction("Hide Window", this);
  connect(hideAction, SIGNAL(triggered()), this, SLOT(hideWindow()));
  hideAction->setToolTip(tr("Hide the app window from taskbar"));

  // App can show via Show Menu, similar to iconClicked
  auto showAction = new QAction("Show Window", this);
  connect(showAction, SIGNAL(triggered()), this, SLOT(showWindow()));
  showAction->setToolTip(tr("Show the app window in taskbar"));

  // App can exit via Quit menu
  auto quitAction = new QAction("Quit", this);
  connect(quitAction, &QAction::triggered, qApp, &QCoreApplication::quit);
  quitAction->setToolTip(tr("Quit the app"));

  auto menu = new QMenu(this);
  menu->setToolTipsVisible(true);
  menu->addAction(showAction);
  menu->addAction(hideAction);
  menu->addAction(quitAction);

  return menu;
}

// system tray icon functions
void Timer::iconActivated(QSystemTrayIcon::ActivationReason reason)
{
    if (reason == QSystemTrayIcon::Trigger) {
        // left click only
        this->show();
        this->raise();
        this->activateWindow();
    }
}

void Timer::showWindow()
{
    this->show();
    this->raise();
    this->activateWindow();
}

void Timer::hideWindow(){
    this->hide();
}


// notification section
void Timer::sendNotif(int type)
{
    switch (type) {
    case 0:
        this->trayIcon->showMessage("Focus", "Time to focus", *appIcon);
        break;
    case 1:
        this->trayIcon->showMessage("Short Break", "Go have a sip of water and rest your eyes.", *appIcon);
        break;
    case 2:
        this->trayIcon->showMessage("Long Break", "You have worked hard! Take a break.", *appIcon);
        break;
    }
}

void Timer::on_tray_ckbox_stateChanged(int arg1)
{
    switch(arg1) {
    case Qt::Unchecked:
        // sets tray icon to hide
        // sets notification to unchecked, and disables notif_ckbox
        // because tray icon is needed for notification
        this->trayIcon->hide();
        ui->notif_ckbox->setChecked(false);
        ui->notif_ckbox->setCheckable(false);
        break;
    case Qt::Checked:
        // sets notification to be checkable and show tray icon
        this->trayIcon->show();
        ui->notif_ckbox->setCheckable(true);
    }
}
