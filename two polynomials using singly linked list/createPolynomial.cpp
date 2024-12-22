#include "polynomial.hpp"

void Polynomial::createPolynomial()
{
    int degree;
    std::cout << "\nEnter degree of the polynomial : ";
    std::cin >> degree;

    for (int i = degree; i >= 0; i--)
    {
        double coefficient;
        std::cout << "\nEnter coefficient for x^" << i << " : ";
        std::cin >> coefficient;
        insertTerm(coefficient,i);
    }
}