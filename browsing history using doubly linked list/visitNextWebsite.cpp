#include "browsing_history.hpp"

void BrowsingHistory::visitNextWebsite()
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
    
    if (!website->next)
    {
        cout << "\nNo website next to current website";
        return;
    }

    website = website->next;

    cout << "\nCurrent Website\n\n";

    cout << "URL : " << website->url;
    cout << "\nTime of most recent visit : " << website->creationTime;
    cout << "\nBookmarked : " << (website->bookmarked == true ? "Yes" : "No");
}