#include "drag.h"

Drag::Drag(std::string name, std::string comments, bool internally_calculated, DragType type, std::string manufacturer,
    const double& area_reference,
    const std::vector<double>& data_mach_unpowered, const std::vector<double>& data_cd_unpowered,
    const std::vector<double>& data_mach_powered, const std::vector<double>& data_cd_powered)

    : name_(name),
      comments_(comments),
      internally_calculated_(internally_calculated),
      type_(type),
      manufacturer_(manufacturer),
      area_reference_(area_reference),
      data_mach_unpowered_(data_mach_unpowered),
      data_cd_unpowered_(data_cd_unpowered),
      data_mach_powered_(data_mach_powered),
      data_cd_powered_(data_cd_powered) {}

Drag::~Drag() {}

double Drag::GetDynamicPressure(const double& in_density, const double& in_velocity) const {
    return 0.5*in_density*std::pow(in_velocity, 2);
}

double Drag::GetCd(bool powered, const double& mach_number) const {
    if (powered) {
        return MathUtilities::InterpolateLinear(data_mach_powered_, data_cd_powered_, mach_number);
    }
    else {
        return MathUtilities::InterpolateLinear(data_mach_unpowered_, data_cd_unpowered_, mach_number);
    }
}

double Drag::GetDrag(bool powered, const double& density, const double& velocity, const double& speed_sound) const {
    double mach_number = velocity / speed_sound;
    return GetDynamicPressure(density, velocity)*area_reference_*GetCd(powered, mach_number);
}