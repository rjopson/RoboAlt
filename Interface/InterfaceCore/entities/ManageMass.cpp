#include "ManageMass.h"



ManageMass::ManageMass(double in_massCalculated,
	bool in_massOverrideSwitch, double in_massOverride, bool in_cgOverrideSwitch, double in_cgOverride) {

massCalculated = in_massCalculated;
massOverrideSwitch = in_massOverrideSwitch;
massOverride = in_massOverride;
cgOverrideSwitch = in_cgOverrideSwitch;
cgOverride = in_cgOverride;
}


ManageMass::~ManageMass()
{
}
