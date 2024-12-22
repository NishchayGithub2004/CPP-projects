#include "lms.hpp"

Node* LibraryManagementSystem::insertBookHelper(Node* root, Book book, bool& isInserted)
{
    if (!root)
    {
        isInserted = true;
        return new Node(book);
    }

    if (book.id < root->book.id) root->left = insertBookHelper(root->left, book, isInserted);

    else if (book.id > root->book.id) root->right = insertBookHelper(root->right, book, isInserted);

    else
    {
        isInserted = false;
        return root;
    }

    root->height = std::max(height(root->left), height(root->right)) + 1;

    int balance = getBalance(root);

    if (balance > 1 && book.id < root->book.id) return rightRotate(root);

    if (balance < -1 && book.id > root->book.id) return leftRotate(root);

    if (balance > 1 && book.id > root->book.id)
    {
        root->left = leftRotate(root->left);
        return rightRotate(root);
    }

    if (balance < -1 && book.id < root->book.id)
    {
        root->right = rightRotate(root->right);
        return leftRotate(root);
    }

    return root;
}

void LibraryManagementSystem::insertBook()
{
    int id;
    string title, author;
    bool isInserted = false;
    
    cout << "\nEnter book ID : ";
    cin >> id;
    cin.ignore();

    cout << "\nEnter book title : ";
    getline(cin, title);

    cout << "\nEnter book author : ";
    getline(cin, author);

    root = insertBookHelper(root, Book(id, title, author, false), isInserted);

    if (isInserted) cout << "\nBook inserted in the library";

    else cout << "\nBook with this ID already exists";
}