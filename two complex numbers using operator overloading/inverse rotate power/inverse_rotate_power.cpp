#include "inverse_rotate_power.hpp"

Complex Complex::operator/(double scalar)
{
    double denominator = real * real + imaginary * imaginary;
    
    if (denominator == 0) throw runtime_error("\nDivision by zero is undefined");
    
    return Complex(real / denominator, -imaginary / denominator);
}

Complex Complex::operator*(double angle)
{
    double newReal = real * cos(angle) - imaginary * sin(angle);
    
    double newImag = real * sin(angle) + imaginary * cos(angle);
    
    return Complex(newReal, newImag);
}

Complex Complex::operator^(int n)
{
    double r = magnitude();
    double theta = argument();

    double newMagnitude = pow(r, n);
    double newTheta = n * theta;

    return Complex(newMagnitude * cos(newTheta), newMagnitude * sin(newTheta));
}