#include "browsing_history.hpp"

void BrowsingHistory::visitWebsite()
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
            website = temp;
            break;
        }
        
        else temp = temp->next;
    }

    if (!website) 
    {
        cout << "\nWebsite not found";
        return;
    }

    cout << "\nCurrent Website\n\n";

    cout << "URL : " << website->url;
    cout << "\nTime of most recent visit : " << website->creationTime;
    cout << "\nBookmarked : " << (website->bookmarked == true ? "Yes" : "No");
}