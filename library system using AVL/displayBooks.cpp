#include "lms.hpp"

void LibraryManagementSystem::displayBooksHelper(Node* root)
{
    if (root)
    {
        displayBooksHelper(root->left);
        cout << "\nID : " << root->book.id;
        cout << "\nTitle : " << root->book.title;
        cout << "\nAuthor : " << root->book.author;
        cout << "\nIssued : " << root->book.issued ? "Yes" : "No";
        cout << "\n";
        displayBooksHelper(root->right);
    }
}

void LibraryManagementSystem::displayBooks()
{
    if (!root)
    {
        cout << "\nRecords are empty";
        return;
    }

    cout << "\nRecords are : ";

    displayBooksHelper(root);
}