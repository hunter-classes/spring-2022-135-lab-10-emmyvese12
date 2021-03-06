#include <iostream>
#include <string>
#include "funcs.h"
#include "time.h"
#include "movie.h"
#include "timeslot.h"

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

//task C
//to_string used to convert an int to a string
std::string printMovie(Movie mv){
    std::string g;
    std::string output = "";
    switch (mv.genre) {
        case ACTION   : g = "ACTION"; break;
        case COMEDY   : g = "COMEDY"; break;
        case DRAMA    : g = "DRAMA";  break;
        case ROMANCE  : g = "ROMANCE"; break;
        case THRILLER : g = "THRILLER"; break;
    }
    output = mv.title + " " + g + " (" + std::to_string(mv.duration) + " min)";

    return output;
}

std::string getTimeSlot(TimeSlot ts){
    std::string result = "";
    result += printMovie(ts.movie);
    result += " [starts at ";
    result += std::to_string(ts.startTime.h) + ":" + std::to_string(ts.startTime.m);
    result += ",";
    result += " ends by "; //ending time is the startime + duration

    Time t1 = {ts.startTime.h, ts.startTime.m};
    Time endTime = addMinutes(t1, ts.movie.duration);
    result += std::to_string(endTime.h) + ":" + std::to_string(endTime.m);
    result += "]";

    return result;


}

//task D
//scheduling x after y (immediately after the timeslot)

TimeSlot scheduleAfter(TimeSlot ts, Movie nextMovie){
    Time t1 = {ts.startTime.h, ts.startTime.m};
    TimeSlot newT = {nextMovie, addMinutes(t1, nextMovie.duration)};

    return newT;
}

//task E
//overlapping time slots

bool timeOverlap(TimeSlot ts1, TimeSlot ts2){
    bool isOverlap = false;
    Time first = {ts1.startTime.h, ts1.startTime.m};
    Time second = {ts2.startTime.h, ts2.startTime.m};

    //check which showing is earlier
    Time earlierShowing;
    int dur; //set the duration of the movie based on which showing is earlier
    if (minutesSinceMidnight(first) > minutesSinceMidnight(second)){
        earlierShowing = second;
        dur = ts2.movie.duration;
    }
    else {
        earlierShowing = first;
        dur = ts1.movie.duration;
    }


    int inBetween = minutesUntil(first, second); //find how many minutes it is in between both showings

    if (dur > inBetween){
        isOverlap = true;
    }

    return isOverlap;
}