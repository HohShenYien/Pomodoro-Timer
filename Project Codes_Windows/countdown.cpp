#include "countdown.h"

countDown::countDown(int duration, int short_rest, int long_rest, int session):
    duration(duration * 60), short_rest(short_rest), long_rest(long_rest * 60), session(session)
{
    cur_time = this->duration;
    cur_session = this->session;
    if (this->session == 0) {
        // set it to -1, so that it will not be taken care of
        // because I will use cur_session == 0 as the method to check
        cur_session = -1;
    }
    stateChanged = true;
    total = 0;
    status = 0;

}

int countDown::decrease() {
    this->cur_time--;
    if (this->cur_time == -1) {
        // check if currently is in what status
        switch (status) {
        case 0:
            // end of a study session, check if entering long or short break
            // and reduce the session count by 1
            if (--cur_session == 0) {
                // enters long break
                change_status(2);
                // reset cur_session
            } else {
                change_status(1);
            }
            break;
        case 1:
            // end of a short break, go back to study session
            change_status(0);
            break;
        case 2:
            // end of a long break, go back to study session
            change_status(0);
            break;
        }
    }
    return cur_time;
}

void countDown::change_status(short new_stat) {
    status = new_stat;
    stateChanged = true;
    switch (status) {
    case 0:
        // going back to study, so setting the cur_time
        cur_time = duration;
        break;

    case 1:
        // going to short break
        // will add the time studied to total
        cur_time = short_rest;
        total += duration;
        break;
    case 2:
        // going to long break, so reset session and add time studied to total
        cur_session = session;
        cur_time = long_rest;
        total += duration;
        break;
    }
}

bool countDown::isStateChanged() {
    if (stateChanged) {
        stateChanged = false;
        return true;
    }
    return false;
}

void countDown::skip() {
    // it will set cur_time to 1 (because decrease will get called one time again) and call decrease
    // okay, so because the total time will be added directly into the total
    // so I need to find a way to reduce the total time, and add the correct value back
    if (this->status == 0) {
        // this is when I need to subtract and put the correct time
        total -= cur_time;
    }
    this->cur_time = 0;
    //this->decrease();
}
