#pragma once
#include <iostream>
#include <vector>
#include "Time_.h"
using namespace std;

class Bus {
private:
    Time_ startTime;
    Time_ endTime;
    int routeDuration;
    int breakDuration;
    vector<Time_> schedule;

public:
    Bus(Time_ startTime, Time_ endTime, int routeDuration, int breakDuration);

    void generateSchedule();

    void showSchedule() const;

};