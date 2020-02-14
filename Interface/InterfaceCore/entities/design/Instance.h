

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
	Instance(std::string in_name, int in_index, PartPosition in_positionType, double in_positionFrom);
	Instance(Part* in_part, Instance* in_parent, int in_index, PartPosition in_positionType, double in_positionFrom);
	~Instance();	
	
	std::string name; //name if instance is a stage
	Part* part;
	Instance* parent;
	std::vector<Instance*> childList;
	
	PartPosition positionType;
	double positionFrom;

	void addChild(Instance* in_child, int in_index);
	void removeChild(Instance* in_child);
	double positionFromParentFront();

private:

};
#endif