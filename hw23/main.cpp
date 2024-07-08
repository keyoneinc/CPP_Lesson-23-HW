#include <iostream>
#include "Time_.h"
#include "Bus.h"

int main() {
	Time_ startTime(6,0,0,"utc");
	Time_ endTime(23,0,0,"utc");
	int routeDuration = 1800; // time in seconds
	int breakDuration = 600;

	Bus bus(startTime, endTime, routeDuration, breakDuration);
	bus.showSchedule();

	return 0;
}