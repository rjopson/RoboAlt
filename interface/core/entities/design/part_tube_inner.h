#ifndef _TUBE_INNER_H
#define _TUBE_INNER_H

#include "part.h"

class TubeInner : public Part {
  public:
    TubeInner(std::string name, std::string comments, Material* material,
        const double& length, const double& diameter_outer, const double& thickness,
        bool mass_override_switch, const double& mass_override, bool cg_override_switch, const double& cg_override);
    ~TubeInner();

    //Values
    void SetLength(const double& length);
    void SetDiameterOuter(const double& diameter_outer);
    void SetThickness(const double& thickness);

    //Datanames
    double Length() const;
    double DiameterOuter() const;
    double Thickness() const;
    double DiameterInner() const;
    

    //overridden virtual functions 
    double VolumeMaterial() const;    

private:
    double AreaSurface() const;

    double length_;
    double diameter_outer_;
    double thickness_;
    
};
#endif // !_TUBE_INNER_H

