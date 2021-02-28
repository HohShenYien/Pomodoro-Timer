#ifndef TIMERTHREAD_H
#define TIMERTHREAD_H

#include <QTimer>
#include <QEventLoop>
#include <QObject>
#include <QMutex>
#include <QString>
#include <QThread>

#include "countdown.h"


class TimerThread : public QObject
{

    Q_OBJECT
public:
    bool isRunning;
    QString status; // string for indicating status for later usage
    countDown *the_timer; // timer object
    explicit TimerThread(QObject *parent = 0); // constructor

    void requestWork(int duration, int short_rest, int long_rest, int session, bool soundOrNot,
                     bool notifOrNot); // ask the object to start work
    void pauseOrContinue();
    void stop();

public slots:
    void doWork(); // contain the running process

private:
    bool _abort;
    QMutex mutex;
    bool soundOrNot;
    bool notifOrNot;

signals:
    void workRequested(); // signal when work is requested

    void valueChanged(const QString &value); // signal when there is a value change on time left

    void valueChanged(int status); // signal when status changed

    void finished(); // signal when this thread has done its work

    void sound(int); // signal when needs to play a sound
    // 0 for focus start sound, 2 for rest start sound, 3 for focus count down sound
    // and 1 for rest count down sound, numbering follow current music index
    void notif(int); // a signal to send notification
    // 0 for focus notification, 1 for short rest notification, 2 for long rest notification
};

#endif // TIMERTHREAD_H
