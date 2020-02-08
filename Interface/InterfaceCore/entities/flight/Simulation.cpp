#include "Simulation.h"

//Need logic to get from one state to another (most simply advance to next, only catch is when and how many chutes to deploy
	//this logic combines the current flight phase, current user event + user action to determine next state

	//possible flight phase: launchDetect, coastDetect, apogeeDetect, mainDetect, groundDetect
	//possible user flight events: launchDetect, coastDetect, apogeeDetect, mainDetect + time delay
	//possible actions: light next stage, deploy drogue, deploy main

	//if no user event, step to next flight phase at end of current
	//if user event with no time delay, step to flight phase determined by user action
	//if user event with time delay, step to next flight phase. Run delay amount of time (don't forget about if time crosses multiple phases).
	//Then step to flight phase determined by 
		//user action

	/*in each case, need loop to go through all user events:
		-if no user event matches the end of the phase, go to the next phase.
		-if a user event matches the end of the current flight phase, go to appropriate next phase based on user action
	*/


Simulation::Simulation(std::string in_name, std::string in_comments, const double& in_massPad, const double& in_elevationPad) :
	FlightData(in_name, in_comments, in_massPad, in_elevationPad) {

	phase = FlightPhase::DETECT_LAUNCH;
	odeStep = 0.05;
	timeMax = 100.0;
}

Simulation::~Simulation() {

}

void Simulation::run(const std::vector<double>& initialValues) {

	FlightPhase phase = FlightPhase::DETECT_LAUNCH;

	double timeStart = 0.0;
	double timeRun = timeMax;
	double timeOfFlight = 0.0;

	while (phase != FlightPhase::GROUND) {

		Event event = runPhase(phase, initialValues, timeStart, timeRun); //calculate current phase
		timeOfFlight = simResult.back()[0]; //current time of flight in loop
		phase = setPhase(event, timeOfFlight);
	}
	updateFlightData();
}	

FlightPhase Simulation::setPhase(Event event, const double& timeOfFlight) {

	bool userEventUsed = false;
	for (int i = 0; i != userEvents.size(); i++) {
		if (userEvents[i]->event == event) { //there is a user action which determines new phase of flight

			if (userEvents[i]->delayTimeFromEvent == 0.0) { //no time delay after event detected, so no fancy logic needed to deal with it
				userEventUsed = true;
				userEvents[i]->complete = true;

				switch (userEvents[i]->action) {

				case Action::DEPLOY_DROGUE:
					phase = FlightPhase::DESCSENT_DROGUE;

				case Action::DEPLOY_MAIN:
					phase = FlightPhase::DESCENT_MAIN;
				}
			}
			else { //there is a time delay so can't run user action immediately. Save to list of uncomplete actions
				userEvents[i]->setDelayTimeOfFlight(timeOfFlight);
				uncompleteUserEvents.push_back(userEvents[i]);
			}
		}
	}	

	if (event == Event::AT_TIME_DELAY) {
		
		for (int i = 0; i != uncompleteUserEvents.size(); i++) {
			if (!uncompleteUserEvents[i]->complete && 
				timeOfFlight >= uncompleteUserEvents[i]->delayTimeOfFlight) { //we've now waited long enough to perform action

				userEventUsed = true;
				uncompleteUserEvents[i]->complete = true;

				switch (uncompleteUserEvents[i]->action) {

				case Action::DEPLOY_DROGUE:
					phase = FlightPhase::DESCSENT_DROGUE;

				case Action::DEPLOY_MAIN:
					phase = FlightPhase::DESCENT_MAIN;
				}
			}
		}
	}

	if (!userEventUsed) { //there are no user actions to determine new phase of flight. Go to next default
				
		switch (event) {

		case Event::LIFTOFF:
			phase = FlightPhase::ASCENT_POWERED;

		case Event::BURNOUT:
			phase = FlightPhase::ASCENT_UNPOWERED;

		case Event::APOGEE:
			phase = FlightPhase::DESCENT_UNPOWERED;

		case Event::ALTITUDE_MAIN:
			phase = FlightPhase::DESCENT_MAIN;		

		case Event::GROUND:
			phase = FlightPhase::GROUND;
		}
	}

	return phase;
}

void Simulation::testRK45(Simulation* in_sim, 
	std::vector<double> (Simulation::* mf)(const double&, const std::vector<double>)) {

	std::vector<double> initialValues{ 0.0, 0.0 };

	MathUtilities::rk45(initialValues, in_sim->*mf, SimulationEvent::coastDetect, 0, 5, odeStep);
}

//void f(TestClass * obj, void (TestClass::* mf)()) { (obj->*mf)(); } and call it like f(this, &TestClass::function1)

Event Simulation::runPhase(FlightPhase phase, 
	const std::vector<double>& initialValues, const double& timeStart, const double& timeRun) {

	std::vector<std::vector<double>> result;
	Event event;

	double timeEnd = timeStart + timeRun;

	switch (phase) {

	case FlightPhase::DETECT_LAUNCH:
		//result = MathUtilities::rk45(initialValues, &Simulation::eomAscentPowered, SimulationEvent::launchDetect, timeStart, timeEnd, odeStep);
		event = Event::LIFTOFF;		
		break;

	case FlightPhase::ASCENT_POWERED:
		//result = MathUtilities::rk45(initialValues, &eomAscentPowered, SimulationEvent::coastDetect, timeStart, timeEnd, odeStep);
		event = Event::BURNOUT;
		break;

	case FlightPhase::ASCENT_UNPOWERED:
		//result = MathUtilities::rk45(initialValues, &eomAscentUnpowered, SimulationEvent::apogeeDetect, timeStart, timeEnd, odeStep);
		event = Event::APOGEE;
		break;

	case FlightPhase::DESCENT_UNPOWERED:
		//result = MathUtilities::rk45(initialValues, &eomAscentUnpowered, SimulationEvent::groundDetect, timeStart, timeEnd, odeStep);
		event = Event::GROUND;
		break;

	case FlightPhase::DESCSENT_DROGUE:
		//result = MathUtilities::rk45(initialValues, &eomDescentDrogue, SimulationEvent::mainDetect, timeStart, timeEnd, odeStep);
		event = Event::ALTITUDE_MAIN;
		break;

	case FlightPhase::DESCENT_MAIN:
		//result = MathUtilities::rk45(initialValues, &eomDescentMain, SimulationEvent::groundDetect, timeStart, timeEnd, odeStep);
		event = Event::GROUND;
		break;

	}	

	//in case time was reached instead of simulation stopping due to flight event
	if (result.back()[0] == timeEnd) {
		event = Event::AT_TIME_DELAY;
	}

	//add current phase to results
	simResult.insert(simResult.end(), result.begin(), result.end());
}

std::vector<double> Simulation::eomAscentPowered(const double& time, const std::vector<double>& state) {

	//Get acceleration
	double forceSum = motor->getThrust(time) - drag->getDragPowered(atmosphere->density(state[0]), state[1], atmosphere->speedOfSound(state[0]));
	double mass = massPad - motor->massTotal + motor->getMass(time);
	double acceleration = (forceSum / mass) - GRAVITY;

	//output solution to step
	std::vector<double> resultState;

	if (motor->getThrust(time) > (massPad - motor->massTotal + motor->getMass(time))*GRAVITY) { //enough thrust to take off?

		resultState.push_back(state[1]);
		resultState.push_back(acceleration);
	}
	else {
		resultState.push_back(0.0);
		resultState.push_back(0.0);
	}
	return resultState;
}

std::vector<double> Simulation::eomAscentUnpowered(const double& time, const std::vector<double>& state) {
	
	//Get acceleration
	double forceSum = -drag->getDragUnpowered(atmosphere->density(state[0]), state[1], atmosphere->speedOfSound(state[0]));
	double mass = massPad - motor->massPropellant;
	double acceleration = (forceSum / mass) - GRAVITY;

	//output solution to step
	std::vector<double> resultState{ state[1], acceleration };
	return resultState;
}

std::vector<double> Simulation::eomDescentUnpowered(const double& time, const std::vector<double>& state) {

	//Get acceleration
	double forceSum = drag->getDragUnpowered(atmosphere->density(state[0]), state[1], atmosphere->speedOfSound(state[0]));
	double mass = massPad - motor->massPropellant;
	double acceleration = (forceSum / mass) - GRAVITY;

	//output solution to step
	std::vector<double> resultState{ state[1], acceleration };
	return resultState;
}

std::vector<double> Simulation::eomDescentDrogue(const double& time, const std::vector<double>& state) {

	//Get acceleration
	double forceSum = drag->getDragDrogue(atmosphere->density(state[0]), state[1], atmosphere->speedOfSound(state[0]));
	double mass = massPad - motor->massPropellant;
	double acceleration = (forceSum / mass) - GRAVITY;

	//output solution to step
	std::vector<double> resultState{ state[1], acceleration };
	return resultState;
}

std::vector<double> Simulation::eomDescentMain(const double& time, const std::vector<double>& state) {
	
	//Get acceleration
	double forceSum = drag->getDragDrogue(atmosphere->density(state[0]), state[1], atmosphere->speedOfSound(state[0])) +
		drag->getDragMain(atmosphere->density(state[0]), state[1], atmosphere->speedOfSound(state[0]));
	
	double mass = massPad - motor->massPropellant;
	double acceleration = (forceSum / mass) - GRAVITY;

	//output solution to step
	std::vector<double> resultState{ state[1], acceleration };
	return resultState;
}

void Simulation::updateFlightData() {

	time.clear();
	altitude.clear();
	velocity.clear();
	acceleration.clear();

	for (auto line : simResult) {
		time.push_back(line[0]);
		altitude.push_back(line[1]);
		velocity.push_back(line[2]);
		acceleration.push_back(line[3]);
	}
}

