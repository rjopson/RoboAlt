#ifndef _TUBE_BODY_H
#define _TUBE_BODY_H

#include "part.h"

class TubeBody : public Part {
  public:
    TubeBody(std::string name, std::string comments, Material* material,
        const double& length, const double& diameter_outer, const double& thickness,
        bool mass_override_switch, const double& mass_override, bool cg_override_switch, const double& cg_override);
    ~TubeBody();    

    double DiameterInner();
    double AreaSurface();    
    double VolumeInterior();
    double AreaPlanform();

    //Overridden virtual functions 
    double DiameterAirflow();
    double LengthAirflow();
    double AreaReference();
    double AreaWet();
    double VolumeMaterial();
    double DragCoefficient(const double& area_reference, const double& fineness_rocket,
        const double& mach_number, const double& skin_friction_coefficient,
        const bool& aft_most_part, const double& area_thrusting);
    double DragCoefficientFriction(const double& skin_friction_coefficient,
        const double& area_reference, const double& fineness_rocket);
    double DragCoefficientBase(const bool& aft_most_part,
        const double& mach_number, const double& area_thrusting, const double& area_reference);
    
    double length_;
    double diameter_outer_;
    double thickness_;
};
#endif // !_TUBE_BODY_H

