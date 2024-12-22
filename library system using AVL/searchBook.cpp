#include "lms.hpp"

Node* LibraryManagementSystem::searchBookHelper(Node* root, int id)
{
    if (!root || root->book.id == id) return root;

    if (id < root->book.id) return searchBookHelper(root->left, id);

    else if (id > root->book.id) return searchBookHelper(root->right, id);
}

void LibraryManagementSystem::searchBook()
{
    int id;
    cout << "\nEnter book ID : ";
    cin >> id;

    Node* result = searchBookHelper(root, id);

    if (result)
    {
        cout << "\nBook found\n\n";
        cout << "ID : " << result->book.id;
        cout << "\nTitle : " << result->book.title;
        cout << "\nAuthor : " << result->book.author;
        cout << "\nIssued : " << result->book.issued ? "Yes" : "No";
    }

    else cout << "\nBook not found";
}