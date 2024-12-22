#include "four_basic_arithmetic_operations.hpp"

Complex Complex::operator+(Complex& other)
{
    return Complex(real + other.real, imaginary + other.imaginary);
}

Complex Complex::operator-(Complex& other)
{
    return Complex(real - other.real, imaginary - other.imaginary);
}

Complex Complex::operator*(Complex& other)
{
    return Complex(real * other.real - imaginary * other.imaginary, real * other.imaginary + imaginary * other.real);
}

Complex Complex::operator/(Complex& other)
{
    double denominator = (other.real * other.real) + (other.imaginary * other.imaginary);

    if (denominator == 0) throw runtime_error("\nCannot divide by zero");

    return Complex((real * other.real + imaginary * other.imaginary) / denominator, (imaginary * other.real - real * other.imaginary) / denominator);
}