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

	//odeStep = 0.05;
	timeMax = 500.0;
}

Simulation::~Simulation() {

}

void Simulation::run(const std::vector<double>& initialValues, const double& odeStepAscent, const double& odeStepDescent) {

	FlightPhase phase = FlightPhase::DETECT_LAUNCH;

	double timeStart = 0.0;
	double timeRun = timeMax;
	double timeOfFlight = 0.0;
	std::vector<double> initial = initialValues;

	while (phase != FlightPhase::GROUND) {

		Event event;
		if (phase == FlightPhase::DETECT_LAUNCH ||
			phase == FlightPhase::ASCENT_POWERED ||
			phase == FlightPhase::ASCENT_UNPOWERED ||
			phase == FlightPhase::DESCENT_UNPOWERED) {

			event = runPhase(phase, initial, timeOfFlight, timeRun, odeStepAscent); //calculate current phase
		}
		else {
			event = runPhase(phase, initial, timeOfFlight, timeRun, odeStepDescent); //calculate current phase
		}

		//update current time and initial conditions
		timeOfFlight = simResult.back()[0]; 
		initial.clear();
		initial.push_back(simResult.back()[1]); 
		initial.push_back(simResult.back()[2]);

		phase = setPhase(event, timeOfFlight);
	}
	updateFlightData();
}	

FlightPhase Simulation::setPhase(Event event, const double& timeOfFlight) {

	FlightPhase phase;

	bool userEventUsed = false;
	for (int i = 0; i != userEvents.size(); i++) {
		if (userEvents[i]->event == event) { //there is a user action which determines new phase of flight

			if (userEvents[i]->delayTimeFromEvent == 0.0) { //no time delay after event detected, so no fancy logic needed to deal with it
				userEventUsed = true;
				userEvents[i]->complete = true;

				switch (userEvents[i]->action) {

				case Action::DEPLOY_DROGUE:
					phase = FlightPhase::DESCSENT_DROGUE;
					break;

				case Action::DEPLOY_MAIN:
					phase = FlightPhase::DESCENT_MAIN;
					break;
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
					break;

				case Action::DEPLOY_MAIN:
					phase = FlightPhase::DESCENT_MAIN;
					break;
				}
			}
		}
	}

	if (!userEventUsed) { //there are no user actions to determine new phase of flight. Go to next default
		
		switch (event) {

		case Event::LIFTOFF:
			phase = FlightPhase::ASCENT_POWERED;
			break;

		case Event::BURNOUT:
			phase = FlightPhase::ASCENT_UNPOWERED;
			break;

		case Event::APOGEE:
			phase = FlightPhase::DESCENT_UNPOWERED;
			break;

		case Event::ALTITUDE_MAIN:
			phase = FlightPhase::DESCENT_MAIN;		
			break;

		case Event::GROUND:
			phase = FlightPhase::GROUND;
			break;
		} 
	}
	return phase;
}

Event Simulation::runPhase(FlightPhase phase, 
	const std::vector<double>& initialValues, const double& timeStart, const double& timeRun, const double& odeStep) {

	std::vector<std::vector<double>> result;
	Event event;
	std::function<std::vector<double>(const double&, const std::vector<double>&)> eom;

	double timeEnd = timeStart + timeRun;

	switch (phase) {

	case FlightPhase::DETECT_LAUNCH:
		eom = std::bind(&Simulation::eomAscentPowered, this, std::placeholders::_1, std::placeholders::_2);
		result = MathUtilities::rk45(initialValues, eom, Simulation::launchDetect, timeStart, timeEnd, odeStep);
		event = Event::LIFTOFF;		
		break;

	case FlightPhase::ASCENT_POWERED:
		eom = std::bind(&Simulation::eomAscentPowered, this, std::placeholders::_1, std::placeholders::_2);
		result = MathUtilities::rk45(initialValues, eom, Simulation::coastDetect, timeStart, timeEnd, odeStep);
		event = Event::BURNOUT;
		break;

	case FlightPhase::ASCENT_UNPOWERED:
		eom = std::bind(&Simulation::eomAscentUnpowered, this, std::placeholders::_1, std::placeholders::_2);
		result = MathUtilities::rk45(initialValues, eom, Simulation::apogeeDetect, timeStart, timeEnd, odeStep);
		event = Event::APOGEE;
		break;

	case FlightPhase::DESCENT_UNPOWERED:
		eom = std::bind(&Simulation::eomDescentUnpowered, this, std::placeholders::_1, std::placeholders::_2);
		result = MathUtilities::rk45(initialValues, eom, Simulation::groundDetect, timeStart, timeEnd, odeStep);
		event = Event::GROUND;
		break;

	case FlightPhase::DESCSENT_DROGUE:
		eom = std::bind(&Simulation::eomDescentDrogue, this, std::placeholders::_1, std::placeholders::_2); 
		std::function<bool(const std::vector<double>&)> main;
		main = std::bind(&Simulation::mainDetect, this, std::placeholders::_1);
		result = MathUtilities::rk45(initialValues, eom, main, timeStart, timeEnd, odeStep);
		event = Event::ALTITUDE_MAIN;
		break;

	case FlightPhase::DESCENT_MAIN:
		eom = std::bind(&Simulation::eomDescentMain, this, std::placeholders::_1, std::placeholders::_2); 
		result = MathUtilities::rk45(initialValues, eom, Simulation::groundDetect, timeStart, timeEnd, odeStep);
		event = Event::GROUND;
		break;

	}	

	//in case time was reached instead of simulation stopping due to flight event
	if (result.back()[0] == timeEnd) {
		event = Event::AT_TIME_DELAY;
	}

	//add current phase to results
	simResult.insert(simResult.end(), result.begin(), result.end());

	return event;
}

std::vector<double> Simulation::eomAscentPowered(const double& time, const std::vector<double>& state) {

	//Get acceleration
	double forceSum = motor->getThrust(time) - drag->getDrag(true, atmosphere->density(state[0]), std::abs(state[1]), atmosphere->speedOfSound(state[0]));
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
	double forceSum = -1.0*drag->getDrag(false, atmosphere->density(state[0]), std::abs(state[1]), atmosphere->speedOfSound(state[0]));
	double mass = massPad - motor->massPropellant;
	double acceleration = (forceSum / mass) - GRAVITY;

	//output solution to step
	std::vector<double> resultState{ state[1], acceleration };
	return resultState;
}

std::vector<double> Simulation::eomDescentUnpowered(const double& time, const std::vector<double>& state) {

	//Get acceleration
	double forceSum = drag->getDrag(false, atmosphere->density(state[0]), std::abs(state[1]), atmosphere->speedOfSound(state[0]));
	double mass = massPad - motor->massPropellant;
	double acceleration = (forceSum / mass) - GRAVITY;

	//output solution to step
	std::vector<double> resultState{ state[1], acceleration };
	return resultState;
}

std::vector<double> Simulation::eomDescentDrogue(const double& time, const std::vector<double>& state) {

	//Get acceleration
	double forceSum = drag->getDragDrogue(atmosphere->density(state[0]), std::abs(state[1]), atmosphere->speedOfSound(state[0]));
	double mass = massPad - motor->massPropellant;
	double acceleration = (forceSum / mass) - GRAVITY;

	//output solution to step
	std::vector<double> resultState{ state[1], acceleration };
	return resultState;
}

std::vector<double> Simulation::eomDescentMain(const double& time, const std::vector<double>& state) {
	
	//Get acceleration
	double forceSum = drag->getDragDrogue(atmosphere->density(state[0]), std::abs(state[1]), atmosphere->speedOfSound(state[0])) +
		drag->getDragMain(atmosphere->density(state[0]), std::abs(state[1]), atmosphere->speedOfSound(state[0]));
	
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

bool Simulation::launchDetect(const std::vector<double>& state) {

	if (state[2] > VELOCITY_LAUNCH_DETECT && state[3] > ACCELERATION_LAUNCH_DETECT) {
		return true;
	}
	else {
		return false;
	}
}

bool Simulation::coastDetect(const std::vector<double>& state) {

	if (state[3] < ACCELERATION_COAST_DETECT) {
		return true;
	}
	else {
		return false;
	}
}

bool Simulation::apogeeDetect(const std::vector<double>& state) {

	if (state[2] < VELOCITY_APOGEE_DETECT) {
		return true;
	}
	else {
		return false;
	}
}

bool Simulation::mainDetect(const std::vector<double>& state) {

	if (state[1] < altitudeMainDeploy) {
		return true;
	}
	else {
		return false;
	}
}

bool Simulation::groundDetect(const std::vector<double>& state) {

	if (state[1] <= 0.0) {
		return true;
	}
	else {
		return false;
	}
}

