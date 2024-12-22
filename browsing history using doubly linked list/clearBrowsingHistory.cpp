#include "browsing_history.hpp"

void BrowsingHistory::clearBrowsingHistory()
{
    if (!head)
    {
        cout << "\nBrowsing history is already empty";
        return;
    }
    
    Website* current = head;

    while (current)
    {
        Website* temp = current;
        current = current->next;
        delete temp;
    }

    head = tail = nullptr;

    cout << "\nBrowsing history cleared successfully";
}