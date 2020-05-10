#ifndef _EXPERIMENTAL_DATA_H
#define _EXPERIMENTAL_DATA_H

#include <inttypes.h>
#include <vector>

#include "atmosphere.h"
#include "flight_data.h"
#include "kalman_state.h"
#include "math_utilities.h"
#include "parse.h"

struct SensorData {
    
    //raw pad sensor readings and calibration from altimeter
    int pad_mpu;
    int pad_h3lis;
    int pad_pressure;
    int pad_temperature;
    int pad_voltage;
    std::vector<int> pad_ms5607_calibration;

    //raw flight data from alitmeter
    std::vector<int> time; //ms 
    std::vector<int> phase; //see enum definition
    std::vector<int> altitude; //mm    
    std::vector<int> velocity; //mm/s
    std::vector<int> acceleration; //mm/s2
    std::vector<int> altitude_baro; //mm
    std::vector<int> acceleration_axial; //mm/s2
    std::vector<int> pressure; //Pa    
    std::vector<int> temperature; //degC * 100
    std::vector<int> accel_low_x;  //2 byte +/- 16g
    std::vector<int> accel_low_y;  //2 byte +/- 16g
    std::vector<int> accel_low_z;  //2 byte +/- 16g
    std::vector<int> rotation_x; //2 byte +/- 2000deg/s
    std::vector<int> rotation_y; //2 byte +/- 2000deg/s
    std::vector<int> rotation_z; //2 byte +/- 2000deg/s
    std::vector<int> accel_high; //2 byte +/- 200g
    std::vector<int> pressure_raw;
    std::vector<int> temperature_raw;
    std::vector<int> voltage; //10 bit
    std::vector<int> continuity_one; //10bit
    std::vector<int> continuity_two; //10bit
    std::vector<int> continuity_three; //10bit    
};

class ExperimentalData : public FlightData {

  public:
    static constexpr int kTwoByteSensorRange = 32768;
    static constexpr int kAccelerometerLowGRange = 16; //g's
    static constexpr int kRotationRange = 2000; //deg/s
    static constexpr int kAccelerometerHighGRange = 200; //g's
    //ExperimentalData(); how to pass from hdf5?
    ExperimentalData();
    ~ExperimentalData();

    void SetAltimeterData(const SensorData& data);
    SensorData AltimeterData() const;

    void Parse(const std::string& data_string);
    void Process(Atmosphere* atmosphere, const double& area_reference, const double& mass_total, const double& mass_propellant, 
        const double& altitude_main);

  private:         
    std::vector<Phase> FlightPhase(const std::vector<double>& altitude, const std::vector<double>& velocity, const std::vector<double>& acceleration, const double& altitude_main);
    std::map<Event, int> Events(std::vector<Phase> phases, std::vector<double> acceleration);
    std::vector<double> AltitudeBarometric(const Atmosphere* atmosphere, const std::vector<double>& pressure);
    double PressureFromSensor(const unsigned long& pressure, const unsigned long& temperature);
    double TemperatureFromSensor(const unsigned long& temperature);
    std::vector<double> AltitudeAccelerometer(const std::vector<double>& time, const std::vector<double>& acceleration);
    std::vector<double> DynamicPressure(Atmosphere* atmosphere, const std::vector<double>& altitude_msl, const std::vector<double>& velocity);

    SensorData sensor_data_;
};
#endif 
