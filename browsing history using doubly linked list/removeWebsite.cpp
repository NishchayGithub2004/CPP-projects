#include "browsing_history.hpp"

void BrowsingHistory::removeWebsite()
{
    if (!head)
    {
        cout << "\nBrowsing history is empty";
        return;
    }
    
    string url;
    cout << "\nEnter website URL : ";
    getline(cin, url);

    Website* current = head;

    while (current && current->url != url) current = current->next;

    if (!current)
    {
        cout << "\nWebsite not found";
        return;
    }

    if (current == head && current == tail) head = tail = nullptr;

    else if (current == head)
    {
        head = current->next;
        head->prev = nullptr;
    }

    else if (current == tail)
    {
        tail = current->prev;
        tail->next = nullptr;
    }

    else
    {
        current->prev->next = current->next;
        current->next->prev = current->prev;
    }

    delete current;
    cout << "\nWebsite removed successfully";
}