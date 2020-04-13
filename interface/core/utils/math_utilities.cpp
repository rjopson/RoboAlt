#include "math_utilities.h"

MathUtilities::MathUtilities() {}

MathUtilities::~MathUtilities() {}

double MathUtilities::InterpolateLinear(const std::vector<double>& x_data, const std::vector<double>& y_data, const double& x) {

    double x0, x1, y0, y1;

    if (x < x_data[0]) { //don't have data to interpolate. Use first y value
        return y_data[0];
    }
    else if (x > x_data.back()) {
        return y_data.back();
    }
    else {
        //we have data to interpolate
        for (int i = 1; i != x_data.size(); i++) {

            int i_prev = i - 1;

            if ((x_data[i_prev] <= x && x_data[i] > x) ||
                (x_data[i_prev] >= x && x_data[i] < x)) { //in between data points now

                x0 = x_data[i_prev];
                x1 = x_data[i];

                y0 = y_data[i_prev];
                y1 = y_data[i];
                return y0 + (x - x0)*((y1 - y0) / (x1 - x0));
            }
        }
    }
}

//https://math.stackexchange.com/questions/721076/help-with-using-the-runge-kutta-4th-order-method-on-a-system-of-2-first-order-od
Matrix<double> MathUtilities::RK45(const std::vector<double>& initial_values,
    std::function<std::vector<double>(const double&, const std::vector<double>&)> ode,
    std::function<bool(const std::vector<double>&)> event,
    const double& x_start, const double& x_end, const double& step) {

    int iterations = (x_end - x_start) / step;

    std::vector<double> k1, k2, k3, k4;
    std::vector<double> y_x_n = initial_values; //solutions to all 1st order ode's - y_n[0] is highest order
    std::vector<double> y_x_np1; //n+1 step of solution
    Matrix<double> Y(iterations, initial_values.size()+2); //used to store solutions of all ode's at every timestep. For example, if initial values were [position, velocity] each Y row is [time, position, velocity, acceleration]
    std::vector<double> step_result(initial_values.size() + 2); //saves x, and all solutions for y_x_np1 step
    int final_iteration;

    for (int i = 0; i != iterations; i++) {

        double x_n = x_start + (double)i*step; //current time

        //Solve ode for current timestep
        k1 = MultiplyScalarVector(step, ode(x_n, y_x_n));
        k2 = MultiplyScalarVector(step, ode(x_n + 0.5*step, AddVectors(y_x_n, MultiplyScalarVector(0.5, k1))));
        k3 = MultiplyScalarVector(step, ode(x_n + 0.5*step, AddVectors(y_x_n, MultiplyScalarVector(0.5, k2))));
        k4 = MultiplyScalarVector(step, ode(x_n + step, AddVectors(y_x_n, k3)));
        y_x_np1 = AddVectors(y_x_n, MultiplyScalarVector(1.0 / 6.0, AddVectors(AddVectors(AddVectors(k1, MultiplyScalarVector(2.0, k2)), MultiplyScalarVector(2.0, k3)), k4)));

        //Save state for y_x_np1 result		
        step_result[0] = x_n + step; //save x_n+1
        for (int i = 0; i != y_x_np1.size(); i++) {
            step_result[i+1] = y_x_np1[i];
        }
        step_result[initial_values.size()+1] = ode(x_n + step, y_x_np1).back(); //saves solution to lowest order ode - if ode's solve, position, velocity, this would be acceleration result
        Y.InsertRow(i, step_result);

        //for (int i = 0; i != step_result.size(); i++) {
        //	std::cout << step_result[i] << ", ";
        //}
        //std::cout << i;
        //std::cout << std::endl;

        //if an event is reached, break the integration early
        if (event(step_result) == true) {
            final_iteration = i;
            break;
        }

        //Update state for next iteration.
        y_x_n = y_x_np1;
    }
    Y.Resize(1+final_iteration, initial_values.size() + 2);
    return Y;
}

//integrate a function between a and b with form y = f(x). Divided into n segments
double MathUtilities::Integrate(std::function<double(double)> function, const double& a, const double& b, int steps) {

    //check if n is even
    if (!(steps % 2 == 0)) {
        steps++; //if not, add one
    }

    double step = (b - a) / ((double)steps);
    double sum = 0.0;

    sum += function(a);
    sum += function(b);

    for (int i = 1; i != steps - 1; i++) {

        double x = a + (double)i*step;

        if (i % 2 == 0) {
            sum += 2.0*function(x);
        }
        else {
            sum += 4.0*function(x);
        }
    }
    return (step / 3.0)*sum;
}

std::vector<double> MathUtilities::Integrate(const std::vector<double>& x, const std::vector<double>& y) {

    double current = 0;
    std::vector<double> result(x.size());
    result[0] = current;

    for (int i = 1; i != x.size(); i++) {

        double step = x[i] - x[i - 1];
        current += step*((y[i] + y[i - 1]) / 2.0);

        result[i] = current;
    }
    return result;
}

//derivative of a function at location x using step h, with form y = f(x)
double MathUtilities::Derivative(std::function<double(double)> function, const double& x, const double& step) {

    double f_x_h = function(x + step);
    double f_x = function(x);

    return (f_x_h - f_x) / step;
} 

std::vector<double> MathUtilities::MultiplyScalarVector(const double& scalar, const std::vector<double>& vector) {

    std::vector<double> result(vector.size());    

    int i = 0;
    for (auto element : vector) {
        result[i] = scalar*element;
        i++;
    }
    return result;
}

std::vector<double> MathUtilities::AddVectors(const std::vector<double>& vector1, const std::vector<double>& vector2) {

    std::vector<double> result(vector1.size());

    int i = 0;
    for (auto elem1 : vector1) {
        result[i] = vector1[i] + vector2[i];
        i++;
    }
    return result;
}

