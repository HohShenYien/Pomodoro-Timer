#include "timerthread.h"

TimerThread::TimerThread(QObject *parent) :
    QObject(parent)
{
    // initiate everything to false
    isRunning = false;
    _abort = false;
}

void TimerThread::requestWork(int duration, int short_rest, int long_rest, int session,
                              bool soundOrNot, bool notifOrNot){
    mutex.lock(); // supposedly it will lock the variables and prevent it from
                  // the access of other threads?
    isRunning = true; // initiate
    _abort = false;
    mutex.unlock();
    // create countdown object
    the_timer = new countDown(duration, short_rest, long_rest, session);
    emit workRequested();

    // set initial values
    this->soundOrNot = soundOrNot;
    this->notifOrNot = notifOrNot;

    // also play focus start sound if set to play
    if (soundOrNot) {
        emit sound(0);
    }

    // and send notification if chekced
    if (notifOrNot) {
        emit notif(0);
    }

}

void TimerThread::doWork()
// the main running process
{
    while(true) {
        // loops forever until the following occurs
        // Checks if the process should be aborted
        mutex.lock();
        bool abort = _abort;
        mutex.unlock();
        if (abort) {
            // breaks the process
            break;
        }
        // setting the screen time string
        // added a condition just in case user use more than 2 digits
        QString time_string;
        if (the_timer->duration >= 6000 || the_timer->short_rest >= 6000 || the_timer->long_rest >= 6000) {
            time_string.sprintf("%03i:%02i", the_timer->cur_time/60, the_timer->cur_time % 60);
        } else {
            time_string.sprintf("%02i:%02i", the_timer->cur_time/60, the_timer->cur_time % 60);
        }

        // Once every second changed, send a signal for renewing the time string
        emit valueChanged(time_string);
        // Here it will check if need to play a sound, also make sure the sound is only played when not pause
        if ((the_timer->cur_time <= 3) & isRunning & soundOrNot) {
            // 4 scenarios
            if (the_timer->cur_time > 0) {
                if (the_timer->status == 0) {
                    // first scenario for focus count down
                    emit sound(3);
                } else {
                    // second scenario for rest count down
                    emit sound(1);
                }
            } else {
                    if (the_timer->status == 0) {
                        // third scenario for rest start sound
                        emit sound(2);
                    } else {
                        // final scenario for focus start sound
                        emit sound(0);
                    }
                }
            }
        if (((the_timer->cur_time == 0) & isRunning & notifOrNot)) {
            // sends the notification when change status
            if (the_timer->status == 0) {
                // going to short or long break
                if (the_timer->session == 1) {
                    // long break
                    emit notif(2);
                }else {
                        // short break
                        emit notif(1);
                    }
            } else {
                // back to focus
                emit notif(0);
            }
        }
        // also updates the current status of the timer
        if (the_timer->isStateChanged()) {
            emit valueChanged(the_timer->status);
        }

        // This will wait 1 sec before decreasing timer by 1 if it is running
        QEventLoop loop;
        QTimer::singleShot(1000, &loop, SLOT(quit()));
        loop.exec();
        // check is it running, if not, skip to next iteration
        if (!isRunning) {
            continue;
        }
        the_timer->decrease();

    }
    // ended, so isRunning is false
    isRunning = false;
    //Once 60 sec passed, the finished signal is sent
    emit finished();
}

void TimerThread::pauseOrContinue() {
    if (isRunning) {
        isRunning = false;
    } else {
        isRunning = true;
    }
    emit valueChanged(-1);
}

void TimerThread::stop() {
    // ends the whole process
    mutex.lock();
    if (isRunning) {
        _abort = true;
    }
    mutex.unlock();
}
