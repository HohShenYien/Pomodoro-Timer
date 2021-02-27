/********************************************************************************
** Form generated from reading UI file 'timer.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TIMER_H
#define UI_TIMER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Timer
{
public:
    QAction *actionsend_notification;
    QWidget *centralwidget;
    QStackedWidget *stack;
    QWidget *page_timer;
    QScrollArea *display;
    QWidget *frameTime;
    QPushButton *continueOrPause;
    QLabel *status;
    QPushButton *nextBtn;
    QPushButton *endBtn;
    QLabel *time;
    QWidget *page_settings;
    QFrame *frameSettings;
    QLabel *label;
    QLabel *tomato_label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_5;
    QLabel *label_7;
    QSpinBox *long_rest_box;
    QSpinBox *short_rest_box;
    QSpinBox *duration_box;
    QSpinBox *session_box;
    QCheckBox *sound_effect_ckbox;
    QLabel *label_8;
    QCheckBox *notif_ckbox;
    QLabel *label_12;
    QPushButton *startBtn;

    void setupUi(QMainWindow *Timer)
    {
        if (Timer->objectName().isEmpty())
            Timer->setObjectName(QString::fromUtf8("Timer"));
        Timer->resize(400, 392);
        Timer->setStyleSheet(QString::fromUtf8(""));
        actionsend_notification = new QAction(Timer);
        actionsend_notification->setObjectName(QString::fromUtf8("actionsend_notification"));
        centralwidget = new QWidget(Timer);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.492366, y1:0, x2:0.497, y2:1, stop:0 rgba(56, 239, 125, 255), stop:1 rgba(17, 153, 142, 255));"));
        stack = new QStackedWidget(centralwidget);
        stack->setObjectName(QString::fromUtf8("stack"));
        stack->setGeometry(QRect(0, 0, 401, 371));
        stack->setStyleSheet(QString::fromUtf8(""));
        page_timer = new QWidget();
        page_timer->setObjectName(QString::fromUtf8("page_timer"));
        display = new QScrollArea(page_timer);
        display->setObjectName(QString::fromUtf8("display"));
        display->setGeometry(QRect(0, 0, 400, 400));
        QFont font;
        font.setPointSize(20);
        display->setFont(font);
        display->setStyleSheet(QString::fromUtf8("background-color: rgb(255,255,255,0);"));
        display->setWidgetResizable(true);
        frameTime = new QWidget();
        frameTime->setObjectName(QString::fromUtf8("frameTime"));
        frameTime->setGeometry(QRect(0, 0, 398, 398));
        continueOrPause = new QPushButton(frameTime);
        continueOrPause->setObjectName(QString::fromUtf8("continueOrPause"));
        continueOrPause->setGeometry(QRect(168, 220, 64, 64));
        continueOrPause->setContextMenuPolicy(Qt::NoContextMenu);
        continueOrPause->setStyleSheet(QString::fromUtf8("border: 0;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("play.png"), QSize(), QIcon::Normal, QIcon::Off);
        continueOrPause->setIcon(icon);
        continueOrPause->setAutoRepeatInterval(100);
        status = new QLabel(frameTime);
        status->setObjectName(QString::fromUtf8("status"));
        status->setGeometry(QRect(90, 40, 221, 51));
        QFont font1;
        font1.setPointSize(30);
        status->setFont(font1);
        status->setStyleSheet(QString::fromUtf8("qproperty-alignment: AlignCenter;"));
        nextBtn = new QPushButton(frameTime);
        nextBtn->setObjectName(QString::fromUtf8("nextBtn"));
        nextBtn->setGeometry(QRect(252, 220, 64, 64));
        nextBtn->setContextMenuPolicy(Qt::NoContextMenu);
        nextBtn->setStyleSheet(QString::fromUtf8("border: 0;\n"
""));
        nextBtn->setIcon(icon);
        nextBtn->setAutoRepeatInterval(100);
        endBtn = new QPushButton(frameTime);
        endBtn->setObjectName(QString::fromUtf8("endBtn"));
        endBtn->setGeometry(QRect(84, 220, 64, 64));
        endBtn->setContextMenuPolicy(Qt::NoContextMenu);
        endBtn->setStyleSheet(QString::fromUtf8("border: 0;"));
        endBtn->setIcon(icon);
        endBtn->setAutoRepeatInterval(100);
        time = new QLabel(frameTime);
        time->setObjectName(QString::fromUtf8("time"));
        time->setGeometry(QRect(0, 110, 401, 51));
        time->setFont(font);
        time->setStyleSheet(QString::fromUtf8("qproperty-alignment: AlignCenter;"));
        display->setWidget(frameTime);
        stack->addWidget(page_timer);
        page_settings = new QWidget();
        page_settings->setObjectName(QString::fromUtf8("page_settings"));
        frameSettings = new QFrame(page_settings);
        frameSettings->setObjectName(QString::fromUtf8("frameSettings"));
        frameSettings->setGeometry(QRect(-10, 0, 420, 400));
        frameSettings->setStyleSheet(QString::fromUtf8(""));
        frameSettings->setFrameShape(QFrame::StyledPanel);
        frameSettings->setFrameShadow(QFrame::Raised);
        label = new QLabel(frameSettings);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(9, 14, 321, 51));
        QFont font2;
        font2.setPointSize(24);
        label->setFont(font2);
        label->setStyleSheet(QString::fromUtf8("qproperty-alignment: AlignCenter;\n"
"background-color: rgba(0,0,0,0%)"));
        tomato_label = new QLabel(frameSettings);
        tomato_label->setObjectName(QString::fromUtf8("tomato_label"));
        tomato_label->setGeometry(QRect(300, 8, 64, 64));
        tomato_label->setStyleSheet(QString::fromUtf8("background-color: rgba(0,0,0,0%)\n"
""));
        label_2 = new QLabel(frameSettings);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(330, 90, 70, 17));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0,0,0,0);\n"
"qproperty-alignment: AlignCenter;"));
        label_3 = new QLabel(frameSettings);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(330, 150, 70, 17));
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(0,0,0,0);\n"
"qproperty-alignment: AlignCenter;"));
        label_4 = new QLabel(frameSettings);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(330, 210, 70, 17));
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgb(0,0,0,0);\n"
"qproperty-alignment: AlignCenter;"));
        label_6 = new QLabel(frameSettings);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(20, 262, 211, 31));
        QFont font3;
        font3.setPointSize(16);
        label_6->setFont(font3);
        label_6->setStyleSheet(QString::fromUtf8("background-color: rgb(0,0,0,0);\n"
"qproperty-alignment: AlignLeft;"));
        label_9 = new QLabel(frameSettings);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(20, 85, 191, 21));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 0));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        label_9->setPalette(palette);
        label_9->setFont(font3);
        label_9->setToolTipDuration(-1);
        label_9->setAutoFillBackground(false);
        label_9->setStyleSheet(QString::fromUtf8("background-color: rgb(0,0,0,0);\n"
"qproperty-alignment: AlignLeft;\n"
""));
        label_10 = new QLabel(frameSettings);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(20, 145, 221, 31));
        label_10->setFont(font3);
        label_10->setStyleSheet(QString::fromUtf8("background-color: rgb(0,0,0,0);\n"
"qproperty-alignment: AlignLeft;"));
        label_11 = new QLabel(frameSettings);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(20, 205, 241, 31));
        label_11->setFont(font3);
        label_11->setStyleSheet(QString::fromUtf8("background-color: rgb(0,0,0,0);\n"
"qproperty-alignment: AlignLeft;"));
        label_5 = new QLabel(frameSettings);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(30, 281, 151, 17));
        QFont font4;
        font4.setPointSize(8);
        label_5->setFont(font4);
        label_5->setStyleSheet(QString::fromUtf8("background-color: rgb(0,0,0,0);\n"
"color: rgb(38, 24, 24);\n"
"qproperty-alignment: AlignCenter;"));
        label_7 = new QLabel(frameSettings);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, 0, 201, 17));
        QFont font5;
        font5.setPointSize(6);
        label_7->setFont(font5);
        label_7->setStyleSheet(QString::fromUtf8("background-color: rgb(0,0,0,0);\n"
"color: rgb(100,100,100);\n"
"qproperty-alignment: AlignLeft;"));
        long_rest_box = new QSpinBox(frameSettings);
        long_rest_box->setObjectName(QString::fromUtf8("long_rest_box"));
        long_rest_box->setGeometry(QRect(240, 200, 91, 31));
        long_rest_box->setFont(font);
        long_rest_box->setStyleSheet(QString::fromUtf8("background-color: rgb(220, 220, 220);"));
        long_rest_box->setMaximum(300);
        long_rest_box->setValue(20);
        short_rest_box = new QSpinBox(frameSettings);
        short_rest_box->setObjectName(QString::fromUtf8("short_rest_box"));
        short_rest_box->setGeometry(QRect(240, 140, 91, 31));
        short_rest_box->setFont(font);
        short_rest_box->setStyleSheet(QString::fromUtf8("background-color: rgb(220, 220, 220);"));
        short_rest_box->setMaximum(3000);
        short_rest_box->setValue(20);
        duration_box = new QSpinBox(frameSettings);
        duration_box->setObjectName(QString::fromUtf8("duration_box"));
        duration_box->setGeometry(QRect(240, 80, 91, 31));
        duration_box->setFont(font);
        duration_box->setStyleSheet(QString::fromUtf8("background-color: rgb(220, 220, 220);"));
        duration_box->setMaximum(300);
        duration_box->setValue(20);
        duration_box->setDisplayIntegerBase(10);
        session_box = new QSpinBox(frameSettings);
        session_box->setObjectName(QString::fromUtf8("session_box"));
        session_box->setGeometry(QRect(240, 260, 91, 31));
        session_box->setFont(font);
        session_box->setStyleSheet(QString::fromUtf8("background-color: rgb(220, 220, 220);"));
        sound_effect_ckbox = new QCheckBox(frameSettings);
        sound_effect_ckbox->setObjectName(QString::fromUtf8("sound_effect_ckbox"));
        sound_effect_ckbox->setGeometry(QRect(153, 310, 15, 15));
        QPalette palette1;
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        QLinearGradient gradient(0.492366, 0, 0.497, 1);
        gradient.setSpread(QGradient::PadSpread);
        gradient.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient.setColorAt(0, QColor(56, 239, 125, 255));
        gradient.setColorAt(1, QColor(17, 153, 142, 255));
        QBrush brush2(gradient);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush1);
        QBrush brush3(QColor(246, 246, 245, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(119, 119, 118, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(159, 159, 157, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush1);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        QLinearGradient gradient1(0.492366, 0, 0.497, 1);
        gradient1.setSpread(QGradient::PadSpread);
        gradient1.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient1.setColorAt(0, QColor(56, 239, 125, 255));
        gradient1.setColorAt(1, QColor(17, 153, 142, 255));
        QBrush brush6(gradient1);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush6);
        QLinearGradient gradient2(0.492366, 0, 0.497, 1);
        gradient2.setSpread(QGradient::PadSpread);
        gradient2.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient2.setColorAt(0, QColor(56, 239, 125, 255));
        gradient2.setColorAt(1, QColor(17, 153, 142, 255));
        QBrush brush7(gradient2);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush7);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        QBrush brush8(QColor(255, 255, 220, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush1);
        QBrush brush9(QColor(255, 255, 255, 128));
        brush9.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        QLinearGradient gradient3(0.492366, 0, 0.497, 1);
        gradient3.setSpread(QGradient::PadSpread);
        gradient3.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient3.setColorAt(0, QColor(56, 239, 125, 255));
        gradient3.setColorAt(1, QColor(17, 153, 142, 255));
        QBrush brush10(gradient3);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush10);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        QLinearGradient gradient4(0.492366, 0, 0.497, 1);
        gradient4.setSpread(QGradient::PadSpread);
        gradient4.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient4.setColorAt(0, QColor(56, 239, 125, 255));
        gradient4.setColorAt(1, QColor(17, 153, 142, 255));
        QBrush brush11(gradient4);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush11);
        QLinearGradient gradient5(0.492366, 0, 0.497, 1);
        gradient5.setSpread(QGradient::PadSpread);
        gradient5.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient5.setColorAt(0, QColor(56, 239, 125, 255));
        gradient5.setColorAt(1, QColor(17, 153, 142, 255));
        QBrush brush12(gradient5);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush12);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        QLinearGradient gradient6(0.492366, 0, 0.497, 1);
        gradient6.setSpread(QGradient::PadSpread);
        gradient6.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient6.setColorAt(0, QColor(56, 239, 125, 255));
        gradient6.setColorAt(1, QColor(17, 153, 142, 255));
        QBrush brush13(gradient6);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush13);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        QLinearGradient gradient7(0.492366, 0, 0.497, 1);
        gradient7.setSpread(QGradient::PadSpread);
        gradient7.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient7.setColorAt(0, QColor(56, 239, 125, 255));
        gradient7.setColorAt(1, QColor(17, 153, 142, 255));
        QBrush brush14(gradient7);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush14);
        QLinearGradient gradient8(0.492366, 0, 0.497, 1);
        gradient8.setSpread(QGradient::PadSpread);
        gradient8.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient8.setColorAt(0, QColor(56, 239, 125, 255));
        gradient8.setColorAt(1, QColor(17, 153, 142, 255));
        QBrush brush15(gradient8);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush15);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        QBrush brush16(QColor(238, 238, 236, 255));
        brush16.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush16);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush1);
        QBrush brush17(QColor(0, 0, 0, 128));
        brush17.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush17);
#endif
        sound_effect_ckbox->setPalette(palette1);
        sound_effect_ckbox->setTristate(false);
        label_8 = new QLabel(frameSettings);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(53, 308, 101, 17));
        label_8->setStyleSheet(QString::fromUtf8("background-color: rgba(0, 0, 0, 0);"));
        notif_ckbox = new QCheckBox(frameSettings);
        notif_ckbox->setObjectName(QString::fromUtf8("notif_ckbox"));
        notif_ckbox->setGeometry(QRect(330, 310, 15, 15));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        QLinearGradient gradient9(0.492366, 0, 0.497, 1);
        gradient9.setSpread(QGradient::PadSpread);
        gradient9.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient9.setColorAt(0, QColor(56, 239, 125, 255));
        gradient9.setColorAt(1, QColor(17, 153, 142, 255));
        QBrush brush18(gradient9);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush18);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette2.setBrush(QPalette::Active, QPalette::BrightText, brush1);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        QLinearGradient gradient10(0.492366, 0, 0.497, 1);
        gradient10.setSpread(QGradient::PadSpread);
        gradient10.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient10.setColorAt(0, QColor(56, 239, 125, 255));
        gradient10.setColorAt(1, QColor(17, 153, 142, 255));
        QBrush brush19(gradient10);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush19);
        QLinearGradient gradient11(0.492366, 0, 0.497, 1);
        gradient11.setSpread(QGradient::PadSpread);
        gradient11.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient11.setColorAt(0, QColor(56, 239, 125, 255));
        gradient11.setColorAt(1, QColor(17, 153, 142, 255));
        QBrush brush20(gradient11);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush20);
        palette2.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        QLinearGradient gradient12(0.492366, 0, 0.497, 1);
        gradient12.setSpread(QGradient::PadSpread);
        gradient12.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient12.setColorAt(0, QColor(56, 239, 125, 255));
        gradient12.setColorAt(1, QColor(17, 153, 142, 255));
        QBrush brush21(gradient12);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush21);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        QLinearGradient gradient13(0.492366, 0, 0.497, 1);
        gradient13.setSpread(QGradient::PadSpread);
        gradient13.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient13.setColorAt(0, QColor(56, 239, 125, 255));
        gradient13.setColorAt(1, QColor(17, 153, 142, 255));
        QBrush brush22(gradient13);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush22);
        QLinearGradient gradient14(0.492366, 0, 0.497, 1);
        gradient14.setSpread(QGradient::PadSpread);
        gradient14.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient14.setColorAt(0, QColor(56, 239, 125, 255));
        gradient14.setColorAt(1, QColor(17, 153, 142, 255));
        QBrush brush23(gradient14);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush23);
        palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
#endif
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        QLinearGradient gradient15(0.492366, 0, 0.497, 1);
        gradient15.setSpread(QGradient::PadSpread);
        gradient15.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient15.setColorAt(0, QColor(56, 239, 125, 255));
        gradient15.setColorAt(1, QColor(17, 153, 142, 255));
        QBrush brush24(gradient15);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush24);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        QLinearGradient gradient16(0.492366, 0, 0.497, 1);
        gradient16.setSpread(QGradient::PadSpread);
        gradient16.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient16.setColorAt(0, QColor(56, 239, 125, 255));
        gradient16.setColorAt(1, QColor(17, 153, 142, 255));
        QBrush brush25(gradient16);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush25);
        QLinearGradient gradient17(0.492366, 0, 0.497, 1);
        gradient17.setSpread(QGradient::PadSpread);
        gradient17.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient17.setColorAt(0, QColor(56, 239, 125, 255));
        gradient17.setColorAt(1, QColor(17, 153, 142, 255));
        QBrush brush26(gradient17);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush26);
        palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush16);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush17);
#endif
        notif_ckbox->setPalette(palette2);
        notif_ckbox->setTristate(false);
        label_12 = new QLabel(frameSettings);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(238, 308, 101, 17));
        label_12->setStyleSheet(QString::fromUtf8("background-color: rgba(0, 0, 0, 0);"));
        startBtn = new QPushButton(frameSettings);
        startBtn->setObjectName(QString::fromUtf8("startBtn"));
        startBtn->setGeometry(QRect(150, 341, 110, 30));
        startBtn->setFont(font3);
        startBtn->setStyleSheet(QString::fromUtf8("background-color: rgb(129, 238, 107);"));
        stack->addWidget(page_settings);
        Timer->setCentralWidget(centralwidget);

        retranslateUi(Timer);

        stack->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Timer);
    } // setupUi

    void retranslateUi(QMainWindow *Timer)
    {
        Timer->setWindowTitle(QApplication::translate("Timer", "Pomodoro Timer", nullptr));
        actionsend_notification->setText(QApplication::translate("Timer", "send notification", nullptr));
#ifndef QT_NO_TOOLTIP
        continueOrPause->setToolTip(QApplication::translate("Timer", "<html><head/><body><p><span style=\" color:#ffffff;\">Pause timer</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        continueOrPause->setText(QApplication::translate("Timer", "PushButton", nullptr));
        status->setText(QApplication::translate("Timer", "TextLabel", nullptr));
#ifndef QT_NO_TOOLTIP
        nextBtn->setToolTip(QApplication::translate("Timer", "<html><head/><body><p><span style=\" color:#ffffff;\">Skip to next session</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        nextBtn->setText(QApplication::translate("Timer", "PushButton", nullptr));
#ifndef QT_NO_TOOLTIP
        endBtn->setToolTip(QApplication::translate("Timer", "<html><head/><body><p><span style=\" color:#ffffff;\">Stop timer</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        endBtn->setText(QApplication::translate("Timer", "PushButton", nullptr));
        time->setText(QApplication::translate("Timer", "TextLabel", nullptr));
        label->setText(QApplication::translate("Timer", "Pomodoro Timer", nullptr));
        tomato_label->setText(QApplication::translate("Timer", "TextLabel", nullptr));
        label_2->setText(QApplication::translate("Timer", "minutes", nullptr));
        label_3->setText(QApplication::translate("Timer", "seconds", nullptr));
        label_4->setText(QApplication::translate("Timer", "minutes", nullptr));
#ifndef QT_NO_TOOLTIP
        label_6->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        label_6->setText(QApplication::translate("Timer", "Sessions to long rest :", nullptr));
#ifndef QT_NO_TOOLTIP
        label_9->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        label_9->setText(QApplication::translate("Timer", "Focus duration :", nullptr));
        label_10->setText(QApplication::translate("Timer", "Short break duration :", nullptr));
        label_11->setText(QApplication::translate("Timer", "Long break duration :", nullptr));
        label_5->setText(QApplication::translate("Timer", "0 means no long break", nullptr));
        label_7->setText(QApplication::translate("Timer", "Created by Shen Yien with Qt Creator", nullptr));
#ifndef QT_NO_TOOLTIP
        long_rest_box->setToolTip(QApplication::translate("Timer", "How long each long break session is?", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        short_rest_box->setToolTip(QApplication::translate("Timer", "How long each short break session is?", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        duration_box->setToolTip(QApplication::translate("Timer", "How long each focus session is?", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        session_box->setToolTip(QApplication::translate("Timer", "How many focus session before a long break?", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        sound_effect_ckbox->setToolTip(QApplication::translate("Timer", "<html><head/><body><p>If there should be a sound effect when session changes</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        sound_effect_ckbox->setText(QString());
        label_8->setText(QApplication::translate("Timer", "Sound effect?", nullptr));
#ifndef QT_NO_TOOLTIP
        notif_ckbox->setToolTip(QApplication::translate("Timer", "<html><head/><body><p>If there should a notification popup when session changes</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        notif_ckbox->setText(QString());
        label_12->setText(QApplication::translate("Timer", "Notification?", nullptr));
        startBtn->setText(QApplication::translate("Timer", "START", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Timer: public Ui_Timer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TIMER_H
