
#ifndef _STAGE_H
#define _STAGE_H

#include "Atmosphere_ISA.h"
#include "Drag.h"
#include "InertialOverride.h"
#include "Instance.h"

#include <iostream>
#include <string>

class Stage
{
public:
	Stage(const std::string& in_name, const std::string& in_comments, std::vector<Stage*> in_StagesAboveList,
		SurfaceFinish in_surfaceFinish, const double& in_overlapDistance,
		bool in_massOverrideSwitch, const double& in_massOverride, bool in_cgOverrideSwitch, const double& in_cgOverride);
	~Stage();

	std::string name;
	std::string comments;
	double distanceOverlap; //amount this stage overlaps the one in front of it 
	InertialOverride inertial;
	SurfaceFinish surfaceFinish;
	std::vector<Stage*> stagesAboveList; //stages above this one (could be zero if this is the sustainer...)

	//Mass calculations
	double massEmpty(bool includeStagesAbove);

	//geometric calculations
	double areaReference(bool includeStagesAbove);
	double length(bool includeStagesAbove);
	double diameterMax(bool includeStagesAbove);
	double finenessRatio(bool includeStagesAbove);

	SurfaceFinish getSurfaceFinish(bool includeStagesAbove);

	//instance functions
	Instance* instanceRoot; 
	std::vector<Instance*> instanceFlatList(bool includeStagesAbove);
	void instanceFlatListRecursive(Instance* parent, std::vector<Instance*> &flatList);
	//create/delete instance 

	//Drag model calculations
	Drag getDragModel(bool includeStagesAbove, const double& areaMotor,
		const double& machMin, const double& machMax, const double& steps);
	double dragCoefficient(bool includeStagesAbove, const double& in_machNumber, const double& in_areaThrusting);
	double dragCoefficientFriction(bool includeStagesAbove, const double& in_machNumber); //assume a speed of sound to pass velocity
	double dragCoefficientPressure(bool includeStagesAbove, const double& in_machNumber);
	double dragCoefficientBase(bool includeStagesAbove, const double& in_machNumber, const double& in_areaThrusting);

	//debugging
	//void printDragCoefficients(bool includeStagesAbove, const double& in_machNumber, const double& in_areaThrusting);
};
#endif

