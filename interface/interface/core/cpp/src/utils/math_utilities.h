#ifndef _MATH_UTILITIES_H
#define _MATH_UTILITIES_H

#include <cmath>
#include <functional>
#include <iostream>
#include <numeric>
#include <vector>

#include "matrix.h"

class MathUtilities {
  public:
    MathUtilities();
    ~MathUtilities();

    //Interpolation
    static double InterpolateLinear(const std::vector<double>& x_data, const std::vector<double>& y_data, const double& x);    

    //Calculus
    static double Integrate(std::function<double(double)> function, const double& a, const double& b, int steps);
    static std::vector<double> Integrate(const std::vector<double>& x, const std::vector<double>& y);
    static double Derivative(std::function<double(double)> function, const double& x, const double& step);

    //Vector math
    static std::vector<double> MultiplyScalarVector(const double& scalar, const std::vector<double>& vector);
    static std::vector<double> AddScalarToVector(const double& scalar, const std::vector<double>& vector);
    static std::vector<double> AddVectors(const std::vector<double>& vector_1, const std::vector<double>& vector_2);
    static double Average(const std::vector<double>& vector);
    static double Map(const double& x, const double& in_min, const double& in_max, const double& out_min, const double& out_max);
    static std::vector<double> MapVector(const std::vector<double>& x, 
        const double& in_min, const double& in_max, const double& out_min, const double& out_max);

    template <class OLD, class NEW>
    static std::vector<NEW> RecastVector(const std::vector<OLD> vector) {

        std::vector<NEW> result(vector.size());

        for (int i = 0; i != vector.size(); i++) {
            result[i] = static_cast<NEW>(vector[i]);
        }
        return result;
    }    

    //ODE's
    template <class T>
    static std::vector<T> RK45(const std::vector<double>& initial_values,
        std::function<std::vector<double>(T&, const double&, const std::vector<double>&)> ode,
        std::function<bool(const T&)> event,
        const double& x_start, const double& x_end, const double& step) {

        int iterations = (x_end - x_start) / step;

        std::vector<double> k1, k2, k3, k4;
        std::vector<double> y_x_n = initial_values; //solutions to all 1st order ode's - y_n[0] is highest order
        std::vector<double> y_x_np1; //n+1 step of solution
        std::vector<T> results(iterations); //used to store solutions of all ode's at every timestep.
        T result_step;
        T result_unused;

        for (int i = 0; i != iterations; i++) {

            double x_n = x_start + i * step; //current time

            //Solve ode for current timestep
            k1 = MultiplyScalarVector(step, ode(result_step, x_n, y_x_n));
            k2 = MultiplyScalarVector(step, ode(result_unused, x_n + 0.5 * step, AddVectors(y_x_n, MultiplyScalarVector(0.5, k1))));
            k3 = MultiplyScalarVector(step, ode(result_unused, x_n + 0.5 * step, AddVectors(y_x_n, MultiplyScalarVector(0.5, k2))));
            k4 = MultiplyScalarVector(step, ode(result_unused, x_n + step, AddVectors(y_x_n, k3)));
            y_x_np1 = AddVectors(y_x_n, MultiplyScalarVector(1.0 / 6.0, AddVectors(AddVectors(AddVectors(k1, MultiplyScalarVector(2.0, k2)), MultiplyScalarVector(2.0, k3)), k4)));

            results[i] = result_step;

            //if an event is reached, break the integration early
            if (event(result_step) == true) {
                results.resize(1 + i);
                break;
            }

            //Update state for next iteration.
            y_x_n = y_x_np1;
        }

        return results;
    }
};
#endif 