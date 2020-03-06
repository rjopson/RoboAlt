
#ifndef _FLIGHT_DATA_H
#define _FLIGHT_DATA_H

#include <iostream>
#include <vector>

#include "Matrix.h"


class FlightData
{
public:
	FlightData();
	~FlightData();	

	int lengthVector;

	std::vector<double> time;
	std::vector<double> altitudeMSL, altitudeAGL;
	std::vector<double> velocity;
	std::vector<double> acceleration;
	std::vector<double> machNumber, reynoldsNumber, dynamicPressure;
	std::vector<double> drag, dragCoefficient;
	std::vector<double> mass;
	std::vector<double> pressure, temperature;
	double altitudeMaxMSL, altitudeMaxAGL, velocityMax, accelerationMax;
	double timeLiftoff, timeBurnout, timeApogee, timeMainDeploy, timeLanding;
	double timeOfFlight, timeToApogee;
	double velocityOffRail;

	std::vector<double> altitudeBaro, altitudeAccerlerometer;	
	std::vector<double> accelerationX, accelerationY, accelerationZ, accelerationAxial, accelerationZ_high;
	std::vector<double> rotationX, rotationY, rotationZ;
	std::vector<double> voltage;	

	void print(); //debug
};
#endif



