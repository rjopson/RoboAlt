#include "flight_data.h"

FlightData::FlightData() {}

FlightData::~FlightData() {}

std::vector<double> FlightData::Time() const {
	return time_;
}

std::vector<double> FlightData::AltitudeMsl() const {
	return altitude_msl_;
}

std::vector<double> FlightData::AltitudeAgl() const {
	return altitude_agl_;
}

std::vector<double> FlightData::Velocity() const {
	return velocity_;
}

std::vector<double> FlightData::Acceleration() const {
	return acceleration_;
}

std::vector<double> FlightData::MachNumber() const {
	return mach_number_;
}

std::vector<double> FlightData::DynamicPressure() const {
	return dynamic_pressure_;
}

std::vector<double> FlightData::Drag() const {
	return drag_;
}

std::vector<double> FlightData::DragCoefficient() const {
	return drag_coefficient_;
}

std::vector<double> FlightData::Mass() const {
	return mass_;
}

std::vector<double> FlightData::Pressure() const {
	return pressure_;
}

std::vector<double> FlightData::Temperature() const {
	return temperature_;
}

std::vector<double> FlightData::Thrust() const {
	return thrust_;
}


double FlightData::AltitudeMslMax() const {
	return altitude_msl_[events_.at(Event::APOGEE)];
}

double FlightData::AltitudeAglMax() const {
	return altitude_agl_[events_.at(Event::APOGEE)];
}

double FlightData::VelocityMax() const {
	return *std::max_element(velocity_.begin(), velocity_.end());
}

//double FlightData::VelocityOffRail() const {
//	return 
//}

double FlightData::AccelerationMax() const {
	return *std::max_element(acceleration_.begin(), acceleration_.end());
}

double FlightData::DynamicPressureMax() const {
	return *std::max_element(dynamic_pressure_.begin(), dynamic_pressure_.end());
}

double FlightData::TimeBurnout() const {
	return time_[events_.at(Event::BURNOUT)];
}

double FlightData::TimeApogee() const {
	return time_[events_.at(Event::APOGEE)];
}

double FlightData::TimeMainDeploy() const {
	return time_[events_.at(Event::ALTITUDE_MAIN)];
}

double FlightData::TimeOfFlight() const {
	return time_[events_.at(Event::GROUND)];
}

double FlightData::DescentRateDrogue() const {	

	bool drogue_flight_phase = false;
	for (auto phase : phase_) {
		if (phase == Phase::DESCENT_DROGUE) {
			drogue_flight_phase = true;
			break;
		}
	}

	if (drogue_flight_phase) {
		auto first = velocity_.begin() + events_.at(Event::APOGEE);
		auto last = velocity_.begin() + events_.at(Event::ALTITUDE_MAIN);
		std::vector<double> flight_portion(first, last);
		return (-1.0)*MathUtilities::Average(flight_portion);
	}
	else {
		return NAN;
	}
}

double FlightData::DescentRateMain() const {

	bool main_flight_phase = false;
	for (auto phase : phase_) {
		if (phase == Phase::DESCENT_MAIN) {
			main_flight_phase = true;
			break;
		}
	}

	if (main_flight_phase) {
		auto first = velocity_.begin() + events_.at(Event::ALTITUDE_MAIN);
		auto last = velocity_.begin() + events_.at(Event::GROUND);
		std::vector<double> flight_portion(first, last);
		return (-1.0) * MathUtilities::Average(flight_portion);
	}
	else {
		return NAN;
	}
}

int FlightData::Length() const {
	return time_.size();
}

void FlightData::Print() {

	for (int i = 0; i != time_.size(); i++) {
		std::cout 
			<< (int)phase_[i] << ", "
			<< time_[i] << ", "
			<< altitude_agl_[i] << ", "
			<< velocity_[i] << ", "
			<< acceleration_[i]
			<< std::endl;
	}
}

Event FlightData::GetEvent(const std::string& val) {

	static std::map<std::string, Event> string_to_event{
	   { "LIFTOFF", Event::LIFTOFF },
	   { "BURNOUT", Event::BURNOUT },
	   { "APOGEE", Event::APOGEE },
	   { "ALTITUDE_MAIN", Event::ALTITUDE_MAIN },
	   { "GROUND", Event::GROUND },
	   { "NONE", Event::NONE }
	};
	auto x = string_to_event.find(val);
	if (x != std::end(string_to_event)) {
		return x->second;
	}
	//throw std::invalid_argument("");
}

Phase FlightData::UpdatePhase(const double& altitude, const double& velocity, const double& acceleration, const double& altitude_main, Phase phase_current) {

	Phase phase = phase_current;

	switch (phase) {
		case Phase::DETECT_LAUNCH: {
			if (velocity > 10.0 && acceleration > 5.0) {
				phase = Phase::ASCENT_POWERED;
			}
			break;
		}
		case Phase::ASCENT_POWERED: {
			if (acceleration < 0.0) {
				phase = Phase::ASCENT_UNPOWERED_STACKED;
			}
			break;
		}
		case Phase::ASCENT_UNPOWERED_STACKED: {
			if (velocity < 0.0) {
				phase = Phase::DESCENT_DROGUE;
			}
			break;
		}
		case Phase::DESCENT_DROGUE: {
			if (altitude < altitude_main) {
				phase = Phase::DESCENT_MAIN;
			}
			break;
		}
	}
	return phase;
}

