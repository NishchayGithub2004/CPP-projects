#include "watchlist.hpp"

Movie* MoviesWatchlistSystem::removeMovieHelper(Movie* root, string name, bool& isDeleted)
{
    if (!root) 
    {
        isDeleted = false;
        return nullptr;
    }

    root = splay(root, name);

    if (root->movieName != name) 
    {
        isDeleted = false;
        return root;
    }

    isDeleted = true;
    Movie* temp;
    
    if (root->left == nullptr) 
    {
        temp = root;
        root = root->right;
        delete temp;
    } 
    
    else 
    {
        temp = root;
        root = splay(root->left, name);
        root->right = temp->right;
        delete temp;
    }
    
    return root;
}

void MoviesWatchlistSystem::removeMovie()
{
    string name;
    cout << "\nEnter movie name : ";
    cin >> name;

    bool isDeleted;

    root = removeMovieHelper(root, name, isDeleted);

    if (isDeleted) cout << "\nMovie removed from the watchlist successfully";

    else cout << "\nMovie does not exist in the watchlist";
}