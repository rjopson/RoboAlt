
#ifndef _AERODYNAMICS_H
#define _AERODYNAMICS_H

#include <cmath>
#include <iostream>
#include <vector>

#include "math_utilities.h"

enum class SurfaceFinish {
    ROUGH = 0,
    UNFINISHED,
    PAINTED,
    POLISHED
};

enum class NoseconeType {
    VON_KARMEN = 0,
    CONICAL,
    OGIVE,
    HAACK
};

enum class FinCrossSection {
    SQUARE = 0,
    ROUNDED,
    AIRFOIL,
    DOUBLE_WEDGE
};

class Aerodynamics {
  public:
    static constexpr double kViscosity = 0.000015;
    static constexpr double kPi = 3.141592653589793;

    Aerodynamics();
    ~Aerodynamics();

    //non dimensional 
    static double MachNumber(const double& velocity, const double& speed_sound);
    static double ReynoldsNumber(const double& velocity, const double& length);
    static double PrandtlFactor(const double& mach_number);
    static double Beta(const double& mach_number);
    static double DynamicPressure(const double& density, const double& velocity);

    //rocket drag
    static double Drag(const double& density, const double& velocity, const double& drag_coefficient, const double& area_reference);
    static double DragCoefficientFrictionBody(const double& skin_friction_coefficient, const double& fineness_rocket,
        const double& area_wet, const double& area_reference);
    static double DragCoefficientFrictionFins(const double& skin_friction_coefficient,
        const double& area_wet, const double& area_reference);
    static double DragCoefficientBase(const bool& aft_most_part, const double& mach_number,
        const double& area_reference_part, const double& area_thrusting, const double& area_reference);
    static double DragCoefficientBaseFins(const double& mach_number, const double& area_fins_frontal, const double& area_reference);
    static double DragCoefficientPressureNose(const double& mach_number, const double& fineness, NoseconeType type,
        const double& area_reference_part, const double& area_reference);
    static double DragCoefficientPressureFinsRounded(const double& mach_number, const double& angle_sweep,
        const double& area_fins_frontal, const double& area_reference);
    static double SurfaceRoughness(SurfaceFinish surface_finish);

    //parachute drag
    static double DragCoefficientParachute();

    //skin friction coefficient
    static double SkinFrictionCoefficient(const double& surface_roughness, const double& length,
        const double& velocity, const double& mach_number);

    //stability
};
#endif

