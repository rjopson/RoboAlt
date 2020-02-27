	double massEmptyStacked; //always from config stage calculation - user can override there if they wish
	double massEmptyUnstacked; 
	Atmosphere* atmosphere; 
	bool atmosphereInternal;
	Motor* motor; //always from motor database (either stock, or user provided)
	
	//Save if using external drag data. Unstacked is for multistage, after separation
	bool dragRocketStackedInternal, dragRocketUnstackedInternal, dragDrogueInternal, dragMainInternal;
	Drag* dragRocketStacked;
	Drag* dragRocketUnstacked;
	Drag* dragDrogue;
	Drag* dragMain;	
	
	std::vector<SimulationEvent> userEvents;

	double heightPad; //MSL
	double angleLaunchRod; //degrees
	double lengthLaunchRod; //meters

	//Returns flight data up to point next stage separated to be used for later stages. 
	//Saves simulation data for entire flight of current stage 
	Matrix<double> run(Matrix<double>& flightHistory, Atmosphere* in_atmosphere,
		const double& in_massEmptyStacked, const double& in_massEmptyUnstacked, Motor* in_motor, 
		Drag* in_dragStacked, Drag* in_dragUnstacked, Drag* in_dragDrogue, Drag* in_dragMain,
		std::vector<SimulationEvent> in_userEvents, 
		const double& odeStepAscent, const double& odeStepDescent);

private:	
	double timeMax; //limits time the ode solver can run. Shouldn't ever be met unless something goes wrong with code
	std::vector<SimulationEvent> uncompleteUserEvents;
	Drag* dragCurrent; //drag used for whatever current phase is 
	double massEmptyCurrent; //mass used for whatever current phase is 

	void updateFlightData(Matrix<double>& simResult);
	FlightPhase setPhase(Event event, const double& timeOfFlight);

	Event runPhase(Matrix<double>& simResult,
		FlightPhase phase, const std::vector<double>& initialConditions,
		const double& timeStart, const double& timeRun, const double& odeStep);

	//drag model or external
	void dragModelOrExternal(Drag* dragToCheck, Drag* dragToSaveAs, bool& isModelSwitch);

	//return solution of ode for timestep. S[0] = position, S[1] = velocity for next time step
	std::vector<double> eomAscent(const double& time, const std::vector<double>& state);
	std::vector<double> eomDescent(const double& time, const std::vector<double>& state);

	//events
	static bool launchDetect(const std::vector<double>& state);
	static bool coastDetect(const std::vector<double>& state);
	static bool apogeeDetect(const std::vector<double>& state);
	bool mainDetect(const std::vector<double>& state);
	static bool groundDetect(const std::vector<double>& state);