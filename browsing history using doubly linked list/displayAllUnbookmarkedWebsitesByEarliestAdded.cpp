#include "browsing_history.hpp"

void BrowsingHistory::displayAllUnbookmarkedWebsitesByEarliestAdded()
{
    if (!head)
    {
        cout << "\nBrowsing history is empty";
        return;
    }

    Website* temp = tail;
    bool found = false;

    while (temp)
    {
        if (!temp->bookmarked)
        {
            found = true;
            cout << "URL : " << temp->url;
            cout << "\nCreation time : " << temp->creationTime << "\n\n";
        }

        temp = temp->prev;
    }

    if (!found) cout << "\nNo unbookmarked website found";
}