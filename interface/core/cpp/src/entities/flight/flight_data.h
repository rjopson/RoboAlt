#ifndef _FLIGHT_DATA_H
#define _FLIGHT_DATA_H

#include <algorithm>
#include <iostream>
#include <map>
#include <vector>

#include "atmosphere.h"
#include "matrix.h"

enum class Phase {
    DETECT_LAUNCH,
    ASCENT_POWERED,
    ASCENT_UNPOWERED_STACKED,
    DESCENT_DROGUE,
    DESCENT_MAIN,
    GROUND,
    ASCENT_UNPOWERED_UNSTACKED,
    DESCENT_UNPOWERED_STACKED,
    DESCENT_UNPOWERED_UNSTACKED
};

enum class Event {
    LIFTOFF,
    BURNOUT,
    APOGEE,
    ALTITUDE_MAIN,
    GROUND,
    AT_TIME_DELAY,
    NONE
};

class FlightData {
  public:
    FlightData();
 
    virtual ~FlightData() = 0;	

    std::vector<double> Time() const;
    std::vector<double> AltitudeMsl() const;
    std::vector<double> AltitudeAgl() const;
    std::vector<double> Velocity() const;
    std::vector<double> Acceleration() const;
    //std::vector<double> RotationX() const;
    //std::vector<double> RotationY() const;
    //std::vector<double> RotationZ() const;
    std::vector<double> MachNumber() const;
    //std::vector<double> ReynoldsNumber() const;
    std::vector<double> DynamicPressure() const;
    std::vector<double> Drag() const;
    std::vector<double> DragCoefficient() const;
    std::vector<double> Mass() const;
    std::vector<double> Pressure() const;
    std::vector<double> Temperature() const;
    std::vector<double> Thrust() const;
    
    double AltitudeMslMax() const;
    double AltitudeAglMax() const;
    double VelocityMax() const;
    double VelocityOffRail() const;
    double AccelerationMax() const;
    double DynamicPressureMax() const;
    double TimeBurnout() const;
    double TimeApogee() const;
    double TimeMainDeploy() const;
    double TimeOfFlight() const;
    double DescentRateDrogue() const;
    double DescentRateMain() const;

    //SimulationData
    //populated with output time/position/velocity/acceleration data - calculations of everything else

    //ExperimentalData
    //populated with raw sensor data. 
    //Class does conversion to engineering data, calculations using data from design entities (masses, reference area etc.)

    void Print(); //debug
    static Event GetEvent(const std::string& val);
    static Phase GetPhase();
    static Phase UpdatePhase(const double& altitude, const double& velocity, const double& acceleration, const double& altitude_main, Phase phase_previous);

  protected:
    int Length() const;

    std::vector<Phase> phase_;
    std::map<Event, int> events_;
    std::vector<double> time_;
    std::vector<double> altitude_msl_, altitude_agl_;
    std::vector<double> velocity_;
    std::vector<double> acceleration_;
    std::vector<double> acceleration_x_, acceleration_y_, acceleration_z_;
    std::vector<double> mach_number_, reynolds_number_, dynamic_pressure_;
    std::vector<double> rotation_x_, rotation_y_, rotation_z_;
    std::vector<double> drag_, drag_coefficient_;
    std::vector<double> mass_;
    std::vector<double> thrust_;
    std::vector<double> pressure_, temperature_;

  private:
    
    //double velocity_off_rail_;    
};
#endif



