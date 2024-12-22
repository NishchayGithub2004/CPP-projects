#include "polynomial.hpp"

Polynomial Polynomial::operator*(const Polynomial& other)
{
    Polynomial result;

    Node* p1 = this->head;
    
    while (p1 != nullptr) 
    {
        Node* p2 = other.head;
        
        while (p2 != nullptr) 
        {
            double newCoefficient = p1->coefficient * p2->coefficient;
            
            double newExponent = p1->exponent + p2->exponent;
            
            result.insertTerm(newCoefficient, newExponent);

            p2 = p2->next;
        }
        
        p1 = p1->next;
    }

    return result;
}