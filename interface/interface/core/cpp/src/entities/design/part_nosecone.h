#ifndef _NOSECONE_H
#define _NOSECONE_H

#include "part.h"

class Nosecone : public Part {
  public:
    Nosecone(const std::string& name, const std::string& comments, Material* material,
        NoseconeType nose_type, const double& shape_parameter,
        const double& length_nose, const double& length_base, const double& length_shoulder,
        const double& thickness, const double& diameter_outer, const double& diameter_shoulder,
        bool mass_override_switch, const double& mass_override, bool cg_override_switch, const double& cg_override);    
    ~Nosecone();       

    //Values
    void SetNoseType(NoseconeType nose_type);
    void SetShapeParameter(const double& shape_parameter);
    void SetLengthNose(const double& length_nose);
    void SetLengthBase(const double& length_base);
    void SetLengthShoulder(const double& length_shoulder);
    void SetThickness(const double& thickness);
    void SetDiameterOuter(const double& diameter_outer);
    void SetDiameterShoulder(const double& diameter_shoulder);

    //Datanames
    NoseconeType NoseType() const;
    double ShapeParameter() const;
    double LengthNose() const;
    double LengthBase() const;
    double LengthShoulder() const;
    double Thickness() const;
    double DiameterOuter() const;
    double DiameterShoulder() const;
    double Radius() const;
    double Length() const;    

    //Core functions
    double AreaSurface() const;
    double AreaPlanform() const;
    double AreaForward() const;
    double AreaAft() const;
    double VolumeInterior() const;
    double FinenessRatio() const;
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

  private:	    
    double CurveVonKarmen(const double& x);
    double CurveConic(const double& x);

    NoseconeType nose_type_;
    double shape_parameter_;
    double length_nose_;
    double length_base_;
    double length_shoulder_;
    double thickness_;
    double thickness_shoulder_;
    double diameter_outer_;
    double diameter_shoulder_;
};
#endif // !_NOSECONE_H

