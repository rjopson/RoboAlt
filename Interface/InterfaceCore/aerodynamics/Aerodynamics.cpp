#include "Aerodynamics.h"



Aerodynamics::Aerodynamics() {

}


Aerodynamics::~Aerodynamics() {

}

double Aerodynamics::machNumber(const double& in_velocity, const double& in_speedSound) {
	return in_velocity / in_speedSound;
}

double Aerodynamics::reynoldsNumber(const double& in_velocity, const double& in_length) {
	return (in_velocity*in_length) / VISCOSITY;
}

double Aerodynamics::prandtlFactor(const double& in_machNumber) {
	return 1.0 / Aerodynamics::beta(in_machNumber);
}

double Aerodynamics::beta(const double& in_machNumber) {
	return std::sqrt(std::abs(std::pow(in_machNumber, 2) - 1));
}

double Aerodynamics::drag(const double& in_density, const double& in_velocity, const double& in_dragCoefficient, const double& in_areaRef) {
	return 0.5*in_density*std::pow(in_velocity, 2)*in_dragCoefficient*in_areaRef;
}

double Aerodynamics::skinFrictionCoefficient(const double& in_surfaceRoughness, const double& in_length, 
	const double& in_velocity, const double& in_machNumber) {

	double cf;

	double Re = Aerodynamics::reynoldsNumber(in_velocity, in_length);
	double Re_cr = 51.0*std::pow(in_surfaceRoughness / in_length, -1.039);

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

			if (in_machNumber < 1.0) { //subsonic compressiblility correction
				cf_c_smooth_turbulent = cf * (1 - 0.09*std::pow(in_machNumber, 2));
			}
			else { //supersonic compressibility correction
				cf_c_smooth_turbulent = cf / std::pow((1.0 + 0.15*std::pow(in_machNumber, 2)), 0.58);
			}

			//rough turbulent
			double cf_c_rough_turbulent;

			if (Re > Re_cr) {  
				cf = 0.032*std::pow(in_surfaceRoughness / in_length, 0.2);
			}
			if (in_machNumber < 1.0) { //subsonic compressiblility correction
				cf_c_rough_turbulent = cf * (1 - 0.12*std::pow(in_machNumber, 2));
			}
			else { //supersonic compressibility correction
				cf_c_rough_turbulent = cf / (1.0 + 0.18*std::pow(in_machNumber, 2));
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

double Aerodynamics::dragCoefficientFrictionBody(const double& in_skinFrictionCoefficient, const double& in_finenessRocket,
	const double& in_areaWet, const double& in_areaReference) {

	return in_skinFrictionCoefficient * (1.0 + 1.0 / (2.0*in_finenessRocket))*(in_areaWet / in_areaReference);
}

double Aerodynamics::dragCoefficientFrictionFins(const double& in_skinFrictionCoefficient, 
	const double& in_areaWet, const double& in_areaReference) {

	return in_skinFrictionCoefficient * (in_areaWet / in_areaReference);
}

double Aerodynamics::dragCoefficientBase(const bool& in_aftMostPart, const double& in_machNumber,
	const double& in_areaReferencePart, const double& in_areaThrusting, const double& in_areaReference) {

	double cd;

	if (in_aftMostPart) {

		if (in_machNumber < 1.0) {
			cd = 0.12 + 0.13*std::pow(in_machNumber, 2);
		}

		else {
			cd = 0.25 / in_machNumber;
		}
	}
	else {
		cd = 0.0;
	}
	return cd * ((in_areaReferencePart - in_areaThrusting) / in_areaReference);
}

double Aerodynamics::dragCoefficientBaseFins(const double& in_machNumber, const double& in_areaFinsFrontal, const double& in_areaReference) {

	double cd;

	if (in_machNumber < 1.0) {
		cd = 0.12 + 0.13*std::pow(in_machNumber, 2);
	}

	else {
		cd = 0.25 / in_machNumber;
	}

	return 0.5*cd*(in_areaFinsFrontal / in_areaReference);
}

double Aerodynamics::dragCoefficientPressureNose(const double& in_machNumber, const double& in_fineness, NoseconeType in_type,
	const double& in_areaReferencePart, const double& in_areaReference) {

	//Calculate blunt cylinder
	double q_stag_q;
	if (in_machNumber < 1.0) {
		q_stag_q = 1.0 + std::pow(in_machNumber, 2) / 4.0 + std::pow(in_machNumber, 4) / 40.0;
	}
	else {
		q_stag_q = 1.84 - 0.76 / std::pow(in_machNumber, 2) + 0.166 / std::pow(in_machNumber, 4) + 0.035 / std::pow(in_machNumber, 6);
	}
	double c_d_0 = 0.85*q_stag_q;

	//Get nosecone shape c_d for fineness of 3.0
	std::vector<double> M_data; 
	std::vector<double> cd_data;
	if (in_type == NoseconeType::VON_KARMEN) {
		std::vector<double> M_data_vk{ 0.0, 0.9, 0.95, 1.0, 1.05, 1.1, 1.2, 1.4, 1.6, 1.8, 2.0, 3.0, 5.0 };
		std::vector<double> cd_data_vk{ 0.0, 0, 0.01, 0.025, 0.06, 0.07, 0.075, 0.088, 0.09, 0.08, 0.075, 0.075, 0.075 };
		M_data = M_data_vk;
		cd_data = cd_data_vk;
	}
	double c_d_3 = MathUtilities::interpolateLinear(M_data, cd_data, in_machNumber);

	//Interpolate cd to actual fineness using blunt body and nosecone cd for fineness of 3.0
	double cd = c_d_0 * std::pow(c_d_3 / c_d_0, std::log(in_fineness + 1.0)/std::log(4.0));

	//normalize to configuration reference area
	return cd * (in_areaReferencePart / in_areaReference);
}

double Aerodynamics::dragCoefficientPressureFinsRounded(const double& in_machNumber, const double& in_angleSweep,
	const double& in_areaFinsFrontal, const double& in_areaReference) {

	double cd;

	if (in_machNumber < 0.9) {
		cd = std::pow(1.0 - std::pow(in_machNumber, 2), -0.417) - 1.0;
	}
	else if (in_machNumber >= 0.9 && in_machNumber <= 1.0) {
		cd = 1.0 - 1.785*(in_machNumber - 0.9);
	}
	else {
		cd = 1.214 - 0.502 / std::pow(in_machNumber, 2) + 0.1095 / std::pow(in_machNumber, 4);
	}

	//correct cd for sweep
	double cd_sweep = cd * std::pow(std::cos(in_angleSweep*(180.0/PI)), 2);

	//put in config reference area
	return cd_sweep * (in_areaFinsFrontal / in_areaReference);
}

