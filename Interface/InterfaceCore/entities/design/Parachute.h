
#ifndef _PARACHUTE_H
#define _PARACHUTE_H

#include "Drag.h"
#include "Part.h"

class Parachute :
	public Part
{
public:
	Parachute(std::string in_name, std::string in_comments, Material* in_material, double in_diameter, 
		bool in_massOverrideSwitch, double in_massOverride, bool in_cgOverrideSwitch, double in_cgOverride);

	std::vector<Drag*> dragList;

	~Parachute();

	double diameter;
	double area();

	double dragCoefficient();
	void updateDragModel();

private:
	
};
#endif 

