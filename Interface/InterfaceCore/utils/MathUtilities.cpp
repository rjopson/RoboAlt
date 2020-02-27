
#include "MathUtilities.h"

MathUtilities::MathUtilities() {

}

MathUtilities::~MathUtilities() {

}

double MathUtilities::interpolateLinear(std::vector<double>& in_x_data, std::vector<double>& in_y_data, const double& in_x) {

	double x1, x2, y1, y2;

	for (auto it = in_x_data.begin() + 1; it  != in_x_data.end(); it++) {

		auto it_prev = it-1;

		if (((*it_prev) <= in_x && (*it) > in_x) || ((*it_prev) >= in_x && (*it) < in_x)) {
			x1 = (*it_prev);
			x2 = (*it);

			int i = std::distance(in_x_data.begin(), it);
			y1 = in_y_data[i];
			y2 = in_y_data[i - 1];

			break;
		}
	}
	return y1 + (in_x - x1)*((y2 - y1) / (x2 - x1));
}

//https://math.stackexchange.com/questions/721076/help-with-using-the-runge-kutta-4th-order-method-on-a-system-of-2-first-order-od
Matrix<double> MathUtilities::rk45(const std::vector<double>& initialValues,
	std::function<std::vector<double>(const double&, const std::vector<double>&)> ode,
	std::function<bool(const std::vector<double>&)> event,
	const double& xStart, const double& xEnd, const double& step) {

	int iterations = (xEnd - xStart) / step;

	std::vector<double> k1, k2, k3, k4;
	std::vector<double> Y_x_n = initialValues; //solutions to all 1st order ode's - Y_n[0] is highest order
	std::vector<double> Y_x_np1; //n+1 step of solution
	Matrix<double> Y(iterations,initialValues.size()+2); //used to store solutions of all ode's at every timestep. For example, if initial values were [position, velocity] each Y row is [time, position, velocity, acceleration]
	int finalIteration;

	for (int i = 0; i != iterations; i++) {

		double x_n = xStart + (double)i*step; //current time

		//Solve ode for current timestep
		k1 = multiplyScalarVector(step, ode(x_n, Y_x_n));
		k2 = multiplyScalarVector(step, ode(x_n + 0.5*step, addVectors(Y_x_n, multiplyScalarVector(0.5, k1))));
		k3 = multiplyScalarVector(step, ode(x_n + 0.5*step, addVectors(Y_x_n, multiplyScalarVector(0.5, k2))));
		k4 = multiplyScalarVector(step, ode(x_n + step, addVectors(Y_x_n, k3)));
		Y_x_np1 = addVectors(Y_x_n, multiplyScalarVector(1.0 / 6.0, addVectors(addVectors(addVectors(k1, multiplyScalarVector(2.0, k2)), multiplyScalarVector(2.0, k3)), k4)));

		//Save state for Y_x_np1 result
		std::vector<double> stepResult; //saves x, and all solutions for Y_x_np1 step
		stepResult.push_back(x_n + step); //save x_n+1
		for (int i = 0; i != Y_x_np1.size(); i++) {
			stepResult.push_back(Y_x_np1[i]);
		}
		stepResult.push_back(ode(x_n + step, Y_x_np1).back()); //saves solution to lowest order ode - if ode's solve, position, velocity, this would be acceleration result
		Y.insertRow(i, stepResult);

		//if an event is reached, break the integration early
		if (event(stepResult) == true) {
			finalIteration = i;
			break;
		}

		//Update state for next iteration.
		Y_x_n = Y_x_np1;
	}
	Y.resize(finalIteration, initialValues.size() + 2);
	return Y;
}

//integrate a function between a and b with form y = f(x). Divided into n segments
double MathUtilities::integrate(std::function<double(double)> f, const double& a, const double& b, int n) {

	//check if n is even
	if (!(n % 2 == 0)) {
		n++; //if not, add one
	}

	double step = (b - a) / ((double)n);
	double sum = 0.0;

	sum += f(a);
	sum += f(b);

	for (int i = 1; i != n - 1; i++) {

		double x = a + (double)i*step;

		if (i % 2 == 0) {
			sum += 2.0*f(x);
		}
		else {
			sum += 4.0*f(x);
		}
	}
	return (step / 3.0)*sum;
}

std::vector<double> MathUtilities::integrate(std::vector<double>& x, std::vector<double>& y) {

	double current = 0;
	std::vector<double> result;
	result.push_back(current);

	for (int i = 1; i != x.size(); i++) {

		double step = x[i] - x[i - 1];
		current += step*((y[i] + y[i - 1]) / 2.0);

		result.push_back(current);
	}
	return result;
}

//derivative of a function at location x using step h, with form y = f(x)
double MathUtilities::derivative(std::function<double(double)> f, const double& x, const double& h) {

	double f_x_h = f(x + h);
	double f_x = f(x);

	return (f_x_h - f_x) / h;
} 

std::vector<double> MathUtilities::multiplyScalarVector(const double& scalar, const std::vector<double>& vector) {

	std::vector<double> result;

	for (auto element : vector) {
		result.push_back(scalar*element);
	}
	return result;
}

std::vector<double> MathUtilities::addVectors(const std::vector<double>& vector1, const std::vector<double>& vector2) {

	std::vector<double> result;

	for (auto it = vector1.begin(); it != vector1.end(); it++) {

		int index = std::distance(vector1.begin(), it);
		result.push_back((*it) + vector2[index]);
	}
	return result;
}

