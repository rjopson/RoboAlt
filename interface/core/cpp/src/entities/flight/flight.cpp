#include "Flight.h"

Flight::Flight(const std::string& name, const std::string& comments, Atmosphere* atmosphere,
    const double& height_pad, const double& angle_launch_rod, const double& length_launch_rod)
    
    : Entity(name, comments),
    atmosphere_(atmosphere),
    altitude_pad_(height_pad),
    angle_launch_rod_(angle_launch_rod),
    length_launch_rod_(length_launch_rod) {

}

Flight::~Flight() {

}

void Flight::SetHeightPad(const double& height_pad) {
    altitude_pad_ = height_pad;
}

void Flight::SetAngleLaunchRod(const double& angle_launch_rod) {
    angle_launch_rod_ = angle_launch_rod;
}

void Flight::SetLengthLaunchRod(const double& length_launch_rod) {
    length_launch_rod_ = length_launch_rod;
}

void Flight::SetAtmosphere(Atmosphere* atmosphere) {
    atmosphere_ = atmosphere;
}

double Flight::HeightPad() const {
    return altitude_pad_;
}

double Flight::AngleLaunchRod() const {
    return angle_launch_rod_;
}

double Flight::LengthLaunchRod() const {
    return length_launch_rod_;
}

Atmosphere* Flight::AssignedAtmosphere() const {
    return atmosphere_;
}
