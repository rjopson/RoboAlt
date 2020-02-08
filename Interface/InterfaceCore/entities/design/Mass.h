
#ifndef _MASS_H
#define _MASS_H

#include "Part.h"

class Mass :
	public Part
{
public:
	Mass(std::string in_name, std::string in_comments, Material* in_material,
		double in_mass,
		bool in_massOverrideSwitch, double in_massOverride, bool in_cgOverrideSwitch, double in_cgOverride);

	~Mass();

	double mass;

	//void setMass(const double& in_mass);
	//double mass();

private:
	
};
#endif 

