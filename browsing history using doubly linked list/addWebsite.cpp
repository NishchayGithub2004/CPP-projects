#include "browsing_history.hpp"

void BrowsingHistory::addWebsite()
{
    string url;
    cout << "\nEnter website URL : ";
    getline(cin, url);

    Website* newWebsite = new Website(url);

    if (!head) head = tail = newWebsite;

    else
    {
        newWebsite->next = head;
        head->prev = newWebsite;
        head = newWebsite;
    }

    cout << "\nWebsite inserted successfully";
}