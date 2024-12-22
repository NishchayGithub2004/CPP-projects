#include "polynomial.hpp"

Polynomial Polynomial::integration()
{
    Polynomial result;

    Node* temp = head;

    while (temp != nullptr)
    {
        double newCoefficient = temp->coefficient / (temp->exponent + 1);
        
        double newExponent = temp->exponent + 1;

        result.insertTerm(newCoefficient, newExponent);

        temp = temp->next;
    }

    return result;
}