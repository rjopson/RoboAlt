#ifndef _FLIGHT_H
#define _FLIGHT_H

#include "atmosphere.h"
#include "entity.h"
#include "motor.h"
#include "stage.h"

class Flight : public Entity {
  public:
    static constexpr double kGravity = 9.80665;

    Flight(const std::string& name, const std::string& comments, Atmosphere* atmosphere,
        const double& height_pad, const double& angle_launch_rod, const double& length_launch_rod);
    virtual ~Flight() = 0;

    virtual void AddStage(Stage* stage) = 0;
    virtual void RemoveStage(Stage* stage) = 0;
    virtual void SetMotor(Motor* motor, Stage* stage) = 0;
    void SetHeightPad(const double& height_pad);
    void SetAngleLaunchRod(const double& angle_launch_rod);
    void SetLengthLaunchRod(const double& length_launch_rod);
    void SetAtmosphere(Atmosphere* atmosphere);

    virtual Motor* AssignedMotor(Stage* stage) const = 0;
    double HeightPad() const;
    double AngleLaunchRod() const;
    double LengthLaunchRod() const;
    virtual std::vector<Stage*> Stages() const = 0;
    virtual std::vector<Motor*> Motors() const = 0;
    Atmosphere* AssignedAtmosphere() const;

  protected:
    double altitude_pad_;
    double angle_launch_rod_;
    double length_launch_rod_;
    Atmosphere* atmosphere_;
};
#endif // !_FLIGHT_H
