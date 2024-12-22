#include "browsing_history.hpp"

void BrowsingHistory::visitPreviousWebsite()
{
    if (!head)
    {
        cout << "\nBrowsing history is empty";
        return;
    }

    if (!website)
    {
        cout << "\nNo website visited currently";
        return;
    }
    
    if (!website->prev)
    {
        cout << "\nNo website previous to current website";
        return;
    }

    website = website->prev;

    cout << "\nCurrent Website\n\n";

    cout << "URL : " << website->url;
    cout << "\nTime of most recent visit : " << website->creationTime;
    cout << "\nBookmarked : " << (website->bookmarked == true ? "Yes" : "No");
}