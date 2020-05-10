#include "math_utilities.h"

MathUtilities::MathUtilities() {}

MathUtilities::~MathUtilities() {}

double MathUtilities::InterpolateLinear(const std::vector<double>& x_data, const std::vector<double>& y_data, const double& x) {

    //we have data to interpolate
    double x0, x1, y0, y1;
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

    if (x <= x_data.front() && x <= x_data.back()) { //don't have data to interpolate. Use first y value        
        return y_data.front();
    }
    else if (x >= x_data.back() && x >= x_data.front()) {
        return y_data.back();
    }
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

std::vector<double> MathUtilities::AddScalarToVector(const double& scalar, const std::vector<double>& vector) {

    std::vector<double> result(vector.size());

    int i = 0;
    for (auto element : vector) {
        result[i] = scalar + element;
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

double MathUtilities::Average(const std::vector<double>& vector) {
    return std::accumulate(vector.begin(), vector.end(), 0.0) / vector.size();
}

double MathUtilities::Map(const double& x, const double& in_min, const double& in_max, const double& out_min, const double& out_max) {
    return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}

std::vector<double> MathUtilities::MapVector(const std::vector<double>& x,
    const double& in_min, const double& in_max, const double& out_min, const double& out_max) {

    std::vector<double> result(x.size());

    for (int i = 0; i != x.size(); i++) {
        result[i] = Map(x[i], in_min, in_max, out_min, out_max);
    }
    return result;
}

