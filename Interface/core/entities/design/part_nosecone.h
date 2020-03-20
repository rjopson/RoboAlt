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

    //Overridden virtual functions 
    double DiameterAirflow() const;
    double LengthAirflow() const;
    double AreaReference() const;
    double AreaWet() const;
    double VolumeMaterial() const;
    double DragCoefficient(const double& area_reference, const double& fineness_rocket,
        const double& mach_number, const double& skin_friction_coefficient,
        const bool& aft_most_part, const double& area_thrusting) const;
    double DragCoefficientFriction(const double& skin_friction_coefficient,
        const double& area_reference, const double& fineness_rocket) const;
    double DragCoefficientPressure(const double& mach_number, const double& area_reference) const;
    double DragCoefficientBase(const bool& aft_most_part,
        const double& mach_number, const double& area_thrusting, const double& area_reference) const;

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
    double Radius() const;
    double Length() const;
    double AreaSurface() const;
    double AreaPlanform() const;
    double AreaForward() const;
    double AreaAft() const;
    double VolumeInterior() const;
    double FinenessRatio() const;
    double CurveVonKarmen(const double& x);
    double CurveConic(const double& x);
};
#endif // !_NOSECONE_H

