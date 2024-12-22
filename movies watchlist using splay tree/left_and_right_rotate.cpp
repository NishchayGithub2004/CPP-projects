#include "watchlist.hpp"

Movie* MoviesWatchlistSystem::rotateLeft(Movie* root)
{
    Movie* rightChild = root->right;
    
    root->right = rightChild->left;
    
    rightChild->left = root;
    
    return rightChild;
}

Movie* MoviesWatchlistSystem::rotateRight(Movie* root)
{
    Movie* leftChild = root->left;
    
    root->left = leftChild->right;
    
    leftChild->right = root;
    
    return leftChild;
}