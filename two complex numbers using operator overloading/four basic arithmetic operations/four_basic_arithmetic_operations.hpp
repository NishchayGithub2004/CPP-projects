#ifndef CN1_HPP
#define CN1_HPP

#include<iostream>
#include<exception>
using namespace std;

class Complex
{
    private: double real, imaginary;

    public: Complex(double r = 0, double i = 0) : real(r), imaginary(i) {}

    void display()
    {
        if (imaginary >= 0) cout << real << " + " << imaginary << "i";
        
        else cout << real << " - " << -imaginary << "i";
    }

    Complex operator+(Complex& other);

    Complex operator-(Complex& other);

    Complex operator*(Complex& other);

    Complex operator/(Complex& other);
};

#endif