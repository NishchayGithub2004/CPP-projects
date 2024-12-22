#include "watchlist.hpp"

Movie* MoviesWatchlistSystem::splay(Movie* root, string name)
{
    if (!root || root->movieName == name) return root;

    if (root->movieName > name)
    {
        if (!root->left) return root;

        if (root->left->movieName > name) 
        {
            root->left->left = splay(root->left->left, name);
            
            root = rotateRight(root);
        }

        else if (root->left->movieName < name) 
        {
            root->left->right = splay(root->left->right, name);
            
            if (root->left->right != nullptr) root->left = rotateLeft(root->left);
        }

        return (!root->left) ? root : rotateRight(root);
    }

    else
    {
        if (!root->right) return root;

        if (root->right->movieName < name) 
        {
            root->right->right = splay(root->right->right, name);
            
            root = rotateLeft(root);
        }

        else if (root->right->movieName > name) 
        {
            root->right->left = splay(root->right->left, name);
            
            if (root->right->left != nullptr) root->right = rotateRight(root->right);
        }

        return (!root->right) ? root : rotateLeft(root);
    }
}