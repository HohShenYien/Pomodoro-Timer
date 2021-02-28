#ifndef TIMER_H
#define TIMER_H

#include <QMainWindow>
#include <QWidget>
#include <QThread>
#include <QMessageBox>
#include <QtMultimedia/QMediaPlayer>
#include <QSystemTrayIcon>
#include <QMenu>

#include "timerthread.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Timer; }
QT_END_NAMESPACE

class Timer : public QMainWindow
{
    Q_OBJECT

public:
    Timer(QWidget *parent = nullptr);
    ~Timer();
    QThread *thread; // thread objects here
    TimerThread *timerWorker;

    QMediaPlayer *player[4]; // load the audio at start
    // 0 for focus_start, 1 for rest, 2 for rest_start, 3 for start
    QIcon *myIcons[8]; // load the images at start
    // the index are according to current alphabet:
    // 0 for next, 1 for next_pressed, 2 for pause, 3 for pause_pressed
    // 4 for play, 5 for play_pressed, 6 for stop, 7 for stop_pressed
    QIcon *appIcon; // app icon, which is the tomato

private slots:
    void on_continueOrPause_pressed();

    void on_continueOrPause_released();

    void on_nextBtn_pressed();

    void on_nextBtn_released();

    void on_endBtn_pressed();

    void on_endBtn_released();

    void on_startBtn_pressed();

    void on_startBtn_released();

    void on_startBtn_clicked();

    void changeStatus(int new_status);

    void on_continueOrPause_clicked();

    void on_nextBtn_clicked();

    void on_endBtn_clicked();

    void play_sound(int track);

    void on_tray_ckbox_stateChanged(int arg1);

public slots:
    // functions related to icon tray
    void iconActivated(QSystemTrayIcon::ActivationReason);
    void showWindow();
    void hideWindow();
    // function to send notification
    void sendNotif(int);


private:
    Ui::Timer *ui;
    QMenu *menu;
    QMenu* createMenu();
    QSystemTrayIcon *trayIcon;
    void goHide();

};
#endif // TIMER_H
