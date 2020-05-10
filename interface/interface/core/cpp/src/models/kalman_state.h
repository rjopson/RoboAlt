#ifndef _KALMAN_STATE_H
#define _KALMAN_STATE_H

#include <vector>

#include "flight_data.h"
#include "matrix.h"

class KalmanState {
public:
    KalmanState(const std::vector<double>& time, const std::vector<double>& altitude_measured, const std::vector<double>& acceleration_measured);
    ~KalmanState();

    std::vector<double> Altitude() const;
    std::vector<double> Velocity() const;
    std::vector<double> Acceleration() const;    

private:
    void Filter();
    std::vector<double> Step(const double& time, const double& altitude_measured, const double& acceleration_measured,
        const double& time_previous, const std::vector<double>& state_previous,
        Matrix<double>& P_k1_p); //returns filtered altitude/velocity/acceleration for a step

    double sigma_m_; //model
    double sigma_s_; //altitude from ms5607 pressure
    double sigma_a_; //mpu6050
    std::vector<double> time_;
    std::vector<double> altitude_measured_;
    std::vector<double> acceleration_measured_;
    std::vector<double> altitude_;
    std::vector<double> velocity_;
    std::vector<double> acceleration_;
};

#endif

