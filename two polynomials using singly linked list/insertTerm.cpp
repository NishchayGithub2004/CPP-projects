#include "polynomial.hpp"

void Polynomial::insertTerm(double c, double e)
{
    Node* newNode = new Node(c,e);

    if (head == nullptr || head->exponent < e)
    {
        newNode->next = head;
        
        head = newNode;
    }

    else
    {
        Node* temp = head;

        while (temp->next != nullptr && temp->next->exponent >= e) temp = temp->next;

        if (temp->exponent == e) temp->coefficient += c;

        else
        {
            newNode->next = temp->next;
            
            temp->next = newNode;
        }
    }
}