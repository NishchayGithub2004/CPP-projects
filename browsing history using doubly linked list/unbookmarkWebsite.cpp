#include "browsing_history.hpp"

void BrowsingHistory::unbookmarkWebsite()
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

            if (!temp->bookmarked)
            {
                cout << "\nWebsite already unbookmarked";
                return;
            }

            else temp->bookmarked = false;
        }

        temp = temp->next;
    }

    if (!found) cout << "\nWebsite not found in the browsing history";

    else cout << "\nWebsite unbookmarked successfully";
}