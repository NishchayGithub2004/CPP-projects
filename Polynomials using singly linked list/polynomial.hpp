#ifndef POLYNOMIAL_HPP
#define POLYNOMIAL_HPP

#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    
    double coefficient;
    double exponent;
    Node* next;

    Node(double c, double e) : coefficient(c), exponent(e), next(nullptr) {}
};

class Polynomial
{
    private: Node* head;

    void insertTerm(double c, double e);

    public: Polynomial() : head(nullptr) {}

    void createPolynomial();

    Polynomial operator+(const Polynomial& other);

    Polynomial operator-(const Polynomial& other);

    Polynomial operator*(const Polynomial& other);

    void display();

    Polynomial differentiation();

    Polynomial integration();

    double evaluatePolynomial(double x);
};

#endif