#ifndef _MOTOR_H
#define _MOTOR_H

#include <cmath>
#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>

#include "Parse.h"
#include "MathUtilities.h"

#define PI 3.141592653589793

class Motor
{
public:
	Motor(std::string in_name, std::string in_manufacturer, std::string in_comments,
		double in_diameter, double in_length, std::vector<double> in_delay, double in_massPropellant, double in_massTotal,
		std::vector<double> in_dataTime, std::vector<double> in_dataThrust);
	Motor(std::string filePath);
	~Motor();

	std::string name;
	double diameter;
	double length;
	std::vector<double> delay;
	double massPropellant;
	double massTotal;
	std::string manufacturer;
	std::vector<double> dataTime;
	std::vector<double> dataThrust;
	std::string comments;

	double getMass(const double& in_time); //interpolate data for single mass value
	double getThrust(const double& in_time); //interpolate data for single thrust value
	double area();

	//double isp();
	double impulseTotal();
	std::vector<double> impulse();
}; 
#endif


