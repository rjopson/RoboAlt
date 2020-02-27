Simulation::Simulation(std::string in_name, std::string in_comments,
	const double& in_heightPad, const double& in_angleLaunchRod, const double& in_lengthLaunchRod) :	
	
	FlightData(in_name, in_comments) {

	heightPad = in_heightPad;
	angleLaunchRod = in_angleLaunchRod;
	lengthLaunchRod = in_lengthLaunchRod;

	timeMax = 500.0;
}

Simulation::~Simulation() {

}

//Return data to separation of stages to be used in next stage sim. Continue simulation of only lower stage which has separated 
Matrix<double> Simulation::run(Matrix<double>& flightHistory, Atmosphere* in_atmosphere,
	const double& in_massEmptyStacked, const double& in_massEmptyUnstacked, Motor* in_motor,
	Drag* in_dragStacked, Drag* in_dragUnstacked, Drag* in_dragDrogue, Drag* in_dragMain,
	std::vector<SimulationEvent> in_userEvents,
	const double& odeStepAscent, const double& odeStepDescent) {

	//data which will be returned from function. For use in future stages
	Matrix<double> nextStageData(0,4); 
	bool dataSaved = false;

	//Atmosphere - note if it was a model or external data 
	atmosphere = in_atmosphere;
	atmosphereInternal = in_atmosphere->internallyCalculated;
	
	//Drag - note if it was a model or external data 
	dragRocketStacked = in_dragStacked; dragRocketStackedInternal = in_dragStacked->internallyCalculated;
	dragRocketUnstacked = in_dragUnstacked; dragRocketUnstackedInternal = in_dragUnstacked->internallyCalculated;
	dragRocketStacked = in_dragStacked; dragRocketStackedInternal = in_dragStacked->internallyCalculated;
	dragRocketStacked = in_dragStacked; dragRocketStackedInternal = in_dragStacked->internallyCalculated;

	//save simulation inputs if they're entities
	motor = in_motor;
	userEvents = in_userEvents;
	
	//set initial conditions of simulation
	double timeRun = timeMax;
	double timeOfFlight = flightHistory.getLastRow()[0];
	std::vector<double> initial { flightHistory.getLastRow()[1], flightHistory.getLastRow()[2] };

	//Determine if at starting point rocket is coasting or starting from ground and set appropriate phase of flight
	FlightPhase phase;
	if (initial[1] > VELOCITY_LAUNCH_DETECT) {
		phase = FlightPhase::ASCENT_UNPOWERED_STACKED;
	}
	else {
		phase = FlightPhase::DETECT_LAUNCH;
	}
		
	//Loop simulation until this stage is on the ground
	while (phase != FlightPhase::GROUND) {

		Event event;
		if (phase == FlightPhase::DETECT_LAUNCH ||
			phase == FlightPhase::ASCENT_POWERED ||
			phase == FlightPhase::ASCENT_UNPOWERED_STACKED ||
			phase == FlightPhase::ASCENT_UNPOWERED_UNSTACKED ||
			phase == FlightPhase::DESCENT_UNPOWERED_STACKED ||
			phase == FlightPhase::DESCENT_UNPOWERED_UNSTACKED) {

			event = runPhase(flightHistory, phase, initial, timeOfFlight, timeRun, odeStepAscent); //calculate current phase
		}
		else {
			event = runPhase(flightHistory, phase, initial, timeOfFlight, timeRun, odeStepDescent); //calculate current phase
		}

		//update current time and initial conditions
		timeOfFlight = flightHistory.getLastRow()[0];
		initial.clear();
		initial.push_back(flightHistory.getLastRow()[1]);
		initial.push_back(flightHistory.getLastRow()[2]);

		phase = setPhase(event, timeOfFlight);

		//If stages separate, save data to pass to next stage simulation
		if (phase == FlightPhase::ASCENT_UNPOWERED_UNSTACKED && dataSaved) {
			nextStageData = flightHistory;
			dataSaved = true;
		}
	}
	updateFlightData(flightHistory);
	return nextStageData;
}	

FlightPhase Simulation::setPhase(Event event, const double& timeOfFlight) {

	FlightPhase phase;

	bool userEventUsed = false;
	for (int i = 0; i != userEvents.size(); i++) {
		if (userEvents[i].event == event) { //there is a user action which determines new phase of flight

			if (userEvents[i].delayTimeFromEvent == 0.0) { //no time delay after event detected, so no fancy logic needed to deal with it
				userEventUsed = true;
				userEvents[i].complete = true;

				switch (userEvents[i].action) {

				case Action::DEPLOY_DROGUE:
					phase = FlightPhase::DESCSENT_DROGUE;
					break;

				case Action::DEPLOY_MAIN:
					phase = FlightPhase::DESCENT_MAIN;
					break;

				case Action::SEPARATE_STAGE:
					phase = FlightPhase::ASCENT_UNPOWERED_UNSTACKED;
					break;

				case Action::LIGHT_STAGE:
					phase = FlightPhase::ASCENT_POWERED;
					break;
				}

			}
			else { //there is a time delay so can't run user action immediately. Save to list of uncomplete actions
				userEvents[i].setDelayTimeOfFlight(timeOfFlight);
				uncompleteUserEvents.push_back(userEvents[i]);
			}
		}
	}	

	if (event == Event::AT_TIME_DELAY) {
		
		for (int i = 0; i != uncompleteUserEvents.size(); i++) {
			if (!uncompleteUserEvents[i].complete && 
				timeOfFlight >= uncompleteUserEvents[i].delayTimeOfFlight) { //we've now waited long enough to perform action

				userEventUsed = true;
				uncompleteUserEvents[i].complete = true;

				switch (uncompleteUserEvents[i].action) {

				case Action::DEPLOY_DROGUE:
					phase = FlightPhase::DESCSENT_DROGUE;
					break;

				case Action::DEPLOY_MAIN:
					phase = FlightPhase::DESCENT_MAIN;
					break;

				case Action::SEPARATE_STAGE:
					phase = FlightPhase::ASCENT_UNPOWERED_UNSTACKED;
					break;

				case Action::LIGHT_STAGE:
					phase = FlightPhase::ASCENT_POWERED;
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
			phase = FlightPhase::ASCENT_UNPOWERED_STACKED;
			break;

		case Event::APOGEE:
			phase = FlightPhase::DESCENT_UNPOWERED_STACKED;
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

Event Simulation::runPhase(Matrix<double>& simResult, FlightPhase phase,
	const std::vector<double>& initialConditions, 
	const double& timeStart, const double& timeRun, const double& odeStep) {

	Matrix<double> result(0, 4); //[time, position, velocity, acceleration]
	Event event;
	std::function<std::vector<double>(const double&, const std::vector<double>&)> eom;
	std::function<bool(const std::vector<double>&)> mainDetect_forUserAltitude;

	double timeEnd = timeStart + timeRun;

	switch (phase) {

	case FlightPhase::DETECT_LAUNCH:
		dragCurrent = dragRocketStacked;
		massEmptyCurrent = massEmptyStacked;
		eom = std::bind(&Simulation::eomAscent, this, std::placeholders::_1, std::placeholders::_2);
		result = MathUtilities::rk45(initialConditions, eom, Simulation::launchDetect, timeStart, timeEnd, odeStep);
		event = Event::LIFTOFF;		
		break;

	case FlightPhase::ASCENT_POWERED:
		dragCurrent = dragRocketStacked;
		massEmptyCurrent = massEmptyStacked;
		eom = std::bind(&Simulation::eomAscent, this, std::placeholders::_1, std::placeholders::_2);
		result = MathUtilities::rk45(initialConditions, eom, Simulation::coastDetect, timeStart, timeEnd, odeStep);
		event = Event::BURNOUT;
		break;

	case FlightPhase::ASCENT_UNPOWERED_STACKED:
		dragCurrent = dragRocketStacked;
		massEmptyCurrent = massEmptyStacked;
		eom = std::bind(&Simulation::eomAscent, this, std::placeholders::_1, std::placeholders::_2);
		result = MathUtilities::rk45(initialConditions, eom, Simulation::apogeeDetect, timeStart, timeEnd, odeStep);
		event = Event::APOGEE;
		break;

	case FlightPhase::ASCENT_UNPOWERED_UNSTACKED:
		dragCurrent = dragRocketUnstacked;
		massEmptyCurrent = massEmptyUnstacked;
		eom = std::bind(&Simulation::eomAscent, this, std::placeholders::_1, std::placeholders::_2);
		result = MathUtilities::rk45(initialConditions, eom, Simulation::apogeeDetect, timeStart, timeEnd, odeStep);
		event = Event::APOGEE;
		break;

	case FlightPhase::DESCENT_UNPOWERED_STACKED:
		dragCurrent = dragRocketStacked;
		massEmptyCurrent = massEmptyStacked;
		eom = std::bind(&Simulation::eomDescent, this, std::placeholders::_1, std::placeholders::_2);
		result = MathUtilities::rk45(initialConditions, eom, Simulation::groundDetect, timeStart, timeEnd, odeStep);
		event = Event::GROUND;
		break;

	case FlightPhase::DESCENT_UNPOWERED_UNSTACKED:
		dragCurrent = dragRocketUnstacked;
		massEmptyCurrent = massEmptyUnstacked;
		eom = std::bind(&Simulation::eomDescent, this, std::placeholders::_1, std::placeholders::_2);
		result = MathUtilities::rk45(initialConditions, eom, Simulation::groundDetect, timeStart, timeEnd, odeStep);
		event = Event::GROUND;
		break;

	case FlightPhase::DESCSENT_DROGUE:
		dragCurrent = dragDrogue;
		massEmptyCurrent = massEmptyUnstacked;
		eom = std::bind(&Simulation::eomDescent, this, std::placeholders::_1, std::placeholders::_2); 		
		mainDetect_forUserAltitude = std::bind(&Simulation::mainDetect, this, std::placeholders::_1);
		result = MathUtilities::rk45(initialConditions, eom, mainDetect_forUserAltitude, timeStart, timeEnd, odeStep);
		event = Event::ALTITUDE_MAIN;
		break;

	case FlightPhase::DESCENT_MAIN:
		dragCurrent = dragMain;
		massEmptyCurrent = massEmptyUnstacked;
		eom = std::bind(&Simulation::eomDescent, this, std::placeholders::_1, std::placeholders::_2); 
		result = MathUtilities::rk45(initialConditions, eom, Simulation::groundDetect, timeStart, timeEnd, odeStep);
		event = Event::GROUND;
		break;
	}	

	//in case time was reached instead of simulation stopping due to flight event
	if (result.getLastRow()[0] == timeEnd) {
		event = Event::AT_TIME_DELAY;
	}

	//add current phase to results
	simResult.expandRows(result);

	return event;
}

std::vector<double> Simulation::eomAscent(const double& time, const std::vector<double>& state) {

	//Get acceleration
	double forceSum = motor->getThrust(time) - dragCurrent->getDrag(true, atmosphere->density(state[0]), std::abs(state[1]), atmosphere->speedOfSound(state[0]));
	double mass = massEmptyCurrent + (motor->massTotal-motor->massPropellant) + motor->getMass(time);
	double acceleration = (forceSum / mass) - GRAVITY;

	//output solution to step
	std::vector<double> resultState;

	if (motor->getThrust(time) > (mass*GRAVITY)) { //enough thrust to take off?

		resultState.push_back(state[1]);
		resultState.push_back(acceleration);
	}
	else {
		resultState.push_back(0.0);
		resultState.push_back(0.0);
	}
	return resultState;
}

std::vector<double> Simulation::eomDescent(const double& time, const std::vector<double>& state) {

	//Get acceleration
	double forceSum = dragCurrent->getDrag(false, atmosphere->density(state[0]), std::abs(state[1]), atmosphere->speedOfSound(state[0]));
	double mass = massEmptyCurrent + motor->massTotal - motor->massPropellant;
	double acceleration = (forceSum / mass) - GRAVITY;

	//output solution to step
	std::vector<double> resultState{ state[1], acceleration };
	return resultState;
}

void Simulation::updateFlightData(Matrix<double>& simResult) {

	time.clear();
	altitude.clear();
	velocity.clear();
	acceleration.clear();

	//allocate memory
	time.resize(simResult.rows);
	altitude.resize(simResult.rows);
	velocity.resize(simResult.rows);
	acceleration.resize(simResult.rows);

	for (int i = 0; i != simResult.rows; i++) {
		std::vector<double> row = simResult.getRow(i);
		time[i] = row[0];
		altitude[i] = row[1];
		velocity[i] = row[2];
		acceleration[i] = row[3];
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

	double altitudeMainDeploy = 0.0;

	for (auto userEvent : userEvents) {
		if (userEvent.event == Event::ALTITUDE_MAIN) {
			altitudeMainDeploy = userEvent.altitudeMainDeploy;
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

	if (state[1] <= 0.0) {
		return true;
	}
	else {
		return false;
	}
}

void Simulation::dragModelOrExternal(Drag* dragToCheck, Drag* dragToSaveAs, bool& isModelSwitch) {
	dragToSaveAs = dragToCheck;

	if (dragToCheck == nullptr) {
		isModelSwitch = false;
	}
	else {
		isModelSwitch = dragToCheck->internallyCalculated;
	}
}