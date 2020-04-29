#ifndef _EXPERIMENTAL_DATA_H
#define _EXPERIMENTAL_DATA_H

#include <inttypes.h>
#include <vector>

#include "atmosphere.h"
#include "flight_data.h"
#include "kalman_state.h"
#include "math_utilities.h"
#include "parse.h"

class ExperimentalData : public FlightData {

  public:
    static constexpr int kTwoByteSensorRange = 32768;
    static constexpr int kAccelerometerLowGRange = 16; //g's
    static constexpr int kRotationRange = 2000; //deg/s
    static constexpr int kAccelerometerHighGRange = 200; //g's
    //ExperimentalData(); how to pass from hdf5?
    ExperimentalData();
    ~ExperimentalData();

    void Parse(const std::string& data_string);
    void Process(Atmosphere* atmosphere, const double& area_reference, const double& mass_total, const double& mass_propellant);

  private:         
    std::vector<double> AltitudeBarometric(const Atmosphere* atmosphere, const std::vector<double>& pressure);
    double PressureFromSensor(const unsigned long& pressure, const unsigned long& temperature);
    double TemperatureFromSensor(const unsigned long& temperature);
    std::vector<double> AltitudeAccelerometer(const std::vector<double>& time, const std::vector<double>& acceleration);
   
    //Additions to base class flight_data which are specific to flights
    double altitude_baro_pad_;
    std::vector<double> altitude_baro_msl_, altitude_baro_agl_;
    std::vector<double> altitude_accelerometer_;
    std::vector<double> voltage_;    

    //raw pad sensor readings and calibration from altimeter
    int alt_pad_mpu_;
    int alt_pad_h3lis_;
    int alt_pad_pressure_;
    int alt_pad_temperature_;
    int alt_pad_voltage_;
    std::vector<int> alt_pad_ms5607_calibration_;

    //raw flight data from alitmeter
    std::vector<int> alt_time_; //ms 
    std::vector<Phase> alt_phase_; //see enum definition
    std::vector<int> alt_altitude_; //mm    
    std::vector<int> alt_velocity_; //mm/s
    std::vector<int> alt_acceleration_; //mm/s2
    std::vector<int> alt_altitude_baro_; //mm
    std::vector<int> alt_acceleration_axial_; //mm/s2
    std::vector<int> alt_pressure_; //Pa    
    std::vector<int> alt_temperature_; //degC * 100
    std::vector<int> alt_accel_low_x_;  //2 byte +/- 16g
    std::vector<int> alt_accel_low_y_;  //2 byte +/- 16g
    std::vector<int> alt_accel_low_z_;  //2 byte +/- 16g
    std::vector<int> alt_rotation_x_; //2 byte +/- 2000deg/s
    std::vector<int> alt_rotation_y_; //2 byte +/- 2000deg/s
    std::vector<int> alt_rotation_z_; //2 byte +/- 2000deg/s
    std::vector<int> alt_accel_high_; //2 byte +/- 200g
    std::vector<int> alt_pressure_raw_;
    std::vector<int> alt_temperature_raw_;
    std::vector<int> alt_voltage_; //10 bit
    std::vector<int> alt_continuity_one_; //10bit
    std::vector<int> alt_continuity_two_; //10bit
    std::vector<int> alt_continuity_three_; //10bit    
};
#endif 
