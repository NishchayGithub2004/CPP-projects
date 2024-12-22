#include "polynomial.hpp"

void Polynomial::display()
{
    if (head == nullptr)
    {
        cout << "0";
        return;
    }

    Node* temp = head;
    
    bool firstTerm = true;

    while (temp != nullptr)
    {
        if (temp->coefficient > 0 && !firstTerm) std::cout << " + ";

        else if (temp->coefficient < 0) std::cout << " - ";

        double absoluteCoefficient = std::abs(temp->coefficient);

        if (temp->exponent == 0) std::cout << absoluteCoefficient;

        else if (temp->exponent == 1)
        {
            if (absoluteCoefficient != 1) std::cout << absoluteCoefficient << "x";

            else std::cout << "x";
        }

        else
        {
            if (absoluteCoefficient != 1) std::cout << absoluteCoefficient << "x^" << temp->exponent;

            else std::cout << "x^" << temp->exponent;
        }

        temp = temp->next;

        firstTerm = false;
    }
}