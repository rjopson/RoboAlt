#include "experimental_data.h"

ExperimentalData::ExperimentalData()
    : FlightData() {

}

ExperimentalData::~ExperimentalData() {

}

void ExperimentalData::SetAltimeterData(const SensorData& data) {
    sensor_data_ = data;
}

SensorData ExperimentalData::AltimeterData() const {
    return sensor_data_;
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
                    sensor_data_.pad_mpu = std::stoi(param[1]);
                }
                else if (param[0] == "H3LIS331DL") {
                    sensor_data_.pad_h3lis = std::stoi(param[1]);
                }
                else if (param[0] == "MS5607_PRESSURE") {
                    sensor_data_.pad_pressure = std::stoi(param[1]);
                }
                else if (param[0] == "MS5607_TEMPERATURE") {
                    sensor_data_.pad_temperature = std::stoi(param[1]);
                }
                else if (param[0] == "VOLTAGE") {
                    sensor_data_.pad_voltage = std::stoi(param[1]);
                }
            }
        }
        else if (command == "*MS5607_CALIBRATION") {
            std::vector<std::string> line_list = Parse::Split(line, ',', false);
            sensor_data_.pad_ms5607_calibration.resize(6);
            int i = 0;
            for (auto it = line_list.begin() + 1; it != line_list.end(); it++) {
                sensor_data_.pad_ms5607_calibration[i] = std::stoi((*it));
                i++;
            }
        }
        else if (command == "*DATA") {
            std::vector<std::string> line_list = Parse::Split(line, ',', false);

            if (line_list[0] != "*DATA") { //make sure it's not the command line

                sensor_data_.time.push_back(std::stoi(line_list[0]));
                sensor_data_.phase.push_back(std::stoi(line_list[1]));
                //sensor_data_.phase_.push_back(std::stoi(line_list[1]));
                sensor_data_.altitude.push_back(std::stoi(line_list[2]));
                sensor_data_.velocity.push_back(std::stoi(line_list[3]));
                sensor_data_.acceleration.push_back(std::stoi(line_list[4]));
                sensor_data_.altitude_baro.push_back(std::stoi(line_list[5]));
                sensor_data_.acceleration_axial.push_back(std::stoi(line_list[6]));
                sensor_data_.pressure.push_back(std::stoi(line_list[7]));
                sensor_data_.temperature.push_back(std::stoi(line_list[8]));
                sensor_data_.accel_low_x.push_back(std::stoi(line_list[9]));
                sensor_data_.accel_low_y.push_back(std::stoi(line_list[10]));
                sensor_data_.accel_low_z.push_back(std::stoi(line_list[11]));
                sensor_data_.rotation_x.push_back(std::stoi(line_list[12]));
                sensor_data_.rotation_y.push_back(std::stoi(line_list[13]));
                sensor_data_.rotation_z.push_back(std::stoi(line_list[14]));
                sensor_data_.accel_high.push_back(std::stoi(line_list[15]));
                sensor_data_.pressure_raw.push_back(std::stoi(line_list[16]));
                sensor_data_.temperature_raw.push_back(std::stoi(line_list[17]));
                sensor_data_.voltage.push_back(std::stoi(line_list[18]));
                sensor_data_.continuity_one.push_back(std::stoi(line_list[19]));
                sensor_data_.continuity_two.push_back(std::stoi(line_list[20]));
                sensor_data_.continuity_three.push_back(std::stoi(line_list[21]));
            }
        }
    }
}

void ExperimentalData::Process(Atmosphere* atmosphere, const double& area_reference, const double& mass_total, const double& mass_propellant, 
    const double& altitude_main) {

    ReducedData data; 
    
    double altitude_baro_pad = atmosphere->Height(PressureFromSensor(sensor_data_.pad_pressure, sensor_data_.pad_temperature));
    
    data.time = MathUtilities::MultiplyScalarVector(0.001, MathUtilities::RecastVector<int,double>(sensor_data_.time));
    
    data.acceleration_x = MathUtilities::MapVector(MathUtilities::RecastVector<int, double>(sensor_data_.accel_low_x),
        -kTwoByteSensorRange, kTwoByteSensorRange - 1, -kAccelerometerLowGRange, kAccelerometerLowGRange);
    
    data.acceleration_y = MathUtilities::MapVector(MathUtilities::RecastVector<int, double>(sensor_data_.accel_low_z),
        -kTwoByteSensorRange, kTwoByteSensorRange - 1, -kAccelerometerLowGRange, kAccelerometerLowGRange);
    
    data.acceleration_z = MathUtilities::MultiplyScalarVector(0.001, MathUtilities::RecastVector<int,double>(sensor_data_.acceleration_axial));
    
    data.rotation_x = MathUtilities::MapVector(MathUtilities::RecastVector<int, double>(sensor_data_.rotation_x),
        -kTwoByteSensorRange, kTwoByteSensorRange - 1, -kRotationRange, kRotationRange);
    
    data.rotation_y = MathUtilities::MapVector(MathUtilities::RecastVector<int, double>(sensor_data_.rotation_y),
        -kTwoByteSensorRange, kTwoByteSensorRange - 1, -kRotationRange, kRotationRange);
    
    data.rotation_z = MathUtilities::MapVector(MathUtilities::RecastVector<int, double>(sensor_data_.rotation_z),
        -kTwoByteSensorRange, kTwoByteSensorRange - 1, -kRotationRange, kRotationRange);
    
    data.pressure = MathUtilities::RecastVector<int, double>(sensor_data_.pressure);
    data.temperature = MathUtilities::MultiplyScalarVector(0.01, MathUtilities::RecastVector<int, double>(sensor_data_.temperature));
    data.alt_voltage = MathUtilities::MultiplyScalarVector(3.3*4.7, MathUtilities::RecastVector<int, double>(sensor_data_.voltage));
    
    data.alt_altitude_baro_msl = AltitudeBarometric(atmosphere, data.pressure);
    data.alt_altitude_baro_agl = MathUtilities::AddScalarToVector(-altitude_baro_pad, data.alt_altitude_baro_msl);
    data.alt_altitude_accelerometer = AltitudeAccelerometer(data.time, data.acceleration_z);
    
    KalmanState kalman_state(data.time, data.alt_altitude_baro_agl, data.acceleration_z);
    data.altitude_agl = kalman_state.Altitude();
    data.altitude_msl = MathUtilities::AddScalarToVector(altitude_baro_pad, data.altitude_agl);
    data.velocity = kalman_state.Velocity();
    data.acceleration = kalman_state.Acceleration();
    
    data.phase = FlightPhase(data.altitude_agl, data.velocity, data.acceleration, altitude_main);
    data.events = Events(data.phase, data.acceleration);
    data.time = MathUtilities::AddScalarToVector(-data.time[data.events[Event::LIFTOFF]], data.time);

    data.dynamic_pressure = DynamicPressure(atmosphere, data.altitude_msl, data.velocity);

    reduced_ = data;
}

std::vector<double> ExperimentalData::DynamicPressure(Atmosphere* atmosphere, const std::vector<double>& altitude_msl, const std::vector<double>& velocity) {

    std::vector<double> result(altitude_msl.size());
    
    for (int i = 0; i != altitude_msl.size(); i++) {
        result[i] = Aerodynamics::DynamicPressure(atmosphere->Density(altitude_msl[i]), velocity[i]);
    }
    return result;
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
    dT = D2 - (static_cast<int64_t>(sensor_data_.pad_ms5607_calibration[4]) << 8);

    //Calculate temperature compensation
    OFF = (static_cast<int64_t>(sensor_data_.pad_ms5607_calibration[1]) << 17) + ((dT * static_cast<int64_t>(sensor_data_.pad_ms5607_calibration[3])) >> 6);
    SENS = (static_cast<int64_t>(sensor_data_.pad_ms5607_calibration[0]) << 16) + ((static_cast<int64_t>(sensor_data_.pad_ms5607_calibration[2]) * dT) >> 7);

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
    dT = D2 - (static_cast<int64_t>(sensor_data_.pad_ms5607_calibration[4]) << 8);
    TEMP = (int64_t)2000 + ((dT * static_cast<int64_t>(sensor_data_.pad_ms5607_calibration[5])) >> 23);
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

std::vector<Phase> ExperimentalData::FlightPhase(const std::vector<double>& altitude, const std::vector<double>& velocity, const std::vector<double>& acceleration, const double& altitude_main) {

    std::vector<Phase> result(altitude.size());
    Phase phase_previous = Phase::DETECT_LAUNCH;

    for (int i = 0; i != altitude.size(); i++) {        
        result[i] = FlightData::UpdatePhase(altitude[i], velocity[i], acceleration[i], altitude_main, phase_previous);
        phase_previous = result[i];
    }
    return result;
}

std::map<Event, int> ExperimentalData::Events(std::vector<Phase> phases, std::vector<double> acceleration) {

    std::map<Event, int> result;
    Phase phase_previous = Phase::DETECT_LAUNCH;

    for (int i = 0; i != phases.size(); i++) {
        if (phases[i] != phase_previous) {
            switch (phases[i]) {
                case Phase::ASCENT_POWERED: {
                    result[Event::LIFTOFF] = i;
                    break;
                }
                case Phase::ASCENT_UNPOWERED_STACKED: {
                    result[Event::BURNOUT] = i;
                    break;
                }
                case Phase::DESCENT_DROGUE: {
                    result[Event::APOGEE] = i;
                    break;
                }
                case Phase::DESCENT_MAIN: {
                    result[Event::ALTITUDE_MAIN] = i;
                    break;
                }
                case Phase::GROUND: {
                    result[Event::GROUND] = i;
                    break;
                }
            }
        }        
        phase_previous = phases[i];
    }
    result[Event::BURNOUT] = std::distance(acceleration.begin(), std::min_element(acceleration.begin(), acceleration.end()));
    result[Event::GROUND] = phases.size() - 1;
    return result;
}


