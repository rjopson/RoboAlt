#include "flight_data.h"

FlightData::FlightData() {}

FlightData::~FlightData() {}

ReducedData FlightData::Reduced() {
	reduced_.length = Length();
	reduced_.altitude_msl_max = AltitudeMslMax();
	reduced_.altitude_agl_max = AltitudeAglMax();
	reduced_.velocity_max = VelocityMax();
	reduced_.velocity_off_rail = VelocityOffRail();
	reduced_.acceleration_max = AccelerationMax();
	reduced_.acceleration_min = AccelerationMin();
	reduced_.dynamic_pressure_max = DynamicPressureMax();
	reduced_.time_burnout = TimeBurnout();
	reduced_.time_apogee = TimeApogee();
	reduced_.time_main_deploy = TimeMainDeploy();
	reduced_.time_of_flight = TimeOfFlight();
	reduced_.descent_rate_drogue = DescentRateDrogue();
	reduced_.descent_rate_main = DescentRateMain();

	return reduced_;
}

double FlightData::AltitudeMslMax() const {
	return reduced_.altitude_msl[reduced_.events.at(Event::APOGEE)];
}

double FlightData::AltitudeAglMax() const {
	return reduced_.altitude_agl[reduced_.events.at(Event::APOGEE)];
}

double FlightData::VelocityMax() const {
	return *std::max_element(reduced_.velocity.begin(), reduced_.velocity.end());
}

double FlightData::VelocityOffRail() const {
	return -1.0;
}

double FlightData::AccelerationMax() const {
	return *std::max_element(reduced_.acceleration.begin(), reduced_.acceleration.end());
}

double FlightData::AccelerationMin() const {
	return *std::min_element(reduced_.acceleration.begin(), reduced_.acceleration.end());
}

double FlightData::DynamicPressureMax() const {
	return *std::max_element(reduced_.dynamic_pressure.begin(), reduced_.dynamic_pressure.end());
}

double FlightData::TimeBurnout() const {
	return reduced_.time[reduced_.events.at(Event::BURNOUT)];
}

double FlightData::TimeApogee() const {
	return reduced_.time[reduced_.events.at(Event::APOGEE)];
}

double FlightData::TimeMainDeploy() const {
	return reduced_.time[reduced_.events.at(Event::ALTITUDE_MAIN)];
}

double FlightData::TimeOfFlight() const {
	return reduced_.time[reduced_.events.at(Event::GROUND)];
}

double FlightData::DescentRateDrogue() const {	

	bool drogue_flight_phase = false;
	for (auto phase : reduced_.phase) {
		if (phase == Phase::DESCENT_DROGUE) {
			drogue_flight_phase = true;
			break;
		}
	}

	if (drogue_flight_phase) {
		double alt1 = reduced_.altitude_msl[reduced_.events.at(Event::APOGEE)];
		double time1 = reduced_.time[reduced_.events.at(Event::APOGEE)];
		double alt2 = reduced_.altitude_msl[reduced_.events.at(Event::ALTITUDE_MAIN)];
		double time2 = reduced_.time[reduced_.events.at(Event::ALTITUDE_MAIN)];
		return -1*(alt1 - alt2) / (time1 - time2);
	}

	else {
		return NAN;
	}
}

double FlightData::DescentRateMain() const {

	bool main_flight_phase = false;
	for (auto phase : reduced_.phase) {
		if (phase == Phase::DESCENT_MAIN) {
			main_flight_phase = true;
			break;
		}
	}

	//check if there is a drogue phase. If there is, start from main deploy. Otherwise from apogee
	int start = reduced_.events.at(Event::APOGEE);
	for (auto phase : reduced_.phase) {
		if (phase == Phase::DESCENT_DROGUE) {
			int start = reduced_.events.at(Event::ALTITUDE_MAIN);
			break;
		}
	}

	if (main_flight_phase) {
		double alt1 = reduced_.altitude_msl[start];
		double time1 = reduced_.time[start];
		double alt2 = reduced_.altitude_msl[reduced_.events.at(Event::GROUND)];
		double time2 = reduced_.time[reduced_.events.at(Event::GROUND)];
		return -1* (alt1 - alt2) / (time1 - time2);
	}
	else {
		return NAN;
	}
}

int FlightData::Length() const {
	return reduced_.time.size();
}

void FlightData::Print() {

	for (int i = 0; i != reduced_.time.size(); i++) {
		std::cout 
			<< (int)reduced_.phase[i] << ", "
			<< reduced_.time[i] << ", "
			<< reduced_.altitude_agl[i] << ", "
			<< reduced_.velocity[i] << ", "
			<< reduced_.acceleration[i]
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
		case Phase::GROUND: {
			if (altitude < 5) {
				phase = Phase::GROUND;
			}
			break;
		}
	}
	return phase;
}

