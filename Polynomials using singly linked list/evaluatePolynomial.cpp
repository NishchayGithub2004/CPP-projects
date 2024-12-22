#include "polynomial.hpp"

double Polynomial::evaluatePolynomial(double x)
{
    double result = 0.0;

    Node* temp = head;

    while (temp != nullptr)
    {
        result += temp->coefficient * std::pow(x, temp->exponent);

        temp = temp->next;
    }

    return result;
}