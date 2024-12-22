#include "browsing_history.hpp"
#include "addWebsite.cpp"
#include "removeLatestWebsite.cpp"
#include "removeWebsite.cpp"
#include "clearBrowsingHistory.cpp"
#include "visitWebsite.cpp"
#include "visitPreviousWebsite.cpp"
#include "visitNextWebsite.cpp"
#include "bookmarkWebsite.cpp"
#include "unbookmarkWebsite.cpp"
#include "searchWebsite.cpp"
#include "displayCurrentWebsite.cpp"
#include "displayAllWebsitesByRecentlyAdded.cpp"
#include "displayAllWebsitesByEarliestAdded.cpp"
#include "displayAllBookmarkedWebsitesByRecentlyAdded.cpp"
#include "displayAllBookmarkedWebsitesByEarliestAdded.cpp"
#include "displayAllUnbookmarkedWebsitesByRecentlyAdded.cpp"
#include "displayAllUnbookmarkedWebsitesByEarliestAdded.cpp"

int main()
{
    BrowsingHistory bh;

    cout << "\n\nMAIN MENU\n\n";
    cout << "1. Add website";
    cout << "\n2. Remove latest website";
    cout << "\n3. Remove website";
    cout << "\n4. Clear browsing history";
    cout << "\n5. Visit website";
    cout << "\n6. Visit previous website";
    cout << "\n7. Visit next website";
    cout << "\n8. Bookmark website";
    cout << "\n9. Unbookmark website";
    cout << "\n10. Search website";
    cout << "\n11. Display current website";
    cout << "\n12. Display websites by recently added";
    cout << "\n13. Display websites by earliest added";
    cout << "\n14. Display bookmarked websites by recently added";
    cout << "\n15. Display bookmarked websites by earliest added";
    cout << "\n16. Display unbookmarked websites by recently added";
    cout << "\n17. Display unbookmarked websites by earliest added";
    cout << "\n18. Exit";

    while (true)
    {
        int choice;
        cout << "\n\nEnter your choice : ";
        cin >> choice;
        cin.ignore();

        switch(choice)
        {
            case 1: bh.addWebsite(); break;
            case 2: bh.removeLatestWebsite(); break;
            case 3: bh.removeWebsite(); break;
            case 4: bh.clearBrowsingHistory(); break;
            case 5: bh.visitWebsite(); break;
            case 6: bh.visitPreviousWebsite(); break;
            case 7: bh.visitNextWebsite(); break;
            case 8: bh.bookmarkWebsite(); break;
            case 9: bh.unbookmarkWebsite(); break;
            case 10: bh.searchWebsite(); break;
            case 11: bh.displayCurrentWebsite(); break;
            case 12: bh.displayAllWebsitesByRecentlyAdded(); break;
            case 13: bh.displayAllWebsitesByEarliestAdded(); break;
            case 14: bh.displayAllBookmarkedWebsitesByRecentlyAdded(); break;
            case 15: bh.displayAllBookmarkedWebsitesByEarliestAdded(); break;
            case 16: bh.displayAllUnbookmarkedWebsitesByRecentlyAdded(); break;
            case 17: bh.displayAllUnbookmarkedWebsitesByEarliestAdded(); break;
            case 18: cout << "\nProgram exited successfully"; return 0;
            default: cout << "\nPlease enter a valid option"; break;
        }
    }
}