#include "natural_exponent_and_logarithm_and_euler_form.hpp"

Complex Complex::operator~()
{
    double eToTheReal = exp(real);
    return Complex(eToTheReal * cos(imaginary), eToTheReal * sin(imaginary));
}

Complex Complex::operator!()
{
    double r = magnitude();
    double theta = argument();
    return Complex(log(r), theta);
}

Complex Complex::operator^(double x)
{
    return Complex(cos(x), sin(x));
}