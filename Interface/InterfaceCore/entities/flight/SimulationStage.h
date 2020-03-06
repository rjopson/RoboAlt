
#ifndef _SIMULATION_STAGE_H
#define _SIMULATION_STAGE_H

#include <iostream>
#include <vector>

#include "Atmosphere_ISA.h"
#include "Drag.h"
#include "FlightData.h"
#include "Motor.h"
#include "SimulationEvent.h"
#include "Stage.h"


class SimulationStage
{
public:
	SimulationStage(Stage* in_stage);
	~SimulationStage();

	//Data generated for this stage during simulation
	FlightData flightData; 

	//current stage and stages stacked above. Contains data for case where stage has sustainer(s) on top or is already separated
	Stage* stage; 	

	//Motor for this stage
	Motor* motor;

	//User events for this stage
	std::vector<SimulationEvent*> userEvents;
	void addUserEvent();
	void deleteUserEvent(const double& index);

	//Drag data	
	Drag* getDragWithStagesAbove();
	Drag* getDragWithoutStagesAbove();
	Drag* getDragDrogue();
	Drag* getDragMain();

	void populateModelDrag();

	Drag* dragExternalWithStagesAbove;
	Drag* dragExternalWithoutStagesAbove;
	Drag* dragExternalDrogue;
	Drag* dragExternalMain;

private:
	Drag* dragWithStagesAbove;
	Drag* dragWithoutStagesAbove;
	Drag* dragDrogue;
	Drag* dragMain;
};
#endif
