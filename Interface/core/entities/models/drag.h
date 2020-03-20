#ifndef _DRAG_H
#define _DRAG_H

#include <cmath>
#include <functional>
#include <iostream>
#include <vector>

#include "math_utilities.h"

//need enum to select between internal drag model and external tabular data
enum class DragType {
    ROCKET,
    PARACHUTE
};

class Drag {
  public:
    Drag() {}
    Drag(std::string name, std::string comments, bool internally_calculated, DragType type, std::string manufacturer,
        const double& area_reference, 
        const std::vector<double>& data_mach_unpowered, const std::vector<double>& data_cd_unpowered,
        const std::vector<double>& data_mach_powered, const std::vector<double>& data_cd_powered);
    ~Drag();   

    double GetDynamicPressure(const double& density, const double& velocity) const;
    double GetCd(bool powered, const double& mach_number) const; //interpolate data for single mach number
    double GetDrag(bool powered, const double& density, const double& velocity, const double& speed_sound) const; //interpolate data for single drag

    std::string name_;
    bool internally_calculated_;
    std::string manufacturer_;
    std::string comments_;

  private:
    DragType type_;
    double area_reference_;
    std::vector<double> data_mach_unpowered_;
    std::vector<double> data_cd_unpowered_;
    std::vector<double> data_mach_powered_;
    std::vector<double> data_cd_powered_;       
};
#endif

