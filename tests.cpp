#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"
#include "time.h"

// g++ -std=c++11 -c tests.cpp

//task A
TEST_CASE("Minutes Since Midnight for TASK A"){
    CHECK(minutesSinceMidnight({2, 45}) == 165);
    CHECK(minutesSinceMidnight({20, 5}) == 1205);
    CHECK(minutesSinceMidnight({5, 59}) == 359);
    CHECK(minutesSinceMidnight({13, 12}) == 792);
    CHECK(minutesSinceMidnight({8, 9}) == 489);
    CHECK(minutesSinceMidnight({0, 1}) == 1);
    CHECK(minutesSinceMidnight({23, 59}) == 1439);

}

TEST_CASE("Minutes Until Time A to Time B for TASK A"){
    CHECK(minutesUntil({10, 30}, {13, 40}) == 190);
    CHECK(minutesUntil({2, 40}, {19, 20}) == 1000);
    CHECK(minutesUntil({21, 1}, {23, 55}) == 174);
    CHECK(minutesUntil({9, 59}, {3, 2}) == -417);
    CHECK(minutesUntil({14, 38}, {13, 18}) == -80);
    

}

//task B
TEST_CASE("Add Minutes to Old Time for TASK B"){
    Time t1 = {4,30};
    int min1 = 30;
    CHECK((addMinutes(t1, min1)).h == 5);
    CHECK((addMinutes(t1, min1)).m == 0);
    Time t2 = {13,45};
    int min2 = 22;
    CHECK((addMinutes(t2, min2)).h == 14);
    CHECK((addMinutes(t2, min2)).m == 7);
    Time t3 = {21, 2};
    int min3 = 60;
    CHECK((addMinutes(t3, min3)).h == 22);
    CHECK((addMinutes(t3, min3)).m == 2);
    Time t4 = {1, 55};
    int min4 = 80;
    CHECK((addMinutes(t4, min4)).h == 3);
    CHECK((addMinutes(t4, min4)).m == 15);
    Time t5 = {20, 8};
    int min5 = 121;
    CHECK((addMinutes(t5, min5)).h == 22);
    CHECK((addMinutes(t5, min5)).m == 9);

}
