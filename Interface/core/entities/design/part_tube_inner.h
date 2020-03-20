#ifndef _TUBE_INNER_H
#define _TUBE_INNER_H

#include "part.h"

class TubeInner : public Part {
  public:
    TubeInner(std::string name, std::string comments, Material* material,
        const double& length, const double& diameter_outer, const double& thickness,
        bool mass_override_switch, const double& mass_override, bool cg_override_switch, const double& cg_override);
    ~TubeInner();

    //overridden virtual functions 
    double VolumeMaterial() const;

    double length_;
    double diameter_outer_;
    double thickness_;

private:
    double DiameterInner() const;
    double AreaSurface() const;
};
#endif // !_TUBE_INNER_H

