#ifndef _ATMOSPHERE_ISA_H
#define _ATMOSPHERE_ISA_H

#include <iostream>
#include <math.h>
#include <vector>

#include "atmosphere.h"

class AtmosphereISA {
  public:
    static constexpr double kGravity = 9.80665; //m/s2
    static constexpr double kGamma = 1.4;
    static constexpr double kR_Specific = 287.058;
    static constexpr int kHeightMin = -610;
    static constexpr int kHeightMax = 84900;
    static constexpr int kHeightStep = 10;

    AtmosphereISA();
    ~AtmosphereISA();    
    
    //height-->standard atmosphere calcs
    double Temperature(const double& height) const;
    double Pressure(const double& height) const;
    double Density(const double& height) const;
    double SpeedOfSound(const double& height) const;

    //returns generic atmosphere class
    Atmosphere GetModel() const;
    
    //pressure-->standard atmosphere calcs
    double Height(const double& pressure) const;
    
  private:
      int RegionFromHeight(const double& height) const;
      int RegionFromPressure(const double& pressure) const;

    //-610m, 1:11km, 2:20km, 3:32km, 4:47km, 5:51km, 6:71km, 7:84.9im
    std::vector<double> p1_;
    std::vector<double> t1_;
    std::vector<double> h1_;
    std::vector<double> a_;    
};
#endif


