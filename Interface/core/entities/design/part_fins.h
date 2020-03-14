#ifndef _FINS_H
#define _FINS_H

#include "fin_shape.h"
#include "part.h"

enum class FinCrossSection {
    SQUARE,
    ROUNDED,
    AIRFOIL,
    DOUBLE_WEDGE
};

class Fins : public Part {
  public:
    Fins(std::string name, std::string comments, Material* material,
        FinShape* shape, const FinCrossSection& cross_section, 
        const int& number, const double& thickness, const double& radius_fillet,
        bool mass_override_switch, const double& mass_override, bool cg_override_switch, const double& cg_override);
    ~Fins();

    double AreaSurface();
    double AreaFrontal();
    double VolumeMaterial();
    double Length();

    //Overridden virtual functions 
    double AreaReference();
    double AreaWet();
    double DragCoefficient(const double& area_reference, const double& fineness_rocket,
        const double& mach_number, const double& skin_friction_coefficient,
        const bool& aft_most_part, const double& area_thrusting);
    double DragCoefficientFriction(const double& skin_friction_coefficient,
        const double& area_reference, const double& fineness_rocket);
    double DragCoefficientPressure(const double& mach_number, const double& area_reference);
    double DragCoefficientBase(const bool& aft_most_part,
        const double& mach_number, const double& area_thrusting, const double& area_reference);

    FinShape* shape_;
    FinCrossSection cross_section_;
    int number_;
    double thickness_;
    double radius_fillet_;
};
#endif // !_FINS_H



