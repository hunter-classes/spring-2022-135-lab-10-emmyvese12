/*
Emmy Veselinov
CSCI 135 Lab-10
Classes, Enums, Movies
*/

#include <iostream>
#include "funcs.h"
#include "time.h"
#include "timeslot.h"
#include "movie.h"

int main(){
    //task A
    Time t1A = {10, 32};
    int result1A = minutesSinceMidnight(t1A);
    std::cout << "==============TASK A==============" << std::endl;
    std::cout << "Number of minutes from midnight to " << t1A.h << ":" << t1A.m << " is " << result1A << " MINUTES\n" << std::endl;

    Time t2Aa = {10, 30};
    Time t2Ab = {13, 40};
    int result2A = minutesUntil(t2Aa, t2Ab);
    std::cout << "Number of minutes in between " << t2Aa.h << ":" << t2Aa.m << " and " << t2Ab.h << ":" << t2Ab.m << " is " << result2A << " MINUTES\n" << std::endl;

    //task B
    Time time0B = {8,10};
    int min1 = 75;
    Time result1B = addMinutes(time0B, min1);
    std::cout << "==============TASK B==============" << std::endl;
    std::cout << "Old Time: " << time0B.h << ":" << time0B.m << " Minutes Shift: " << min1 << " New Time: " << result1B.h << ":" << result1B.m << std::endl;
    std::cout << "\n";
    Time time0B2 = {13, 25};
    int min2 = 45;
    Time result2B = addMinutes(time0B2, min2);
    std::cout << "Old Time: " <<time0B2.h << ":" << time0B2.m << " Minutes Shift: " << min2 << " New Time: " << result2B.h << ":" << result2B.m << std::endl;
    std::cout << "\n"; 

    //task C
    //std::string result1 = printMovie(movie1);
    //std::string result2 = getTimeSlot(morning);
    //std::cout << result2 << std::endl;

    Movie movie1 = {"Back to the Future", COMEDY, 116};
    Movie movie2 = {"Black Panther", ACTION, 134};
    Movie movie3 = {"Avatar", ACTION, 162};
    Movie movie4 = {"The Artist", DRAMA, 100};
    Movie movie5 = {"Marriage Story", ROMANCE, 136};
    TimeSlot morning1 = {movie1, {9, 15}};  
    TimeSlot daytime1 = {movie2, {12, 15}}; 
    TimeSlot evening1 = {movie2, {16, 45}};
    TimeSlot morning2 = {movie3, {10, 30}};
    TimeSlot daytime2 = {movie4, {13, 40}};
    TimeSlot evening2 = {movie5, {17, 20}};

    std::cout << "==============TASK C==============" << std::endl;
    std::string result1C = getTimeSlot(morning1);
    std::cout << result1C << std::endl;
    std::cout << "\n";
    std::string result2C = getTimeSlot(daytime1);
    std::cout << result2C << std::endl;
    std::cout << "\n";
     std::string result3C = getTimeSlot(evening1);
    std::cout << result3C << std::endl;
    std::cout << "\n";
    std::string result4C = getTimeSlot(morning2);
    std::cout << result4C << std::endl;
    std::cout << "\n";
    std::string result5C = getTimeSlot(daytime2);
    std::cout << result5C << std::endl;
    std::cout << "\n";
    std::string result6C = getTimeSlot(evening2);
    std::cout << result6C << std::endl;
    std::cout << "\n";

    //task D
    std::cout << "==============TASK D==============" << std::endl;
    TimeSlot result1D = scheduleAfter(morning1, movie1);
    std::cout << "The next showing for " << movie1.title << " is at " << result1D.startTime.h << ":" << result1D.startTime.m << std::endl;
    std::cout << "\n";
    TimeSlot result2D = scheduleAfter(daytime1, movie2);
    std::cout << "The next showing for " << movie2.title << " is at " << result2D.startTime.h << ":" << result2D.startTime.m << std::endl;


    //task E

    //THESE TWO DO OVERLAP
    //Movie movie2 = {"Black Panther", ACTION, 134};
    //TimeSlot daytime1 = {movie2, {12, 15}}; 

    //Movie movie4 = {"The Artist", DRAMA, 100};
    //TimeSlot daytime2 = {movie4, {13, 40}};
    
    std::cout << "==============TASK E==============" << std::endl;
    bool result1E = timeOverlap(daytime1, daytime2);
    std::cout << getTimeSlot(daytime1) << std::endl;
    std::cout << getTimeSlot(daytime2) << std::endl;
    std::cout << "\nDO THEY OVERLAP? " << result1E << " == Yes\n";
    std::cout << "----------------------------------" << std::endl;

    bool result2E = timeOverlap(morning1, evening2);
    std::cout << getTimeSlot(morning1) << std::endl;
    std::cout << getTimeSlot(evening2) << std::endl;
    std::cout << "\nDO THEY OVERLAP? " << result2E << " == No\n";
    std::cout << "----------------------------------" << std::endl;


    return 0;
}