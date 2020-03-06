
#ifndef _INERTIAL_OVERRIDE_H
#define _INERTIAL_OVERRIDE_H

class InertialOverride
{
public:
	InertialOverride(bool in_massOverrideSwitch, const double& in_massOverride, bool in_cgOverrideSwitch, const double& in_cgOverride);

	~InertialOverride();

	bool massOverrideSwitch;
	double massOverride;
	bool cgOverrideSwitch;
	double cgOverride;

	void setOverrideMass(const double& in_mass);
	void setOverrideCg(const double& in_cg);
	void setModelMass();
	void setModelCg();
};
#endif


