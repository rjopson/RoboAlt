#ifndef _NOSECONE_H
#define _NOSECONE_H

#include "part.h"

class Nosecone : public Part {
  public:
    Nosecone(std::string name, std::string comments, Material* material,
        NoseconeType nose_type, const double& shape_parameter,
        const double& length_nose, const double& length_base, const double& length_shoulder,
        const double& thickness, const double& thickness_shoulder, 
        const double& diameter_outer, const double& diameter_shoulder,
        bool mass_override_switch, const double& mass_override, bool cg_override_switch, const double& cg_override);    
    ~Nosecone();    

    double Radius();
    double Length();
    double AreaSurface();
    double AreaPlanform();
    double AreaForward();
    double AreaAft();    
    double VolumeInterior();
    double FinenessRatio();

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
    double DragCoefficientPressure(const double& mach_number, const double& area_reference);
    double DragCoefficientBase(const bool& aft_most_part,
        const double& mach_number, const double& area_thrusting, const double& area_reference);

    NoseconeType nose_type_;
    double shape_parameter_;
    double length_nose_;
    double length_base_;
    double length_shoulder_;
    double thickness_;
    double thickness_shoulder_;
    double diameter_outer_;
    double diameter_shoulder_;

  private:	
    double CurveVonKarmen(const double& x);
    double CurveConic(const double& x);
};
#endif // !_NOSECONE_H

