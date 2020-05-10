#include "kalman_state.h"

KalmanState::KalmanState(const std::vector<double>& time, const std::vector<double>& altitude_measured, const std::vector<double>& acceleration_measured)

    : time_(time),
    altitude_measured_(altitude_measured),
    acceleration_measured_(acceleration_measured),
    sigma_m_(0.1),
    sigma_s_(0.5),
    sigma_a_(0.5) {

	altitude_.resize(time_.size());
	velocity_.resize(time_.size());
	acceleration_.resize(time_.size());

	Filter();
}

KalmanState::~KalmanState() {

}

std::vector<double> KalmanState::Altitude() const {
	return altitude_;
}

std::vector<double> KalmanState::Velocity() const {
	return velocity_;
}

std::vector<double> KalmanState::Acceleration() const {
	return acceleration_;
}

void KalmanState::Filter() {

	Phase phase = Phase::DETECT_LAUNCH;

	std::vector<double> step_previous{ 0.0, 0.0, 0.0 };
	double time_previous = time_[0] - (time_[1] - time_[0]);

	//Error covariance
	std::vector<double> P_k_data{ 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, };
	Matrix<double> P_k(3, 3, P_k_data);

	for (int i = 0; i != time_.size(); i++) {

		phase = FlightData::UpdatePhase(step_previous[0], step_previous[1], step_previous[2], 500, phase);

		if (step_previous[1] > 200.0 && phase == Phase::ASCENT_POWERED || phase == Phase::ASCENT_UNPOWERED_STACKED) {
			sigma_s_ = 10.0;
		}
		else if (phase == Phase::DESCENT_DROGUE || phase == Phase::DESCENT_MAIN) {
			sigma_s_ = 0.1;
			sigma_m_ = 10.0;
			sigma_a_ = 100.0;
		}
		else {
			sigma_s_ = 0.5;
		}

		std::vector<double> step = Step(time_[i], altitude_measured_[i], acceleration_measured_[i], time_previous, step_previous, P_k);
		altitude_[i] = step[0];
		velocity_[i] = step[1];
		acceleration_[i] = step[2];
		step_previous = step;
		time_previous = time_[i];

		//std::cout << time_[i] << ", " <<
		//	altitude_[i] << ", " <<
		//	velocity_[i] << ", " <<
		//	acceleration_[i] << std::endl;
	}
}

std::vector<double> KalmanState::Step(const double& time, const double& altitude_measured, const double& acceleration_measured,
    const double& time_previous, const std::vector<double>& state_previous, Matrix<double>& P_k1_p) {

	//Model and measurement covariance (these numbers don't change)
	std::vector<double> Q_k_data{ 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, sigma_m_ }; Matrix<double> Q_k(3, 3, Q_k_data);
	std::vector<double> R_k_data{ sigma_s_, 0, 0, sigma_a_ }; Matrix<double> R_k(2, 2, R_k_data);
	std::vector<double> identity_data{ 1.0, 0, 0, 0, 1.0, 0, 0, 0, 1.0 }; Matrix<double> identity(3, 3, identity_data);
	std::vector<double> H_k_data{ 1.0, 0, 0, 0, 0, 1.0 };
	Matrix<double> H_k(2, 3, H_k_data);
	Matrix<double> H_k_T = H_k.Transpose();

	//Calculate deltaT
	double dt = time - time_previous;

	//Update measurement matrix
	std::vector<double> z_k_data{ altitude_measured, acceleration_measured };
	Matrix<double> z_k(2, 1, z_k_data);

	//Calculate Omega
	std::vector<double> Omega_k_data{ 1.0, dt, dt * dt / 2.0, 0, 1.0, dt, 0, 0, 1.0 };
	Matrix<double> Omega_k(3, 3, Omega_k_data);
	Matrix<double> Omega_k_T = Omega_k.Transpose();

	//Update error covariance and kalman gains
	Matrix<double> P_k_m = Omega_k * P_k1_p * Omega_k_T + Q_k;
	Matrix<double> to_invert(H_k * P_k_m * H_k_T + R_k);
	Matrix<double> K_k = P_k_m * H_k_T * to_invert.Inverse();
	Matrix<double> P_k_p = (identity - K_k * H_k) * P_k_m;

	//Update state vectors
	Matrix<double> x_k1_p(3, 1, state_previous);
	Matrix<double> x_k_m = Omega_k * x_k1_p;
	Matrix<double> x_k_p = x_k_m + K_k * (z_k - H_k * x_k_m);

	//Save error covariance and state vector for k+1 step
	P_k1_p = P_k_p;

	return x_k_p.GetColumn(0);
}


