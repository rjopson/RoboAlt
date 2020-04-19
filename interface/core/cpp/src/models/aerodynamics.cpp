#include "aerodynamics.h"

Aerodynamics::Aerodynamics() {}

Aerodynamics::~Aerodynamics() {}

double Aerodynamics::MachNumber(const double& velocity, const double& speed_sound) {
    return velocity / speed_sound;
}

double Aerodynamics::ReynoldsNumber(const double& velocity, const double& length) {
    return (velocity*length) / kViscosity;
}

double Aerodynamics::PrandtlFactor(const double& mach_number) {
    return 1.0 / Aerodynamics::Beta(mach_number);
}

double Aerodynamics::Beta(const double& mach_number) {
    return std::sqrt(std::abs(std::pow(mach_number, 2) - 1));
}

double Aerodynamics::DynamicPressure(const double& in_density, const double& in_velocity) {
    return 0.5 * in_density * std::pow(in_velocity, 2);
}

double Aerodynamics::Drag(const double& density, const double& velocity, const double& drag_coefficient, const double& area_reference) {
    return 0.5*density*std::pow(velocity, 2)*drag_coefficient*area_reference;
}

double Aerodynamics::SurfaceRoughness(SurfaceFinish surfaceFinish) {

    if (surfaceFinish == SurfaceFinish::ROUGH)
        return 0.0002;
    else if (surfaceFinish == SurfaceFinish::UNFINISHED)
        return 0.0001;
    else if (surfaceFinish == SurfaceFinish::PAINTED)
        return 0.00003;
    else if (surfaceFinish == SurfaceFinish::POLISHED)
        return 0.000002;
}

double Aerodynamics::SkinFrictionCoefficient(const double& surface_roughness, const double& length, 
    const double& velocity, const double& mach_number) {

    double cf;

    double Re = Aerodynamics::ReynoldsNumber(velocity, length);
    double Re_cr = 51.0*std::pow(surface_roughness / length, -1.039);

    if (Re < 10000.0) { //equations below don't hold. Velocity is also very low, so drag is negligible. 
        return 0.0148;
    }
    else {

        if (Re < 500000.0) { //laminar
            return 1.328 / std::sqrt(Re);
        }
        else { 

            //smooth turbulent
            cf = 1.0 / pow((3.46*std::log(Re) - 5.6), 2) - 1700.0 / Re;
            double cf_c_smooth_turbulent;

            if (mach_number < 1.0) { //subsonic compressiblility correction
                cf_c_smooth_turbulent = cf * (1 - 0.09*std::pow(mach_number, 2));
            }
            else { //supersonic compressibility correction
                cf_c_smooth_turbulent = cf / std::pow((1.0 + 0.15*std::pow(mach_number, 2)), 0.58);
            }

            //rough turbulent
            double cf_c_rough_turbulent;

            if (Re > Re_cr) {  
                cf = 0.032*std::pow(surface_roughness / length, 0.2);
            }
            if (mach_number < 1.0) { //subsonic compressiblility correction
                cf_c_rough_turbulent = cf * (1 - 0.12*std::pow(mach_number, 2));
            }
            else { //supersonic compressibility correction
                cf_c_rough_turbulent = cf / (1.0 + 0.18*std::pow(mach_number, 2));
            }

            //Rough turbulent can never be less than smooth turbulent
            if (cf_c_rough_turbulent > cf_c_smooth_turbulent) {
                return cf_c_rough_turbulent;
            }
            else {
                return cf_c_smooth_turbulent;
            }
        }
    }
}

double Aerodynamics::DragCoefficientFrictionBody(const double& skin_friction_coefficient, const double& fineness_rocket,
    const double& area_wet, const double& area_reference) {

    return skin_friction_coefficient * (1.0 + 1.0 / (2.0*fineness_rocket))*(area_wet / area_reference);
}

double Aerodynamics::DragCoefficientFrictionFins(const double& skin_friction_coefficient, 
    const double& area_wet, const double& area_reference) {

    return skin_friction_coefficient * (area_wet / area_reference);
}

double Aerodynamics::DragCoefficientBase(const bool& aft_most_part, const double& mach_number,
    const double& area_reference_part, const double& area_thrusting, const double& area_reference) {

    double cd;

    if (aft_most_part) {

        if (mach_number < 1.0) {
            cd = 0.12 + 0.13*std::pow(mach_number, 2);
        }

        else {
            cd = 0.25 / mach_number;
        }
    }
    else {
        cd = 0.0;
    }
    return cd * ((area_reference_part - area_thrusting) / area_reference);
}

double Aerodynamics::DragCoefficientBaseFins(const double& mach_number, const double& area_fins_frontal, const double& area_reference) {

    double cd;

    if (mach_number < 1.0) {
        cd = 0.12 + 0.13*std::pow(mach_number, 2);
    }

    else {
        cd = 0.25 / mach_number;
    }

    return 0.5*cd*(area_fins_frontal / area_reference);
}

double Aerodynamics::DragCoefficientPressureNose(const double& mach_number, const double& fineness, NoseconeType type,
    const double& area_reference_part, const double& area_reference) {

    //Calculate blunt cylinder
    double q_stag_q;
    if (mach_number < 1.0) {
        q_stag_q = 1.0 + std::pow(mach_number, 2) / 4.0 + std::pow(mach_number, 4) / 40.0;
    }
    else {
        q_stag_q = 1.84 - 0.76 / std::pow(mach_number, 2) + 0.166 / std::pow(mach_number, 4) + 0.035 / std::pow(mach_number, 6);
    }
    double c_d_0 = 0.85*q_stag_q;

    //Get nosecone shape c_d for fineness of 3.0
    std::vector<double> m_data; 
    std::vector<double> cd_data;
    if (type == NoseconeType::VON_KARMEN) {
        std::vector<double> M_data_vk{ 0.0, 0.9, 0.95, 1.0, 1.05, 1.1, 1.2, 1.4, 1.6, 1.8, 2.0, 3.0, 5.0 };
        std::vector<double> cd_data_vk{ 0.0, 0, 0.01, 0.025, 0.06, 0.07, 0.075, 0.088, 0.09, 0.08, 0.075, 0.075, 0.075 };
        m_data = M_data_vk;
        cd_data = cd_data_vk;
    }
    double c_d_3 = MathUtilities::InterpolateLinear(m_data, cd_data, mach_number);

    //Interpolate cd to actual fineness using blunt body and nosecone cd for fineness of 3.0
    double cd = c_d_0 * std::pow(c_d_3 / c_d_0, std::log(fineness + 1.0)/std::log(4.0));

    //normalize to configuration reference area
    return cd * (area_reference_part / area_reference);
}

double Aerodynamics::DragCoefficientPressureFinsRounded(const double& mach_number, const double& angle_sweep,
    const double& area_fins_frontal, const double& area_reference) {

    double cd;

    if (mach_number < 0.9) {
        cd = std::pow(1.0 - std::pow(mach_number, 2), -0.417) - 1.0;
    }
    else if (mach_number >= 0.9 && mach_number <= 1.0) {
        cd = 1.0 - 1.785*(mach_number - 0.9);
    }
    else {
        cd = 1.214 - 0.502 / std::pow(mach_number, 2) + 0.1095 / std::pow(mach_number, 4);
    }

    //correct cd for sweep
    double cd_sweep = cd * std::pow(std::cos(angle_sweep*(kPi/180.0)), 2);

    //put in config reference area
    return cd_sweep * (area_fins_frontal / area_reference);
}

double Aerodynamics::DragCoefficientParachute() {
    return 0.8;
}

