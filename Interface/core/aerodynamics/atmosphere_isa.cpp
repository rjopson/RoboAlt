#include "atmosphere_isa.h"

AtmosphereISA::AtmosphereISA() {

    //-610m, 11km, 20km, 32km, 47km, 51km, 71km, 84.9km
    p1_.insert(p1_.end(), {108900.0, 22632.0, 5474.9, 868.02, 110.91, 67.0, 3.9564, 0.3734});
    t1_.insert(t1_.end(), {292.15, 216.65, 216.65, 228.65, 270.65, 270.65, 214.65, 186.87});
    h1_.insert(h1_.end(), {-610.0, 11000.0, 20000.0, 32000.0, 47000.0, 51000.0, 71000.0, 84900.0});
    a_.insert(a_.end(), {-0.0065, 0.0, 0.001, 0.0028, 0.0, -0.0028, -0.002, 0.0});
}

AtmosphereISA::~AtmosphereISA() {}

double AtmosphereISA::Temperature(const double& height) const {
    
    int region = RegionFromHeight(height);

    if (a_[region] == 0.0) { //isothermal region
        return t1_[region];
    }
    else { //gradient region
        return t1_[region] + a_[region] * (height - h1_[region]);
    }
}

double AtmosphereISA::Pressure(const double& height) const {
    
    int region = RegionFromHeight(height);

    if (a_[region] == 0.0) { //isothermal region
        return p1_[region] * std::exp(-(kGravity / (kR_Specific*Temperature(height)))*(height - h1_[region]));
    }
    else { //gradient region
        return p1_[region] * std::pow((Temperature(height) / t1_[region]), (-kGravity/ (a_[region] * kR_Specific)));
    }
}

double AtmosphereISA::Density(const double& height) const {
    
    return Pressure(height) / (kR_Specific*Temperature(height));
}

double AtmosphereISA::SpeedOfSound(const double& height) const {
    
    return std::sqrt(kGamma*kR_Specific*Temperature(height));
}

double AtmosphereISA::Height(const double& pressure) const {

    int region = RegionFromPressure(pressure);

    if (a_[region] == 0.0) { //isothermal region
        return ((kR_Specific*t1_[region]) / kGravity)*std::log(pressure / p1_[region]) + h1_[region];
    }
    else { //gradient region
        return (t1_[region] / (-a_[region]))*(1 - pow(pressure / p1_[region], (kR_Specific*(-a_[region])) / kGravity) + h1_[region]);
    }
}

//returns vector of {height, pressure, temperature}
Atmosphere AtmosphereISA::GetModel() const {

    int iterations = (kHeightMax - kHeightMin) / kHeightStep;

    std::vector<double> height_data(iterations);
    std::vector<double> pressure_data(iterations);
    std::vector<double> temperature_data(iterations);
    
    for (int i = 0; i != iterations; i++) {

        double height_current = (double)(i*kHeightStep + kHeightMin);		
        height_data[i] = height_current;
        pressure_data[i] = Pressure(height_current);
        temperature_data[i] = Temperature(height_current);
    }

    return Atmosphere("Internal model", "", true, height_data, pressure_data, temperature_data);
}

int AtmosphereISA::RegionFromHeight(const double& height) const {
    
    int i = 0;
    
    std::vector<double> h1_sub(h1_.begin() + 1, h1_.end()); //drop 1st value from heights

    for (auto height_test : h1_sub) {
        if (height < height_test) {
            return i;
        }
        i++;
    }
}

int AtmosphereISA::RegionFromPressure(const double& pressure) const {
    
    int i = 0;

    std::vector<double> p1_sub(p1_.begin() + 1, p1_.end()); //drop 1st value from pressures
    
    for (auto pressure_test : p1_sub) {
        if (pressure > pressure_test) {
            return i;
        }
        i++;
    }
}
















