#include "browsing_history.hpp"

void BrowsingHistory::bookmarkWebsite()
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
    bool found = false;

    while (temp)
    {
        if (temp->url == url)
        {
            found = true;

            if (temp->bookmarked)
            {
                cout << "\nWebsite already bookmarked";
                return;
            }

            else temp->bookmarked = true;
        }

        temp = temp->next;
    }

    if (!found) cout << "\nWebsite not found in the browsing history";

    else cout << "\nWebsite bookmarked successfully";
}