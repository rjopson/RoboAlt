
#ifndef _FLIGHT_DATA_H
#define _FLIGHT_DATA_H

#include <iostream>
#include <vector>


class FlightData
{
public:
	FlightData();
	~FlightData();	

	std::vector<double> time;
	std::vector<double> altitude, velocity, acceleration;
	std::vector<double> machNumber, reynoldsNumber, dynamicPressure;
	std::vector<double> pressure, temperature;

	double altitudeMax, velocityMax, accelerationMax;

	double timeLiftoff, timeBurnout, timeApogee, timeMainDeploy, timeLanding;
	double timeOfFlight, timeToApogee;
};
#endif



