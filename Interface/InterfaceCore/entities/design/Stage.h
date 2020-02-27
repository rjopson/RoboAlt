
#ifndef _STAGE_H
#define _STAGE_H

#include "InertialOverride.h"
#include "Instance.h"

class Stage
{
public:
	Stage(const std::string& in_name, const double& in_overlapDistance, const std::string& in_comments, 
		bool in_massOverrideSwitch, const double& in_massOverride, bool in_cgOverrideSwitch, const double& in_cgOverride);
	~Stage();

	std::string name;
	std::string comments;
	double distanceOverlap; //amount this stage overlaps the one in front of it 
	InertialOverride inertial;

	SurfaceFinish surfaceFinish;
	
	double massEmpty();

	Instance* instanceRoot; 
	void instanceFlatListRecursive(Instance* parent, std::vector<Instance*> &flatList);
};
#endif

