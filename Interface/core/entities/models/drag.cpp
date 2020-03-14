#include "drag.h"

Drag::Drag(std::string name, std::string comments, bool internally_calculated, DragType type, std::string manufacturer)

    : name_(name),
      comments_(comments),
      internally_calculated_(internally_calculated),
      type_(type),
      manufacturer_(manufacturer) {}

Drag::~Drag() {}

double Drag::GetDynamicPressure(const double& in_density, const double& in_velocity) {
    return 0.5*in_density*std::pow(in_velocity, 2);
}

double Drag::GetCd(bool powered, const double& mach_number) {
    if (powered) {
        return MathUtilities::InterpolateLinear(data_mach_powered_, data_cd_powered_, mach_number);
    }
    else {
        return MathUtilities::InterpolateLinear(data_mach_unpowered_, data_cd_unpowered_, mach_number);
    }
}

double Drag::GetDrag(bool powered, const double& density, const double& velocity, const double& speed_sound) {
    double mach_number = velocity / speed_sound;
    return GetDynamicPressure(density, velocity)*area_reference_*GetCd(powered, mach_number);
}