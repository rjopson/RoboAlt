
#ifndef _SIMULATION_EVENT_H
#define _SIMULATION_EVENT_H

#define VELOCITY_LAUNCH_DETECT				1.0 //(m/s)
#define ACCELERATION_LAUNCH_DETECT			1.0 //(m/s^2) (gravity subtracted from this input)
#define ACCELERATION_COAST_DETECT			0.0 //(m/s^2)
#define VELOCITY_APOGEE_DETECT				0.0 //(m/s)

#include <vector>

enum class Event {
	LIFTOFF,
	BURNOUT,
	APOGEE,
	ALTITUDE_MAIN,
	GROUND,
	AT_TIME_DELAY
};

enum class Action {
	DEPLOY_DROGUE,
	DEPLOY_MAIN
};

class SimulationEvent
{
public:
	SimulationEvent(Event in_event, Action in_action, const double& in_timeDelay);
	SimulationEvent(Event in_event, Action in_action, const double& in_timeDelay, const double& altitudeMainDeploy);
	~SimulationEvent();

	Event event;
	Action action;
	bool complete;	
	double altitudeMainDeploy;

	double delayTimeFromEvent;
	double delayTimeOfFlight;

	void setDelayTimeOfFlight(const double & in_timeOfFlight);

	//bool detect(std::vector<double>& state);

	static bool launchDetect(const std::vector<double>& state);
	static bool coastDetect(const std::vector<double>& state);
	static bool apogeeDetect(const std::vector<double>& state);
	static bool mainDetect(const std::vector<double>& state);
	static bool groundDetect(const std::vector<double>& state);
};
#endif

