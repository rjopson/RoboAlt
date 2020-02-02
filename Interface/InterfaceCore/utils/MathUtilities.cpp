
#include "MathUtilities.h"

MathUtilities::MathUtilities() {

}

MathUtilities::~MathUtilities() {

}

double MathUtilities::interpolateLinear(std::vector<double> in_x_data, std::vector<double> in_y_data, double in_x) {

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

//integrate a function between a and b with form y = f(x). Divided into n segments
double MathUtilities::integrate_trapz(double a, double b, int n, double(*func)(double)) {

	//grid spacing
	double h = (b - a) / ((double)n);

	//first and last terms
	double s = func(a) + func(b);

	//middle terms
	for (int i = 1; i < n; i++) {
		s += 2.0 * func(a + ((double)i) * h);
	}
	return (h / 2.0)*s;
}

//derivative of a function at location x using step h, with form y = f(x)
double MathUtilities::derivative(double x, double h, std::function<double(double)> func) {

	double f_x_h = func(x + h);
	double f_x = func(x);

	return (f_x_h - f_x) / h;
}