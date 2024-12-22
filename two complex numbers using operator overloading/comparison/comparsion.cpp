#include "comparison.hpp"

bool Complex::operator==(Complex& other)
{
    return (real == other.real) && (imaginary == other.imaginary);
}

bool Complex::operator!=(Complex& other)
{
    return (real != other.real) || (imaginary != other.imaginary);
}

bool Complex::operator<(Complex& other)
{
    return magnitude() < other.magnitude();
}

bool Complex::operator>(Complex& other)
{
    return magnitude() > other.magnitude();
}

bool Complex::operator<=(Complex& other)
{
    return magnitude() <= other.magnitude();
}

bool Complex::operator>=(Complex& other)
{
    return magnitude() >= other.magnitude();
}