#ifndef _MATH_UTILITIES_H
#define _MATH_UTILITIES_H

#include <cmath>
#include <functional>
#include <iostream>
#include <vector>

#include "matrix.h"

class MathUtilities {
  public:
    MathUtilities();
    ~MathUtilities();

    //Interpolation
    static double InterpolateLinear(std::vector<double>& x_data, std::vector<double>& y_data, const double& x);

    //ODE's
    static Matrix<double> RK45(const std::vector<double>& initial_values, 
        std::function<std::vector<double>(const double&, const std::vector<double>&)> ode, 
        std::function<bool(const std::vector<double>&)> event,
        const double& x_start, const double& x_end, const double& step);

    //Calculus
    static double Integrate(std::function<double(double)> function, const double& a, const double& b, int steps);
    static std::vector<double> Integrate(const std::vector<double>& x, const std::vector<double>& y);
    static double Derivative(std::function<double(double)> function, const double& x, const double& step);

    //Vector math
    static std::vector<double> MultiplyScalarVector(const double& scalar, const std::vector<double>& vector);
    static std::vector<double> AddVectors(const std::vector<double>& vector_1, const std::vector<double>& vector_2);
};
#endif 