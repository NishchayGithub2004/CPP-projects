#include "browsing_history.hpp"

void BrowsingHistory::displayCurrentWebsite()
{
    if (!head)
    {
        cout << "\nBrowsing history is empty";
        return;
    }

    if (!website)
    {
        cout << "\nNo website currently visited";
        return;
    }

    cout << "\nURL : " << website->url;
    cout << "\nTime of creation : " << website->creationTime;
    cout << "\nBookmarked : " << (website->bookmarked == true ? "Yes" : "No");
}