#include "Motor.h"

Motor::Motor(std::string name, std::string manufacturer, std::string comments,
    const double& diameter, const double& length, std::vector<double> delay, const double& mass_propellant, const double& mass_total,
    const std::vector<double>& data_time, const std::vector<double>& data_thrust)

    : name_(name),
      manufacturer_(manufacturer),
      comments_(comments),
      diameter_(diameter),
      length_(length),
      delay_(delay),
      mass_propellant_(mass_propellant),
      mass_total_(mass_total),
      data_time_(data_time),
      data_thrust_(data_thrust) {}

Motor::Motor(std::string file_path) {

	std::ifstream file(file_path);
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
				comments_.append(line);
			}
			
			//header line
			else if (!headerReached) {

				std::vector<std::string> line_list = Parse::split(line, ' ', false);
				name_ = line_list[0];
				diameter_ = stod(line_list[1])*0.001;
				length_ = stod(line_list[2])*0.001;
				mass_propellant_ = stod(line_list[4]);
				mass_total_ = stod(line_list[5]);
				manufacturer_ = line_list[6];

				//Could have multiple delays
				for (auto element : Parse::split(line_list[3], '-', false)) {
					delay_.push_back(stod(element));
				}
				headerReached = true;
			}
			
			//data line
			else {
				std::vector<std::string> line_list = Parse::split(line, ' ', false);

				data_time_.push_back(stod(line_list[0]));
				data_thrust_.push_back(stod(line_list[1]));
			}		
		}

		//most data doesn't have a 0 time and thrust, so add (otherwise integration of thrust is low)
		if (data_time_[0] > 0.0) {
			data_time_.insert(data_time_.begin(), 0.0);
			data_thrust_.insert(data_thrust_.begin(), 0.0);
		}
	}
	file.close();
}

Motor::~Motor() {}

double Motor::Area() {
	return kPi * std::pow(diameter_ / 2.0, 2);
}

double Motor::ImpulseTotal() {
	return MathUtilities::Integrate(data_time_, data_thrust_).back();
}

std::vector<double> Motor::Impulse() {
	return MathUtilities::Integrate(data_time_, data_thrust_);
}

double Motor::GetMass(const double& time) {

	std::vector<double> impulse_function = Impulse();

	return mass_total_ - (mass_propellant_ / impulse_function.back())*MathUtilities::InterpolateLinear(data_time_, impulse_function, time);
}

double Motor::GetThrust(const double& time) {

	return MathUtilities::InterpolateLinear(data_time_, data_thrust_, time);
}

void Motor::Print() {

	//std::vector<double> time(1000);

	for (int i = 0; i != 2000; i++) {
		std::cout << (double)i / 1000.0 << ", " << GetThrust((double)i/1000.0) << std::endl;
	}	
}
