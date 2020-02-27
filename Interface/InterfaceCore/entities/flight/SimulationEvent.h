
#ifndef _SIMULATION_EVENT_H
#define _SIMULATION_EVENT_H

#include <vector>
#include "Parachute.h"

enum class Event {
	LIFTOFF,
	BURNOUT,
	APOGEE,
	ALTITUDE_MAIN,
	GROUND,
	AT_TIME_DELAY
};

enum class Action {	
	SEPARATE_STAGE,
	LIGHT_STAGE,
	DEPLOY_DROGUE,
	DEPLOY_MAIN
};

class SimulationEvent
{
public:
	SimulationEvent(Event in_event, Action in_action, const double& in_timeDelay, 
		Parachute* in_parachute, const double& altitudeMainDeploy); 
	~SimulationEvent();

	Event event;
	Action action;
	//bool complete;

	double altitudeMainDeploy;
	Parachute* parachute;

	double timeDelay;
	double timeToActivateAction;

	void setTimeToActivateAction(const double & in_timeOfFlight);
};
#endif
