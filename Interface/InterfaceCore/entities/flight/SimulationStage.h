
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
	SimulationStage(std::vector<Stage*> in_stageList, Motor* in_motor,
		Drag* in_dragIncludeStagesAbove, Drag* in_dragThisStageOnly, Drag* in_dragDrogue, Drag* in_dragMain,
		std::vector<SimulationEvent> in_userEvents);
	~SimulationStage();

	//Data generated for this stage during simulation
	FlightData flightData; 

	//current stage and stages stacked above. Last stage in this list becomes separated stage
	std::vector<Stage*> stageList; 
	std::vector<Instance*> instanceFlatList(bool includeStagesAbove);

	//Motor for this stage
	Motor* motor;

	//Drag data
	Drag* dragIncludeStagesAbove; bool dragIncludeStagesAbove_interalCalc;
	Drag* dragThisStageOnly; bool dragThisStageOnly_interalCalc;
	Drag* dragDrogue; bool dragDrogue_interalCalc;
	Drag* dragMain; bool dragMain_interalCalc;

	//User events for this stage
	std::vector<SimulationEvent> userEvents;

	//Mass calculations
	double getMassEmpty(bool includeStagesAbove);

	//geometric calculations
	double areaReference(bool includeStagesAbove);
	double length(bool includeStagesAbove);
	double diameterMax(bool includeStagesAbove);
	double finenessRatio(bool includeStagesAbove);

	//Drag model calculations
	Drag getDragModel(bool includeStagesAbove, const double& machMin, const double& machMax, const double& steps);
	double dragCoefficient(bool includeStagesAbove, const double& in_machNumber, const double& in_areaThrusting);
	double dragCoefficientFriction(bool includeStagesAbove, const double& in_machNumber); //assume a speed of sound to pass velocity
	double dragCoefficientPressure(bool includeStagesAbove, const double& in_machNumber);
	double dragCoefficientBase(bool includeStagesAbove, const double& in_machNumber, const double& in_areaThrusting);
	std::vector<double> dragCoefficientFrictionParts(bool includeStagesAbove, const double& in_machNumber);
	std::vector<double> dragCoefficientPressureParts(bool includeStagesAbove, const double& in_machNumber);
	std::vector<double> dragCoefficientBaseParts(bool includeStagesAbove, const double& in_machNumber, const double& in_areaThrusting);
	SurfaceFinish getSurfaceFinish(bool includeStagesAbove);

	//debugging
	void printDragCoefficients(bool includeStagesAbove, const double& in_machNumber, const double& in_areaThrusting);
};
#endif
