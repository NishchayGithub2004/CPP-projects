#ifndef CN4_HPP
#define CN4_HPP

#include<iostream>
#include<cmath>
using namespace std;

class Complex
{
    private: double real, imaginary;

    double magnitude()
    {
        return sqrt(real * real + imaginary * imaginary);
    }

    double argument()
    {
        return atan2(imaginary, real);
    }

    public: Complex(double r = 0, double i = 0) : real(r), imaginary(i) {}

    void display()
    {
        if (imaginary >= 0) cout << real << " + " << imaginary << "i";
        
        else cout << real << " - " << -imaginary << "i";
    }

    Complex operator/(double scalar);

    Complex operator*(double angle);

    Complex operator^(int n);
};

#endif