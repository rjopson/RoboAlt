#ifndef _MATH_UTILITIES_H
#define _MATH_UTILITIES_H

#include <functional>
#include <cmath>
#include <vector>

class MathUtilities
{
public:
	MathUtilities();
	~MathUtilities();

	//Interpolation
	static double interpolateLinear(std::vector<double> in_x_data, std::vector<double> in_y_data, double in_x);

	//Calculus
	double integrate_trapz(double a, double b, int n, double(*func)(double));
	double derivative(double x, double h, std::function<double(double)> func);

private:
};
#endif // !_MATH_UTILITIES_h