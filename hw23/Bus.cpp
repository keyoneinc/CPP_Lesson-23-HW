#include "Bus.h"

Bus::Bus(Time_ startTime, Time_ endTime, int routeDuration, int breakDuration)
{
    this->startTime = startTime;
    this->endTime = endTime;
    this->routeDuration = routeDuration;
    this->breakDuration = breakDuration;
    generateSchedule();
}

void Bus::generateSchedule()
{
    schedule.clear();
    Time_ currentTime = startTime;

    while (currentTime <= endTime) {
        schedule.push_back(currentTime);
        currentTime += routeDuration + breakDuration;
    }
}

void Bus::showSchedule() const
{
    cout << "Bus schedule: " << endl;
    for (const Time_& time : schedule) {
        cout << time << " ";
    }
    cout << endl;
}
