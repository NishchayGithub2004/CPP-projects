#include "browsing_history.hpp"

void BrowsingHistory::searchWebsite()
{
    if (!head)
    {
        cout << "\nBrowsing history is empty";
        return;
    }
    
    string url;
    cout << "\nEnter website URL : ";
    getline(cin, url);

    Website* temp = head;

    while (temp)
    {
        if (temp->url == url)
        {
            cout << "\n\nTime of creation : " << temp->creationTime;
            cout << "\nBookmarked : " << (temp->bookmarked == true ? "Yes" : "No");
            return;
        }

        temp = temp->next;
    }

    cout << "\nWebsite not found";
}