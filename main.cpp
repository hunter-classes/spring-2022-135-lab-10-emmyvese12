/*
Emmy Veselinov
CSCI 135 Lab-10
Classes
*/

#include <iostream>
#include "funcs.h"
#include "time.h"

int main(){
    //task A
    Time t1A = {10, 32};
    int result1A = minutesSinceMidnight(t1A);
    std::cout << "==============TASK A==============" << std::endl;
    std::cout << "Number of minutes from midnight to " << t1A.h << ":" << t1A.m << " is " << result1A << " MINUTES\n" << std::endl;

    Time t2Aa = {10, 30};
    Time t2Ab = {13, 40};
    int result1B = minutesUntil(t2Aa, t2Ab);
    std::cout << "Number of minutes in between " << t2Aa.h << ":" << t2Aa.m << " and " << t2Ab.h << ":" << t2Ab.m << " is " << result1B << " MINUTES\n" << std::endl;

    //task B
    Time time0B = {8,10};
    int min1 = 75;
    Time result2A = addMinutes(time0B, min1);
    std::cout << "==============TASK B==============" << std::endl;
    std::cout << "Old Time: " << time0B.h << ":" << time0B.m << " Minutes Shift: " << min1 << " New Time: " << result2A.h << ":" << result2A.m << std::endl;
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

    



    return 0;
}