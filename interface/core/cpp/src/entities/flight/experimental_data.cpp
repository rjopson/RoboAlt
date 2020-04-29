#include "experimental_data.h"

ExperimentalData::ExperimentalData()
    : FlightData() {

}

ExperimentalData::~ExperimentalData() {

}

void ExperimentalData::Parse(const std::string& data_string) {

    std::istringstream iss(data_string);
    std::string line;
    std::string command;

    double version = 0.0;

    while (std::getline(iss, line)) {

        //command
        if (line.at(0) == '*') {
            command = Parse::Split(line, ',', false)[0];
        }

        if (command == "*VERSION") {
            std::vector<std::string> line_list = Parse::Split(line, ',', false);
            version = std::stod(line_list[1]);
        }
        else if (command == "*PAD") {
            std::vector<std::string> line_list = Parse::Split(line, ',', false);

            for (auto input : line_list) {
                std::vector<std::string> param = Parse::Split(input, '=', false);

                if (param[0] == "MPU6050") {
                    alt_pad_mpu_ = std::stoi(param[1]);
                }
                else if (param[0] == "H3LIS331DL") {
                    alt_pad_h3lis_ = std::stoi(param[1]);
                }
                else if (param[0] == "MS5607_PRESSURE") {
                    alt_pad_pressure_ = std::stoi(param[1]);
                }
                else if (param[0] == "MS5607_TEMPERATURE") {
                    alt_pad_temperature_ = std::stoi(param[1]);
                }
                else if (param[0] == "VOLTAGE") {
                    alt_pad_voltage_ = std::stoi(param[1]);
                }
            }
        }
        else if (command == "*MS5607_CALIBRATION") {
            std::vector<std::string> line_list = Parse::Split(line, ',', false);
            alt_pad_ms5607_calibration_.resize(6);
            int i = 0;
            for (auto it = line_list.begin() + 1; it != line_list.end(); it++) {
                alt_pad_ms5607_calibration_[i] = std::stoi((*it));
                i++;
            }
        }
        else if (command == "*DATA") {
            std::vector<std::string> line_list = Parse::Split(line, ',', false);

            if (line_list[0] != "*DATA") { //make sure it's not the command line

                alt_time_.push_back(std::stoi(line_list[0]));
                //alt_phase_.push_back(std::stoi(line_list[1]));
                alt_altitude_.push_back(std::stoi(line_list[2]));
                alt_velocity_.push_back(std::stoi(line_list[3]));
                alt_acceleration_.push_back(std::stoi(line_list[4]));
                altitude_baro_agl_.push_back(std::stoi(line_list[5]));
                alt_acceleration_axial_.push_back(std::stoi(line_list[6]));
                alt_pressure_.push_back(std::stoi(line_list[7]));
                alt_temperature_.push_back(std::stoi(line_list[8]));
                alt_accel_low_x_.push_back(std::stoi(line_list[9]));
                alt_accel_low_y_.push_back(std::stoi(line_list[10]));
                alt_accel_low_z_.push_back(std::stoi(line_list[11]));
                alt_rotation_x_.push_back(std::stoi(line_list[12]));
                alt_rotation_y_.push_back(std::stoi(line_list[13]));
                alt_rotation_z_.push_back(std::stoi(line_list[14]));
                alt_accel_high_.push_back(std::stoi(line_list[15]));
                alt_pressure_raw_.push_back(std::stoi(line_list[16]));
                alt_temperature_raw_.push_back(std::stoi(line_list[17]));
                alt_voltage_.push_back(std::stoi(line_list[18]));
                alt_continuity_one_.push_back(std::stoi(line_list[19]));
                alt_continuity_two_.push_back(std::stoi(line_list[20]));
                alt_continuity_three_.push_back(std::stoi(line_list[21]));
            }
        }
    }
}

void ExperimentalData::Process(Atmosphere* atmosphere, const double& area_reference, const double& mass_total, const double& mass_propellant) {

    altitude_baro_pad_ = atmosphere->Height(PressureFromSensor(alt_pad_pressure_, alt_pad_temperature_));
    
    time_ = MathUtilities::MultiplyScalarVector(0.001, MathUtilities::RecastVector<int,double>(alt_time_));

    acceleration_x_ = MathUtilities::MapVector(MathUtilities::RecastVector<int, double>(alt_accel_low_x_), 
        -kTwoByteSensorRange, kTwoByteSensorRange - 1, -kAccelerometerLowGRange, kAccelerometerLowGRange);
    
    acceleration_y_ = MathUtilities::MapVector(MathUtilities::RecastVector<int, double>(alt_accel_low_z_),
        -kTwoByteSensorRange, kTwoByteSensorRange - 1, -kAccelerometerLowGRange, kAccelerometerLowGRange);

    acceleration_z_ = MathUtilities::MultiplyScalarVector(0.001, MathUtilities::RecastVector<int,double>(alt_acceleration_axial_));

    rotation_x_ = MathUtilities::MapVector(MathUtilities::RecastVector<int, double>(alt_rotation_x_),
        -kTwoByteSensorRange, kTwoByteSensorRange - 1, -kRotationRange, kRotationRange);

    rotation_y_ = MathUtilities::MapVector(MathUtilities::RecastVector<int, double>(alt_rotation_y_),
        -kTwoByteSensorRange, kTwoByteSensorRange - 1, -kRotationRange, kRotationRange);

    rotation_z_ = MathUtilities::MapVector(MathUtilities::RecastVector<int, double>(alt_rotation_z_),
        -kTwoByteSensorRange, kTwoByteSensorRange - 1, -kRotationRange, kRotationRange);

    pressure_ = MathUtilities::RecastVector<int, double>(alt_pressure_);    
    temperature_ = MathUtilities::MultiplyScalarVector(0.01, MathUtilities::RecastVector<int, double>(alt_temperature_));
    voltage_ = MathUtilities::MultiplyScalarVector(3.3*4.7, MathUtilities::RecastVector<int, double>(alt_voltage_));

    altitude_baro_msl_ = AltitudeBarometric(atmosphere, pressure_);
    altitude_baro_agl_ = MathUtilities::AddScalarToVector(-altitude_baro_pad_, altitude_baro_msl_);
    altitude_accelerometer_ = AltitudeAccelerometer(time_, acceleration_z_);

    KalmanState kalman_state(time_, altitude_baro_agl_, acceleration_z_);
    altitude_agl_ = kalman_state.Altitude();
    altitude_msl_ = MathUtilities::AddScalarToVector(altitude_baro_pad_, altitude_agl_);
    velocity_ = kalman_state.Velocity();
    acceleration_ = kalman_state.Acceleration();
}

double ExperimentalData::PressureFromSensor(const unsigned long& pressure, const unsigned long& temperature) {

    //Define variables necessary for calculations
    int64_t D1 = static_cast<int64_t>(pressure); //raw pressure value
    int64_t D2 = static_cast<int64_t>(temperature); //raw temperature value
    int64_t dT; //difference between actual temperature and reference temperature
    int64_t OFF; //offset at actual temperature
    int64_t SENS; //sensitivity at actual temperature
    int64_t P; //pressure (temperature compensated), 64 bit number used for calculation

    //Calculate temperature difference
    dT = D2 - (static_cast<int64_t>(alt_pad_ms5607_calibration_[4]) << 8);

    //Calculate temperature compensation
    OFF = (static_cast<int64_t>(alt_pad_ms5607_calibration_[1]) << 17) + ((dT * static_cast<int64_t>(alt_pad_ms5607_calibration_[3])) >> 6);
    SENS = (static_cast<int64_t>(alt_pad_ms5607_calibration_[0]) << 16) + ((static_cast<int64_t>(alt_pad_ms5607_calibration_[2]) * dT) >> 7);

    //Calculate pressure
    P = (((D1 * SENS) >> 21) - OFF) >> 15;

    return static_cast<double>(P);
}

double ExperimentalData::TemperatureFromSensor(const unsigned long& temperature) {

    //Define variables necessary for calculations
    int64_t D2 = static_cast<int64_t>(temperature); //raw temperature value
    int64_t TEMP; //actual temperature, 64 bit number used for calculation
    int64_t dT; //difference between actual temperature and reference temperature

    //Calculate temperature
    dT = D2 - (static_cast<int64_t>(alt_pad_ms5607_calibration_[4]) << 8);
    TEMP = (int64_t)2000 + ((dT * static_cast<int64_t>(alt_pad_ms5607_calibration_[5])) >> 23);
    return static_cast<double>(TEMP);
}

std::vector<double> ExperimentalData::AltitudeBarometric(const Atmosphere* atmosphere, const std::vector<double>& pressure) {

    std::vector<double> result(pressure.size());

    for (int i = 0; i != pressure.size(); i++) {
        result[i] = atmosphere->Height(pressure[i]);
    }
    return result;
}

std::vector<double> ExperimentalData::AltitudeAccelerometer(const std::vector<double>& time, const std::vector<double>& acceleration) {

    return MathUtilities::Integrate(time, acceleration);
}


