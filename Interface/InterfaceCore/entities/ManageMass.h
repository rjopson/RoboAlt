
#ifndef _MANAGE_MASS_H
#define _MANAGE_MASS_H

class ManageMass
{
public:
	ManageMass(double in_massCalculated, 
		bool in_massOverrideSwitch, double in_massOverride, bool in_cgOverrideSwitch, double in_cgOverride);

	~ManageMass();

private:
	double massCalculated;
	bool massOverrideSwitch;
	double massOverride;
	bool cgOverrideSwitch;
	double cgOverride;
};
#endif


