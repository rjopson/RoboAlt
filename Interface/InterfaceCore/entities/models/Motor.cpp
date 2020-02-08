#include "Motor.h"



Motor::Motor(std::string in_name, std::string in_manufacturer, std::string in_comments,
	double in_diameter, double in_length, std::vector<double> in_delay, double in_massPropellant, double in_massTotal,
	std::vector<double> in_dataTime, std::vector<double> in_dataThrust) {

	name = in_name;
	diameter = in_diameter;
	length = in_length;
	delay = in_delay;
	massPropellant = in_massPropellant;
	massTotal = in_massTotal;
	manufacturer = in_manufacturer;
	dataTime = in_dataTime;
	dataThrust = in_dataThrust;
	comments = in_comments;
}

Motor::~Motor() {
}

double Motor::area() {
	return PI * std::pow(diameter / 2.0, 2);
}

double Motor::getMass(const double& in_time) {

}

double Motor::getThrust(const double& in_time) {

	return MathUtilities::interpolateLinear(dataTime, dataThrust, in_time);
}
