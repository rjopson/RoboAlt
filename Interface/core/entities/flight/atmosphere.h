
#ifndef _ATMOSPHERE_H
#define _ATMOSPHERE_H

#include <vector>

#include "math_utilities.h"

#define GRAVITY 9.80665 //m/s2
#define GAMMA 1.4
#define R_SPECIFIC 287.058

class Atmosphere {
  public:
    static constexpr double kGravity = 9.80665; //m/s2
    static constexpr double kGamma = 1.4;
    static constexpr double kR_Specific = 287.058;

    Atmosphere();
    Atmosphere(std::string name, std::string comments, bool internally_calculated,
        const std::vector<double>& height_data, const std::vector<double>& pressure_data, const std::vector<double>& temperature_data);
    Atmosphere(std::string file_path);
    ~Atmosphere();   

    //height-->standard atmosphere calcs
    double Temperature(const double& height) const;
    double Pressure(const double& height) const;
    double Density(const double& height) const;
    double SpeedOfSound(const double& height) const;

    //pressure-->standard atmosphere calcs
    double Height(const double& in_pressure) const;

    void Print() const;

    std::string name_;
    std::string comments_;
    bool internally_calculated_;

  private:
    std::vector<double> height_data_;
    std::vector<double> pressure_data_;
    std::vector<double> temperature_data_;
};
#endif

