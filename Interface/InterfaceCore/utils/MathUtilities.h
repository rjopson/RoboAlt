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
	static double interpolateLinear(std::vector<double>& in_x_data, std::vector<double>& in_y_data, const double& in_x);

	//ODE's
	static std::vector<std::vector<double>> rk45(const std::vector<double>& initialValues, 
		std::vector<double> (*ode)(const double&, const std::vector<double>&), bool (*event)(const std::vector<double>&),
		const double& xStart, const double& xEnd, const double& step);

	//Calculus
	static double integrate(double (*f)(double), const double& a, const double& b, int n);
	static std::vector<double> integrate(std::vector<double>& x, std::vector<double>& y);
	static double derivative(double(*f)(double), const double& x, const double& h);

	//Vector math
	static std::vector<double> multiplyScalarVector(const double& scalar, const std::vector<double>& vector);
	static std::vector<double> addVectors(const std::vector<double>& vector1, const std::vector<double>& vector2);

private:
};
#endif // !_MATH_UTILITIES_h