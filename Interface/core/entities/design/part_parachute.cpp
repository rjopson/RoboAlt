#include "part_parachute.h"

Parachute::Parachute(std::string name, std::string comments, Material* material,
    const double& diameter, const double& thickness,
    bool mass_override_switch, const double& mass_override, bool cg_override_switch, const double& cg_override) 
    
    : Part(name, comments, material, mass_override_switch, mass_override, cg_override_switch, cg_override),
      thickness_(thickness),
      diameter_(diameter) {

    type_ = PartType::PARACHUTE;
}

Parachute::~Parachute() {}

double Parachute::DragCoefficient() const {
    return Aerodynamics::DragCoefficientParachute();
}

double Parachute::VolumeMaterial() const {
    return Area()*thickness_;
}

Drag Parachute::DragModel() const {

    std::vector<double> mach{ 0.0, 0.8 };
    std::vector<double> cd{ DragCoefficient(), DragCoefficient() };

    Drag drag("Internal Model", "", true, DragType::PARACHUTE, "", Area(),
        mach, cd, mach, cd);

    return drag;
}

double Parachute::Area() const {
    return kPi * std::pow(diameter_ / 2.0, 2.0);
}