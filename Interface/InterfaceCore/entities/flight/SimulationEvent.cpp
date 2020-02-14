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

