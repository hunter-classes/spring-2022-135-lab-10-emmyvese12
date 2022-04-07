/*
Emmy Veselinov
CSCI 135 Lab-10
Classes
*/

#include <iostream>
#include "funcs.h"
#include "time.h"

int main(){

    Time t1A = {10, 32};
    int result1A = minutesSinceMidnight(t1A);
    std::cout << "==============TASK A==============" << std::endl;
    std::cout << "Number of minutes from midnight to " << t1A.h << ":" << t1A.m << " is " << result1A << " MINUTES\n" << std::endl;

    Time t2Aa = {10, 30};
    Time t2Ab = {13, 40};

    int result1B = minutesUntil(t2Aa, t2Ab);
    std::cout << "==============TASK B==============" << std::endl;
    std::cout << "Number of minutes in between " << t2Aa.h << ":" << t2Aa.m << " and " << t2Ab.h << ":" << t2Ab.m << " is " << result1B << " MINUTES\n" << std::endl;
    return 0;
}