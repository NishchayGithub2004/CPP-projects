#include "browsing_history.hpp"

void BrowsingHistory::displayAllWebsitesByRecentlyAdded()
{
    if (!head)
    {
        cout << "\nBrowsing history is empty";
        return;
    }

    cout << "\nBrowsing History\n\n";

    Website* temp = head;

    while (temp)
    {
        cout << "URL : " << temp->url;
        cout << "\nCreation time : " << temp->creationTime;
        cout << "\nBookmarked : " << (temp->bookmarked == true ? "Yes" : "No") << "\n\n";
        temp = temp->next;
    }
}