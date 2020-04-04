
#ifndef _BULKHEAD_H
#define _BULKHEAD_H

#include "part.h"

class Bulkhead : public Part {
  public:
    Bulkhead(std::string name, std::string comments, Material* material,
        const double& diameter, const double& thickness, 
        bool mass_override_switch, const double& mass_override, bool cg_override_switch, const double& cg_override);
    ~Bulkhead();

    //Properties
    void SetDiameter(const double& diameter);
    void SetThickness(const double& thickness);
    double Diameter() const;
    double Thickness() const;

    //virtual functions
    double VolumeMaterial() const;

  private:
    double diameter_;
    double thickness_;
};
#endif // !_BULKHEAD_H

