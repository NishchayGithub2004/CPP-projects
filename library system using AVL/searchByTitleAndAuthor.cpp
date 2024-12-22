#include "lms.hpp"

Node* LibraryManagementSystem::searchByTitleAndAuthor(Node* root, string title, string author)
{
    if (!root) return nullptr;

    Node* leftFound = searchByTitleAndAuthor(root->left, title, author);

    if (leftFound) return leftFound;

    if (root->book.title == title && root->book.author == author && !root->book.issued) return root;

    return searchByTitleAndAuthor(root->right, title, author);
}