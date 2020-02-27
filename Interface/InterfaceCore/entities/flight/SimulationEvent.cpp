#include "SimulationEvent.h"

SimulationEvent::SimulationEvent(Event in_event, Action in_action, const double& in_timeDelay, Parachute* in_parachute, const double& in_altitudeMainDeploy) {
	event = in_event;
	action = in_action;
	timeDelay = in_timeDelay; 
	altitudeMainDeploy = in_altitudeMainDeploy;
	parachute = in_parachute;

	//complete = false;
}

SimulationEvent::~SimulationEvent() {
}

void SimulationEvent::setTimeToActivateAction(const double & in_timeOfFlight) {
	timeToActivateAction = in_timeOfFlight + timeDelay;
}

