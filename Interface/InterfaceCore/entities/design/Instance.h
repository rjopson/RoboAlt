

#ifndef _INSTANCE_H
#define _INSTANCE_H

#include <vector>
#include "Part.h"

enum class PartPosition {
	FOREWARD,
	AFT
};

class Instance
{
public:
	Instance(Part* in_part, Instance* in_parent, PartPosition in_positionType, double in_positionFrom);
	Instance(); //for root 	
	~Instance();	
	
	Part* part;
	Instance* parent;
	std::vector<Instance*> childList;
	
	PartPosition positionType;
	double positionFrom;
	
	void addChild(Instance* in_child);
	void removeChild(Instance* in_child);
	void reposition(const double& indexInParentList);
	double positionFromParentFront();

private:
	
};
#endif