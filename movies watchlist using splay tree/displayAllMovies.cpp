#include "watchlist.hpp"

void MoviesWatchlistSystem::displayAllMoviesHelper(Movie* root)
{
    if (!root) return;

    displayAllMoviesHelper(root->left);

    cout << root->movieName << " (" << root->movieType << ")" << "\n";

    displayAllMoviesHelper(root->right);
}

void MoviesWatchlistSystem::displayAllMovies()
{
    if (!root) 
    {
        cout << "\nMovie watchlist is empty";
        return;
    }

    displayAllMoviesHelper(root);
}