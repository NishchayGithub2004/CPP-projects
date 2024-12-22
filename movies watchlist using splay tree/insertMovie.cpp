#include "watchlist.hpp"

Movie* MoviesWatchlistSystem::insertMovieHelper(Movie* root, string name, string type, bool& isInserted)
{
    if (!root) 
    {
        isInserted = true;
        
        return new Movie(name, type);
    }

    if (name < root->movieName) root->left = insertMovieHelper(root->left, name, type, isInserted);
    
    else if (name > root->movieName) root->right = insertMovieHelper(root->right, name, type, isInserted);
    
    else isInserted = false;

    return splay(root, name);
}

void MoviesWatchlistSystem::insertMovie()
{
    string name, type;

    cout << "\nEnter movie name : ";
    getline(cin, name);

    cout << "\nEnter movie type : ";
    getline(cin, type);

    bool isInserted = false;

    root = insertMovieHelper(root, name, type, isInserted);

    if (isInserted) cout << "\nMovie added to the watchlist successfully";

    else cout << "\nMovie already exists in the watchlist";
}