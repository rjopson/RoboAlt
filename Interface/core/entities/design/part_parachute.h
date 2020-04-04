#ifndef _PARACHUTE_H
#define _PARACHUTE_H

#include "drag.h"
#include "part.h"

class Parachute : public Part {
  public:
    Parachute(std::string name, std::string comments, Material* material,
        const double& diameter, const double& thickness,
        bool mass_override_switch, const double& mass_override, bool cg_override_switch, const double& cg_override);
    ~Parachute();

    //Properties
    void SetThickness(const double& thickness);
    void SetDiameter(const double& diameter);
    double Thickness() const;
    double Diameter() const;

    Drag DragModel() const;
    double Area() const;

    //Overridden virtual functions
    double DragCoefficient() const;
    double VolumeMaterial() const;      

  private:
    double thickness_;
    double diameter_;
};
#endif 

