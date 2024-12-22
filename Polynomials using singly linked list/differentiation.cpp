#include "polynomial.hpp"

Polynomial Polynomial::differentiation()
{
    Polynomial result;
    
    Node* temp = head;

    while (temp != nullptr)
    {
        if (temp->exponent != 0)
        {
            double newCoefficient = temp->coefficient * temp->exponent;
            
            double newExponent = temp->exponent - 1;

            result.insertTerm(newCoefficient, newExponent);
        }

        temp = temp->next;
    }

    return result;
}