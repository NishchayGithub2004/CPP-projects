#include "browsing_history.hpp"

void BrowsingHistory::displayAllBookmarkedWebsitesByRecentlyAdded()
{
    if (!head)
    {
        cout << "\nBrowsing history is empty";
        return;
    }

    Website* temp = head;
    bool found = false;

    while (temp)
    {
        if (temp->bookmarked)
        {
            found = true;
            cout << "URL : " << temp->url;
            cout << "\nCreation time : " << temp->creationTime << "\n\n";
        }

        temp = temp->next;
    }

    if (!found) cout << "\nNo bookmarked website found";
}