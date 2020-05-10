
#ifndef _BULKHEAD_H
#define _BULKHEAD_H

#include "part.h"

class Bulkhead : public Part {
  public:
    Bulkhead(const std::string& name, const std::string& comments, Material* material,
        const double& diameter, const double& thickness, 
        bool mass_override_switch, const double& mass_override, bool cg_override_switch, const double& cg_override);
    ~Bulkhead();

    //Values
    void SetDiameter(const double& diameter);
    void SetThickness(const double& thickness);

    //Datanames
    double Diameter() const;
    double Thickness() const;

    //Core functions
    double VolumeMaterial() const;

  private:
    double diameter_;
    double thickness_;
};
#endif // !_BULKHEAD_H

