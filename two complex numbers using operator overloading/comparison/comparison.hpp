#ifndef CN3_HPP
#define CN3_HPP

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

    public: Complex(double r = 0, double i = 0) : real(r), imaginary(i) {}

    void display()
    {
        if (imaginary >= 0) cout << real << " + " << imaginary << "i";
        
        else cout << real << " - " << -imaginary << "i";
    }

    bool operator==(Complex& other);

    bool operator!=(Complex& other);
    
    bool operator<(Complex& other);

    bool operator>(Complex& other);

    bool operator<=(Complex& other);

    bool operator>=(Complex& other);
};

#endif