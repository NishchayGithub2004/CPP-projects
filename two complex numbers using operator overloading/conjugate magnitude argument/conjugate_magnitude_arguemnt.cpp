#include "conjugate_magnitude_argument.hpp"

Complex Complex::operator~()
{
    return Complex(real, -imaginary);
}

double Complex::magnitude()
{
    return sqrt(real * real + imaginary * imaginary);
}

double Complex::argument()
{
    return atan2(imaginary, real);
}