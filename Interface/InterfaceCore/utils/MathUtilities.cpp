
#include "MathUtilities.h"

MathUtilities::MathUtilities() {

}

MathUtilities::~MathUtilities() {

}

double MathUtilities::interpolateLinear(std::vector<double>& in_x_data, std::vector<double>& in_y_data, const double& in_x) {

	double x0, x1, y0, y1;

	if (in_x < in_x_data[0]) { //don't have data to interpolate. Use first y value
		return in_y_data[0];
	}
	else if (in_x > in_x_data.back()) {
		return in_y_data.back();
	}
	else {
		//we have data to interpolate
		for (int i = 1; i != in_x_data.size(); i++) {

			int i_prev = i - 1;

			if ((in_x_data[i_prev] <= in_x && in_x_data[i] > in_x) ||
				(in_x_data[i_prev] >= in_x && in_x_data[i] < in_x)) { //in between data points now

				x0 = in_x_data[i_prev];
				x1 = in_x_data[i];

				y0 = in_y_data[i_prev];
				y1 = in_y_data[i];
				return y0 + (in_x - x0)*((y1 - y0) / (x1 - x0));
			}
		}
	}
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
	std::vector<double> stepResult(initialValues.size() + 2); //saves x, and all solutions for Y_x_np1 step
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
		stepResult[0] = x_n + step; //save x_n+1
		for (int i = 0; i != Y_x_np1.size(); i++) {
			stepResult[i+1] = Y_x_np1[i];
		}
		stepResult[initialValues.size()+1] = ode(x_n + step, Y_x_np1).back(); //saves solution to lowest order ode - if ode's solve, position, velocity, this would be acceleration result
		Y.insertRow(i, stepResult);

		//for (int i = 0; i != stepResult.size(); i++) {
		//	std::cout << stepResult[i] << ", ";
		//}
		//std::cout << i;
		//std::cout << std::endl;

		//if an event is reached, break the integration early
		if (event(stepResult) == true) {
			finalIteration = i;
			break;
		}

		//Update state for next iteration.
		Y_x_n = Y_x_np1;
	}
	Y.resize(1+finalIteration, initialValues.size() + 2);
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

