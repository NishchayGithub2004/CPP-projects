#include "polynomial.hpp"

Polynomial Polynomial::operator+(const Polynomial& other)
{
    Polynomial result;
    Node* p1 = head;
    Node* p2 = other.head;

    while (p1 && p2)
    {
        if (p1->exponent == p2->exponent)
        {
            result.insertTerm(p1->coefficient + p2->coefficient, p1->exponent);
            p1 = p1->next;
            p2 = p2->next;
        }

        else if (p1->exponent > p2->exponent)
        {
            result.insertTerm(p1->coefficient, p1->exponent);
            p1 = p1->next;
        }

        else
        {
            result.insertTerm(p2->coefficient, p2->exponent);
            p2 = p2->next;
        }
    }

    while (p1)
    {
        result.insertTerm(p1->coefficient, p1->exponent);
        p1 = p1->next;
    }

    while (p2)
    {
        result.insertTerm(p2->coefficient, p2->exponent);
        p2 = p2->next;
    }

    return result;
}