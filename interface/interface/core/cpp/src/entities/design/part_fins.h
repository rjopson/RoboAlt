#ifndef _FINS_H
#define _FINS_H

#include "fin_shape.h"
#include "part.h"

class Fins : public Part {
  public:
    Fins(const std::string& name, const std::string& comments, Material* material,
        FinShape* shape, const FinCrossSection& cross_section, 
        const int& number, const double& thickness, const double& radius_fillet,
        bool mass_override_switch, const double& mass_override, bool cg_override_switch, const double& cg_override);
    ~Fins();    

    //Values
    void SetShape(FinShape* shape);
    void SetFinCrossSection(FinCrossSection cross_section);
    void SetNumber(const double& number);
    void SetThickness(const double& thickness);
    void SetRadiusFillet(const double& radius_fillet);

    //Datanames
    FinShapeType AssignedShapeType() const;
    template <class T>
    T* AssignedShape() const {
        return reinterpret_cast<T*>(shape_);
    }
    FinCrossSection CrossSection() const;
    int Number() const;
    double Thickness() const;
    double RadiusFillet() const;

    //Core functions
    double VolumeMaterial() const;
    double AreaReference() const;
    double AreaWet() const;
    double DragCoefficient(const double& area_reference, const double& fineness_rocket,
        const double& mach_number, const double& skin_friction_coefficient,
        const bool& aft_most_part, const double& area_thrusting) const;
    double DragCoefficientFriction(const double& skin_friction_coefficient,
        const double& area_reference, const double& fineness_rocket) const;
    double DragCoefficientPressure(const double& mach_number, const double& area_reference) const;
    double DragCoefficientBase(const bool& aft_most_part,
        const double& mach_number, const double& area_thrusting, const double& area_reference) const;    

  private:
    double AreaSurface() const;
    double AreaFrontal() const;    
    double Length() const;

    FinShape* shape_;
    FinCrossSection cross_section_;
    int number_;
    double thickness_;
    double radius_fillet_;
};
#endif // !_FINS_H



