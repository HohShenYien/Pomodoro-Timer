#ifndef COUNTDOWN_H
#define COUNTDOWN_H

// this is the main class for the functionality of counting down and resetting the time
class countDown
{
public:
    int duration, short_rest, long_rest, session, total, cur_time, cur_session;
    short status; // status 0 for focus, 1 for short rest, and 2 for long rest
    bool stateChanged;
    countDown(int duration, int short_rest, int long_rest, int session);

    int decrease(); // decrease current time for 1 second, and it will return current seconds left
    bool isStateChanged();
    void skip(); // skip to next session

private:
    void change_status(short new_stat); //this will change the status of the countDown

};

#endif // COUNTDOWN_H
