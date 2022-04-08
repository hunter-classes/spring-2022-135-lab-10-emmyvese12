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

//task B
Time addMinutes(Time time0, int min){
    int hours = 0;
    if (min/60 >= 1){ //checks if min is greater than 1 hour so we can calculate the # of hrs in min and see how many hrs we can add to time0.h 
    //(min will also update, so it removes the num of hours found)
    
        hours = (min/60);
        min = min - (60*hours);
    }

    time0.h = (time0.h + hours);
    time0.m = (time0.m + min);

    if (time0.m >= 60){
        time0.h++;
        time0.m = time0.m - 60;
    }
    Time result = {time0.h, time0.m};

    return result;
}