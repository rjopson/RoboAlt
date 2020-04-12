#ifndef _INERTIAL_OVERRIDE_H
#define _INERTIAL_OVERRIDE_H

class InertialOverride {
  public:
    InertialOverride(bool mass_override_switch, const double& mass_override, bool cg_override_switch, const double& cg_override);
    ~InertialOverride();   

    void SetOverrideMass(const double& mass);
    void SetOverrideCg(const double& cg);
    void SetModelMass();
    void SetModelCg();

    bool mass_override_switch_;
    double mass_override_;
    bool cg_override_switch_;
    double cg_override_;
};
#endif


