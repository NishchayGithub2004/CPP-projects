#ifndef BH_HPP
#define BH_HPP

#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

class Website
{
    public:

    string url;
    bool bookmarked;
    string creationTime;
    Website* prev;
    Website* next;

    Website(string url) : url(url), prev(nullptr), next(nullptr), bookmarked(false)
    {
        time_t now = time(0);
        tm* localTime = localtime(&now);
        std::ostringstream oss;
        oss << std::put_time(localTime, "%Y-%m-%d %H:%M:%S");
        creationTime = oss.str();
    }
};

class BrowsingHistory
{
    private: Website *head, *tail, *website;

    public: BrowsingHistory() : head(nullptr), tail(nullptr), website(nullptr) {}

    void addWebsite();

    void removeLatestWebsite();

    void removeWebsite();

    void searchWebsite();

    void clearBrowsingHistory();

    void visitWebsite();

    void visitPreviousWebsite();

    void visitNextWebsite();

    void bookmarkWebsite();

    void unbookmarkWebsite();

    void displayCurrentWebsite();

    void displayAllWebsitesByRecentlyAdded();

    void displayAllWebsitesByEarliestAdded();

    void displayAllBookmarkedWebsitesByRecentlyAdded();

    void displayAllBookmarkedWebsitesByEarliestAdded();

    void displayAllUnbookmarkedWebsitesByRecentlyAdded();

    void displayAllUnbookmarkedWebsitesByEarliestAdded();
};

#endif