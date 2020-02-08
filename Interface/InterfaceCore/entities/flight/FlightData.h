
#ifndef _FLIGHT_DATA_H
#define _FLIGHT_DATA_H

#include <iostream>
#include <vector>

#include "Atmosphere.h"
#include "Drag.h"
#include "MathUtilities.h"
#include "Motor.h"

class FlightData
{
public:
	FlightData(std::string in_name, std::string in_comments, const double& in_massPad, const double& in_elevationPad);
	~FlightData();

	std::string name;
	std::string comments;

	Atmosphere* atmosphere;
	Drag* drag;
	Motor* motor;	

	double elevationPad;
	double massPad;

	std::vector<double> time;
	std::vector<double> altitude, velocity, acceleration;
	std::vector<double> machNumber, reynoldsNumber, dynamicPressure;
	std::vector<double> pressure, temperature;

	double altitudeMax, velocityMax, accelerationMax;

	double timeLiftoff, timeBurnout, timeApogee, timeMainDeploy, timeLanding;
	double timeOfFlight, timeToApogee;
};
#endif



