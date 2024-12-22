#include "watchlist.hpp"

void MoviesWatchlistSystem::displayByTypeHelper(Movie* root, string type)
{
    if (!root) return;

    displayByTypeHelper(root->left, type);

    if (root->movieType == type) cout << root->movieName << " (" << root->movieType << ")" << "\n";

    displayByTypeHelper(root->right, type);
}

void MoviesWatchlistSystem::displayByType()
{
    string type;
    cout << "\nEnter movie type : ";
    cin >> type;
    
    if (!root)
    {
        cout << "\nMovie watchlist is empty";
        return;
    }

    displayByTypeHelper(root, type);
}