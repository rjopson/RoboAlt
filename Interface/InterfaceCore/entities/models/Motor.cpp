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

Motor::Motor(std::string filePath) {

	std::ifstream file(filePath);
	std::string line;
	std::string command;

	if (!file.is_open()) {
		std::cout << "Unable to open file" << '\n';
	}
	else {

		bool headerReached = false;
		while (std::getline(file, line)) {			
			
			//comment line
			if (line.at(0) == ';') {
				line.erase(line.begin());
				line.append("\n");
				comments.append(line);
			}
			
			//header line
			else if (!headerReached) {

				std::vector<std::string> line_list = Parse::split(line, ' ', false);
				name = line_list[0];
				diameter = stod(line_list[1])*0.001;
				length = stod(line_list[2])*0.001;
				massPropellant = stod(line_list[4]);
				massTotal = stod(line_list[5]);
				manufacturer = line_list[6];

				//Could have multiple delays
				for (auto element : Parse::split(line_list[3], '-', false)) {
					delay.push_back(stod(element));
				}
				headerReached = true;
			}
			
			//data line
			else {
				std::vector<std::string> line_list = Parse::split(line, ' ', false);

				dataTime.push_back(stod(line_list[0]));
				dataThrust.push_back(stod(line_list[1]));
			}		
		}

		//most data doesn't have a 0 time and thrust, so add (otherwise integration of thrust is low)
		if (dataTime[0] > 0.0) {
			dataTime.insert(dataTime.begin(), 0.0);
			dataThrust.insert(dataThrust.begin(), 0.0);
		}
	}
	file.close();
}

Motor::~Motor() {
}

double Motor::area() {
	return PI * std::pow(diameter / 2.0, 2);
}

double Motor::impulseTotal() {
	return MathUtilities::integrate(dataTime, dataThrust).back();
}

std::vector<double> Motor::impulse() {
	return MathUtilities::integrate(dataTime, dataThrust);
}

double Motor::getMass(const double& in_time) {

	std::vector<double> impulseFunction = impulse();

	return massTotal - (massPropellant/ impulseFunction.back())*MathUtilities::interpolateLinear(dataTime, impulseFunction, in_time);
}

double Motor::getThrust(const double& in_time) {

	return MathUtilities::interpolateLinear(dataTime, dataThrust, in_time);
}

void Motor::print() {

	//std::vector<double> time(1000);

	for (int i = 0; i != 2000; i++) {
		std::cout << (double)i / 1000.0 << ", " << getThrust((double)i/1000.0) << std::endl;
	}	
}
