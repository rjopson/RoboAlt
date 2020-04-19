#ifndef _FLIGHT_DATA_H
#define _FLIGHT_DATA_H

#include <iostream>
#include <vector>

#include "atmosphere.h"
#include "matrix.h"

class FlightData {
  public:
    FlightData(Atmosphere* atmosphere, const double& altitude_pad);
    virtual ~FlightData() = 0;	

    virtual std::vector<double> Time() const;
    virtual std::vector<double> AltitudeMsl() const;
    virtual std::vector<double> AltitudeAgl() const;
    virtual std::vector<double> Velocity() const;
    virtual std::vector<double> Acceleration() const;
    virtual std::vector<double> RotationX() const;
    virtual std::vector<double> RotationY() const;
    virtual std::vector<double> RotationZ() const;
    virtual std::vector<double> MachNumber() const;
    virtual std::vector<double> ReynoldsNumber() const;
    virtual std::vector<double> DynamicPressure() const;
    virtual std::vector<double> Drag() const;
    virtual std::vector<double> DragCoefficient() const;
    virtual std::vector<double> Mass() const;
    virtual std::vector<double> Pressure() const;
    virtual std::vector<double> Temperature() const;
    virtual std::vector<double> Thrust() const;
    
    virtual double AltitudeMaxMsl() const;
    virtual double AltitudeMaxAgl() const;
    virtual double VelocityMax() const;
    virtual double VelocityOffRail() const;
    virtual double AccelerationMax() const;
    virtual double DynamicPressureMax() const;
    virtual double TimeBurnout() const;
    virtual double TimeApogee() const;
    virtual double TimeMainDeploy() const;
    virtual double TimeOfFlight() const;

    //SimulationData
    //populated with output time/position/velocity/acceleration data - calculations of everything else

    //ExperimentalData
    //populated with raw sensor data. 
    //Class does conversion to engineering data, calculations using data from design entities (masses, reference area etc.)

    void Print(); //debug

    //int length_vector_;

  private:
    Atmosphere* atmosphere_;
    double altitude_pad;

    std::vector<double> time_;
    std::vector<double> altitude_msl_, altitude_agl_;
    std::vector<double> velocity_;
    std::vector<double> acceleration_;
    std::vector<double> mach_number_, reynolds_number_, dynamic_pressure_;
    std::vector<double> rotation_x_, rotation_y_, rotation_z_;
    std::vector<double> drag_, drag_coefficient_;
    std::vector<double> mass_;
    std::vector<double> pressure_, temperature_;
    double altitude_msl_max_, altitude_agl_max_, velocity_max_, acceleration_max_;
    double time_liftoff_, time_burnout_, time_apogee_, time_main_deploy_, time_landing_;
    double time_of_flight_, time_to_apogee_;
    
    //double velocity_off_rail_;

    //std::vector<double> altitude_baro_, altitude_accerlerometer_;
    //std::vector<double> acceleration_x_, acceleration_y_, acceleration_z_, acceleration_axial_, acceleration_z_high_g;    
    //std::vector<double> voltage_;    
};
#endif



