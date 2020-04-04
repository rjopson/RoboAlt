#ifndef _POINT_MASS_H
#define _POINT_MASS_H

#include "part.h"

class PointMass : public Part {
  public:
    PointMass(std::string name, std::string comments, Material* material,
        bool mass_override_switch, const double& mass_override, bool cg_override_switch, const double& cg_override);
    ~PointMass();

    //Properties
    //void SetMass(const double& mass);
    //double Mass() const;

    double VolumeMaterial() const;

  private:
};
#endif 

