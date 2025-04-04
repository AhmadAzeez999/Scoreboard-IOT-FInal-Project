#ifndef TIMER_H
#define TIMER_H

#include <RTClib.h>

class Timer
{
public:
    Timer();  // Constructor
    void setupRTC();
    void startTimer(int minutes, int seconds);
    void pauseTimer();
    void resumeTimer();
    void stopTimer();
    void resetTimer();
    bool getTimerRunning();
    bool getTimerPaused();
    void updateTimer();
    void parseTimerInput(String input);

private:
    RTC_DS3231 rtc;
    DateTime targetTime;
    TimeSpan remainingTime;
    bool timerActive = false;
    bool timerPaused = false;
    unsigned long lastUpdateMillis = 0;
    int currentMin = 0;
    int currentSec = 0;
    void displayText(const char* text, const char* param1, const char* param2, const char* param3, bool flag);
};

#endif