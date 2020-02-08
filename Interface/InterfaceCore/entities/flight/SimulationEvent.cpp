#include "SimulationEvent.h"

SimulationEvent::SimulationEvent(Event in_event, Action in_action, const double& in_timeDelay) {
	event = in_event;
	action = in_action;
	delayTimeFromEvent = in_timeDelay;

	complete = false;
}

SimulationEvent::SimulationEvent(Event in_event, Action in_action, const double& in_timeDelay, const double& in_altitudeMainDeploy) {
	event = in_event;
	action = in_action;
	delayTimeFromEvent = in_timeDelay; 
	altitudeMainDeploy = in_altitudeMainDeploy;

	complete = false;
}

SimulationEvent::~SimulationEvent() {
}

void SimulationEvent::setDelayTimeOfFlight(const double & in_timeOfFlight) {
	delayTimeOfFlight = in_timeOfFlight + delayTimeFromEvent;
}

bool SimulationEvent::launchDetect(const std::vector<double>& state) {

	if (state[1] > VELOCITY_LAUNCH_DETECT && state[2] > ACCELERATION_LAUNCH_DETECT) {
		return true;
	}
	else {
		return false;
	}
}

bool SimulationEvent::coastDetect(const std::vector<double>& state) {

	if (state[2] < ACCELERATION_COAST_DETECT) {
		return true;
	}
	else {
		return false;
	}
}

bool SimulationEvent::apogeeDetect(const std::vector<double>& state) {

	if (state[1] < VELOCITY_APOGEE_DETECT) {
		return true;
	}
	else {
		return false;
	}
}

bool SimulationEvent::mainDetect(const std::vector<double>& state) {

	if (state[0] < 500.0) {
		return true;
	}
	else {
		return false;
	}
}

bool SimulationEvent::groundDetect(const std::vector<double>& state) {

	if (state[0] < 0.0) {
		return true;
	}
	else {
		return false;
	}
}

