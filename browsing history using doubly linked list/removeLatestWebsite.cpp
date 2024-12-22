#include "browsing_history.hpp"

void BrowsingHistory::removeLatestWebsite()
{
    if (!head)
    {
        cout << "\nBrowsing history is empty";
        return;
    }

    else
    {
        Website* temp = head;

        if (head == tail)
        {
            head = tail = nullptr;
            delete temp;
        }

        else
        {
            head = head->next;
            head->prev = nullptr;
            delete temp;
        }

        cout << "\nLatest website removed successfully";
    }
}