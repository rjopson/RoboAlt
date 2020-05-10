#ifndef _FLIGHT_DATA_H
#define _FLIGHT_DATA_H

#include <algorithm>
#include <iostream>
#include <map>
#include <vector>

#include "aerodynamics.h"
#include "atmosphere.h"
#include "matrix.h"

enum class Event {
    LIFTOFF = 0,
    BURNOUT,
    APOGEE,
    ALTITUDE_MAIN,
    GROUND,
    AT_TIME_DELAY,
    NONE
};

enum class Phase {
    DETECT_LAUNCH = 0,
    ASCENT_POWERED,
    ASCENT_UNPOWERED_STACKED,
    DESCENT_DROGUE,
    DESCENT_MAIN,
    GROUND,
    ASCENT_UNPOWERED_UNSTACKED,
    DESCENT_UNPOWERED_STACKED,
    DESCENT_UNPOWERED_UNSTACKED
};

struct ReducedData {
    int length;
    double altitude_msl_max, altitude_agl_max;
    double velocity_max, velocity_off_rail;
    double acceleration_max, acceleration_min;
    double dynamic_pressure_max;
    double time_burnout, time_apogee, time_main_deploy, time_of_flight;
    double descent_rate_drogue, descent_rate_main;

    std::vector<Phase> phase;
    std::map<Event, int> events;
    std::vector<double> time;
    std::vector<double> altitude_msl, altitude_agl;
    std::vector<double> velocity;
    std::vector<double> acceleration;
    std::vector<double> acceleration_x, acceleration_y, acceleration_z;
    std::vector<double> mach_number, reynolds_number, dynamic_pressure;
    std::vector<double> rotation_x, rotation_y, rotation_z;
    std::vector<double> drag, drag_coefficient;
    std::vector<double> mass;
    std::vector<double> thrust;
    std::vector<double> pressure, temperature;

    std::vector<double> alt_voltage;
    std::vector<double> alt_altitude_baro_agl, alt_altitude_baro_msl;
    std::vector<double> alt_altitude_accelerometer;
};

class FlightData {
  public:
    FlightData(); 
    virtual ~FlightData();	    

    ReducedData Reduced();
    void Print(); //debug

    static Event GetEvent(const std::string& val);
    static Phase GetPhase();
    static Phase UpdatePhase(const double& altitude, const double& velocity, const double& acceleration, const double& altitude_main, Phase phase_previous);

  protected:      
      ReducedData reduced_;
      Atmosphere* atmosphere_;

private:
      int Length() const;
      double AltitudeMslMax() const;
      double AltitudeAglMax() const;
      double VelocityMax() const;
      double VelocityOffRail() const;
      double AccelerationMax() const;
      double AccelerationMin() const;
      double DynamicPressureMax() const;
      double TimeBurnout() const;
      double TimeApogee() const;
      double TimeMainDeploy() const;
      double TimeOfFlight() const;
      double DescentRateDrogue() const;
      double DescentRateMain() const;
};
#endif



