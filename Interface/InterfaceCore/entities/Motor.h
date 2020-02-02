
#ifndef _MOTOR_H
#define _MOTOR_H

#include <iostream>
#include <vector>


class Motor
{
public:
	Motor(std::string in_name, std::string in_manufacturer, std::string in_comments,
		double in_diameter, double in_length, std::vector<double> in_delay, double in_massPropellant, double in_massTotal,
		std::vector<double> in_dataTime, std::vector<double> in_dataThrust);
	~Motor();

private:

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
};
#endif

