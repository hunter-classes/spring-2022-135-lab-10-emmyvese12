#include <iostream>
#include "funcs.h"
#include "time.h"

//task A
int minutesSinceMidnight(Time time){
    //int hour = time.h;
    //int min = time.m;

    int count = 0;
    count += (time.h * 60);
    count += time.m;

    return count;
}

int minutesUntil(Time earlier, Time later){
    int count = 0;
    int earlierTimeMid = minutesSinceMidnight(earlier);
    int laterTimeMid = minutesSinceMidnight(later);

    count += laterTimeMid - earlierTimeMid;

    return count;
}