#include "Atmosphere.h"

Atmosphere::Atmosphere() {

}

Atmosphere::Atmosphere(std::string name, std::string comments, bool internally_calculated,
    const std::vector<double>& height_data, const std::vector<double>& pressure_data, const std::vector<double>& temperature_data)

    : name_(name),
      comments_(comments),
      internally_calculated_(internally_calculated),
      height_data_(height_data),
      pressure_data_(pressure_data),
      temperature_data_(temperature_data) {}

Atmosphere::~Atmosphere() {}

double Atmosphere::Temperature(const double& height) const {
    return MathUtilities::InterpolateLinear(height_data_, temperature_data_, height);
}

double Atmosphere::Pressure(const double& height) const {
    return MathUtilities::InterpolateLinear(height_data_, pressure_data_, height);
}

double Atmosphere::Density(const double& height) const {
    return Pressure(height) / (kR_Specific*Temperature(height));
}

double Atmosphere::SpeedOfSound(const double& height) const {
    return std::sqrt(kGamma*kR_Specific*Temperature(height));
}

double Atmosphere::Height(const double& in_pressure) const {
    return MathUtilities::InterpolateLinear(pressure_data_, height_data_, in_pressure);
}

void Atmosphere::Print() const {

    for (auto height : height_data_) {

        std::cout << height << ", ";
        std::cout << Temperature(height) << ", ";
        std::cout << Pressure(height) << ", ";
        std::cout << Density(height) << ", ";
        std::cout << SpeedOfSound(height) << std::endl;
    }
}


