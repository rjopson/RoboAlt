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



#include "Simulation.h"

Simulation::Simulation(std::string in_name, std::string in_comments,
	const double& in_heightPad, const double& in_angleLaunchRod, const double& in_lengthLaunchRod) {

	timeMax = 500.0;

	//Default simulation inputs to use 
	heightPad = in_heightPad;
	angleLaunchRod = in_angleLaunchRod;
	lengthLaunchRod = in_lengthLaunchRod;

	//Create default atmosphere to use 
	atmosphere = new Atmosphere();
	Atmosphere_ISA atmosphereModel;
	*atmosphere = atmosphereModel.getModel();
	atmosphere_internalCalc = true;
}

Simulation::~Simulation() {

	if (atmosphere_internalCalc) {
		delete atmosphere;
	}
}

void Simulation::run(const double& odeStepAscent, const double& odeStepDescent) {

	//data which will be returned from function. For use in future stages
	std::vector<double> initialData { 0.0, heightPad, 0.0, 0.0 };
	Matrix<double> resultCurrentStage(0, 4, initialData);
	Matrix<double> resultNextStage(0, 4);
	bool resultNextStageSaved = false;

	//initialize times
	double timeStart = 0.0;
	double timeEnd = timeMax;
	timeMotorLit = timeStart;

	//initial conditions for ode
	std::vector<double> initialConditions { heightPad, 0.0 };
	Phase phase = Phase::DETECT_LAUNCH;

	//loop through each stage starting with booster
	for (auto it = simStageList.rbegin(); it != simStageList.rend(); ++it) {

		simStageCurrent = (*it);
		simStageCurrent->populateModelDrag();

		//run full simulation for this stage until it's back on the ground. Then start the next one
		while (phase != Phase::GROUND) {

			Event event;
			Matrix<double> resultPhase(0, 4);				

			if (phase == Phase::DESCENT_DROGUE ||
				phase == Phase::DESCENT_MAIN) {

				event = runPhase(resultPhase, phase, initialConditions, timeStart, timeEnd, odeStepDescent); //calculate current phase
			}
			else {
				event = runPhase(resultPhase, phase, initialConditions, timeStart, timeEnd, odeStepAscent); //calculate current phase
			}
			
			//Update initial conditions for next phase
			initialConditions.clear();
			initialConditions.push_back(resultPhase.getLastRow()[1]);
			initialConditions.push_back(resultPhase.getLastRow()[2]);

			//Determine next phase of flight and times to use
			timeStart = resultPhase.getLastRow()[0];
			phase = getNextPhase(event, timeStart);			
			timeEnd = getTimeEndNextPhase(timeStart);
			
			//Add data from current phase to current stage flight data
			resultCurrentStage.expandRows(resultPhase);

			//If stages separate, save data to pass to next stage simulation
			if (!resultNextStageSaved) { //stages haven't separated yet, keep saving data for next stage
				resultNextStage = resultCurrentStage;
			}
			if (phase == Phase::ASCENT_UNPOWERED_UNSTACKED && !resultNextStageSaved) {
				resultNextStageSaved = true;
			}			
		}

		//Housekeeping to prepare for next stage
		simStageCurrent->flightData = populateStageFlightData(resultCurrentStage);
		resultCurrentStage = resultNextStage; //begin with results up until this stage separates. Now continue simulation with separated stage 
		resultNextStageSaved = false;

		//Update initial conditions for next stage
		initialConditions.clear();
		initialConditions.push_back(resultCurrentStage.getLastRow()[1]);
		initialConditions.push_back(resultCurrentStage.getLastRow()[2]); 
		phase = Phase::ASCENT_UNPOWERED_STACKED;
	}	
}

Event Simulation::runPhase(Matrix<double>& resultPhaseCurrent, Phase phase, const std::vector<double>& initialConditions, 
	const double& timeStart, const double& timeEnd, const double& odeStep) {

	Event event;

	//Function definitons
	std::function<std::vector<double>(const double&, const std::vector<double>&)> eom;
	std::function<bool(const std::vector<double>&)> eventDetect;

	switch (phase) {

	case Phase::DETECT_LAUNCH:
		dragCurrent = simStageCurrent->getDragWithStagesAbove();
		massEmptyCurrent = simStageCurrent->stage->massEmpty(true) + getMotorMassStagesAbove();
		eom = std::bind(&Simulation::eomAscent, this, std::placeholders::_1, std::placeholders::_2);
		resultPhaseCurrent = MathUtilities::rk45(initialConditions, eom, Simulation::launchDetect, timeStart, timeEnd, odeStep);
		event = Event::LIFTOFF;
		break;

	case Phase::ASCENT_POWERED:
		dragCurrent = simStageCurrent->getDragWithStagesAbove();
		massEmptyCurrent = simStageCurrent->stage->massEmpty(true) + getMotorMassStagesAbove();
		eom = std::bind(&Simulation::eomAscent, this, std::placeholders::_1, std::placeholders::_2);
		eventDetect = std::bind(&Simulation::coastDetect, this, std::placeholders::_1);
		resultPhaseCurrent = MathUtilities::rk45(initialConditions, eom, eventDetect, timeStart, timeEnd, odeStep);
		event = Event::BURNOUT;
		break;

	case Phase::ASCENT_UNPOWERED_STACKED:
		dragCurrent = simStageCurrent->getDragWithStagesAbove();
		massEmptyCurrent = simStageCurrent->stage->massEmpty(true) + getMotorMassStagesAbove();
		eom = std::bind(&Simulation::eomAscent, this, std::placeholders::_1, std::placeholders::_2);
		resultPhaseCurrent = MathUtilities::rk45(initialConditions, eom, Simulation::apogeeDetect, timeStart, timeEnd, odeStep);
		event = Event::APOGEE;
		break;

	case Phase::ASCENT_UNPOWERED_UNSTACKED:
		dragCurrent = simStageCurrent->getDragWithoutStagesAbove();
		massEmptyCurrent = simStageCurrent->stage->massEmpty(false);
		eom = std::bind(&Simulation::eomAscent, this, std::placeholders::_1, std::placeholders::_2);
		resultPhaseCurrent = MathUtilities::rk45(initialConditions, eom, Simulation::apogeeDetect, timeStart, timeEnd, odeStep);
		event = Event::APOGEE;
		break;

	case Phase::DESCENT_UNPOWERED_STACKED:
		dragCurrent = simStageCurrent->getDragWithStagesAbove();
		massEmptyCurrent = simStageCurrent->stage->massEmpty(true) + getMotorMassStagesAbove();
		eom = std::bind(&Simulation::eomDescent, this, std::placeholders::_1, std::placeholders::_2);
		eventDetect = std::bind(&Simulation::groundDetect, this, std::placeholders::_1);
		resultPhaseCurrent = MathUtilities::rk45(initialConditions, eom, eventDetect, timeStart, timeEnd, odeStep);
		event = Event::GROUND;
		break;

	case Phase::DESCENT_UNPOWERED_UNSTACKED:
		dragCurrent = simStageCurrent->getDragWithoutStagesAbove();
		massEmptyCurrent = simStageCurrent->stage->massEmpty(false);
		eom = std::bind(&Simulation::eomDescent, this, std::placeholders::_1, std::placeholders::_2);
		eventDetect = std::bind(&Simulation::groundDetect, this, std::placeholders::_1);
		resultPhaseCurrent = MathUtilities::rk45(initialConditions, eom, eventDetect, timeStart, timeEnd, odeStep);
		event = Event::GROUND;
		break;

	case Phase::DESCENT_DROGUE:
		dragCurrent = simStageCurrent->getDragDrogue();
		massEmptyCurrent = simStageCurrent->stage->massEmpty(false);
		eom = std::bind(&Simulation::eomDescent, this, std::placeholders::_1, std::placeholders::_2);
		eventDetect = std::bind(&Simulation::mainDetect, this, std::placeholders::_1);
		resultPhaseCurrent = MathUtilities::rk45(initialConditions, eom, eventDetect, timeStart, timeEnd, odeStep);
		event = Event::ALTITUDE_MAIN;
		break;

	case Phase::DESCENT_MAIN:
		dragCurrent = simStageCurrent->getDragMain();
		massEmptyCurrent = simStageCurrent->stage->massEmpty(false);
		eom = std::bind(&Simulation::eomDescent, this, std::placeholders::_1, std::placeholders::_2);
		eventDetect = std::bind(&Simulation::groundDetect, this, std::placeholders::_1);
		resultPhaseCurrent = MathUtilities::rk45(initialConditions, eom, eventDetect, timeStart, timeEnd, odeStep);
		event = Event::GROUND;
		break;
	}

	//Check whether phase made it to end of input time. If it did, we're at a time delay event, not a flight phase event
	double timeCurrent = resultPhaseCurrent.getLastRow()[0];
	if (timeCurrent == timeEnd) {
		//event = Event::AT_TIME_DELAY;
	}
	return event;
}

Phase Simulation::getNextPhase(Event eventCurrent, const double& timeOfFlight) {

	Phase phase;

	bool userEventFound = false; //mark true if user event found in current stage

	//Check if there are any uncomplete user events to deal with 
	for (int i = 0; i != uncompleteUserEventList.size(); i++) {

		if (timeOfFlight >= uncompleteUserEventList[i]->timeToActivateAction) { //we've now waited long enough to perform action

			userEventFound = true;

			switch (uncompleteUserEventList[i]->action) {

			case Action::DEPLOY_DROGUE:
				phase = Phase::DESCENT_DROGUE;
				break;

			case Action::DEPLOY_MAIN:
				phase = Phase::DESCENT_MAIN;
				break;

			case Action::SEPARATE_STAGE:
				//timeStageSeparate = timeOfFlight;
				phase = Phase::ASCENT_UNPOWERED_UNSTACKED;
				break;

			case Action::LIGHT_STAGE:
				timeMotorLit = timeOfFlight;
				phase = Phase::ASCENT_POWERED;
				break;
			}
			uncompleteUserEventList.erase(uncompleteUserEventList.begin() + i);
			i = 0;
		}
	}

	for (int i = 0; i != simStageCurrent->userEvents.size(); i++) {

		if (simStageCurrent->userEvents[i]->event == eventCurrent) { //there is a user action which determines new phase of flight

			if (simStageCurrent->userEvents[i]->timeDelay == 0.0) { //no time delay after event detected, so no fancy logic needed to deal with it
				userEventFound = true;

				switch (simStageCurrent->userEvents[i]->action) {

				case Action::DEPLOY_DROGUE:
					phase = Phase::DESCENT_DROGUE;
					break;

				case Action::DEPLOY_MAIN:
					phase = Phase::DESCENT_MAIN;
					break;

				case Action::SEPARATE_STAGE:
					phase = Phase::ASCENT_UNPOWERED_UNSTACKED;
					break;

				case Action::LIGHT_STAGE:
					timeMotorLit = timeOfFlight;
					phase = Phase::ASCENT_POWERED;
					break;
				}
			}
			else { //there is a time delay so can't run user action immediately. Save to list of uncomplete actions
				simStageCurrent->userEvents[i]->setTimeToActivateAction(timeOfFlight);
				uncompleteUserEventList.push_back(simStageCurrent->userEvents[i]);
			}
		}
	}
	
	if (!userEventFound) { //there are no user actions to determine new phase of flight. Go to next default

		switch (eventCurrent) {

		case Event::LIFTOFF:
			phase = Phase::ASCENT_POWERED;
			break;

		case Event::BURNOUT:
			phase = Phase::ASCENT_UNPOWERED_STACKED;
			break;

		case Event::APOGEE:
			phase = Phase::DESCENT_UNPOWERED_STACKED;
			break;

		case Event::ALTITUDE_MAIN:
			phase = Phase::DESCENT_MAIN;
			break;

		case Event::GROUND:
			phase = Phase::GROUND;
			break;
		}
	}
	return phase;
}

double Simulation::getTimeEndNextPhase(const double& timeOfFlight) {

	double timeEnd = timeMax + timeOfFlight;

	for (auto userEvent : uncompleteUserEventList) {
		if (userEvent->timeToActivateAction < timeEnd) {
			timeEnd = userEvent->timeToActivateAction;
		}
	}
	return timeEnd;
}

//get mass of all motors in stages above the current one. 
double Simulation::getMotorMassStagesAbove() {

	double mass = 0.0;

	for (auto it = simStageList.begin(); it != std::find(simStageList.begin(), simStageList.end(), simStageCurrent); it++) {
		mass += (*it)->motor->massTotal;
	}
	return mass;
}

std::vector<double> Simulation::eomAscent(const double& time, const std::vector<double>& state) {

	bool motorThrusting = false;
	if (simStageCurrent->motor->dataTime.back() <= time - timeMotorLit) {
		motorThrusting = true;
	}	

	//Get acceleration
	double forceSum = simStageCurrent->motor->getThrust(time - timeMotorLit) - dragCurrent->getDrag(motorThrusting, atmosphere->density(state[0]), std::abs(state[1]), atmosphere->speedOfSound(state[0]));
	double mass = massEmptyCurrent + simStageCurrent->motor->getMass(time);
	double acceleration = (forceSum / mass) - GRAVITY;

	//std::cout << time << ", " << simStageCurrent->motor->getMass(time) << std::endl;

	//output solution to step
	std::vector<double> resultState(2);

	//if ((simStageCurrent->motor->getThrust(time) > (mass*GRAVITY)) || //enough thrust to take off?
	//	(time >= simStageCurrent->motor->dataTime.back())) { 

	resultState[0] = state[1];
	resultState[1] = acceleration;

	return resultState;
}

std::vector<double> Simulation::eomDescent(const double& time, const std::vector<double>& state) {

	//Get acceleration
	double forceSum = dragCurrent->getDrag(false, atmosphere->density(state[0]), std::abs(state[1]), atmosphere->speedOfSound(state[0]));
	double mass = massEmptyCurrent + simStageCurrent->motor->massTotal - simStageCurrent->motor->massPropellant;
	double acceleration = (forceSum / mass) - GRAVITY;

	//output solution to step
	std::vector<double> resultState{ state[1], acceleration };
	return resultState;
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

	if (state[0] >= simStageCurrent->motor->dataTime.back()) {
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

	double altitudeMainDeploy = 0.0;

	for (auto userEvent : simStageCurrent->userEvents) {
		if (userEvent->event == Event::ALTITUDE_MAIN) {
			altitudeMainDeploy = userEvent->altitudeMainDeploy;
			break;
		}
	}

	if (state[1] < altitudeMainDeploy) {
		return true;
	}
	else {
		return false;
	}
}

bool Simulation::groundDetect(const std::vector<double>& state) {

	if (state[1] <= heightPad) {
		return true;
	}
	else {
		return false;
	}
}

FlightData Simulation::populateStageFlightData(Matrix<double> stageResult) {

	FlightData result;	

	result.time = stageResult.getColumn(0);
	result.altitudeMSL = stageResult.getColumn(1);
	//result.altitudeAGL = result.altitudeMSL
	result.velocity = stageResult.getColumn(2);
	result.acceleration = stageResult.getColumn(3);
	result.lengthVector = result.time.size();

	return result;
}
