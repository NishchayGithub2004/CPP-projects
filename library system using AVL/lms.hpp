#ifndef LMS_HPP
#define LMS_HPP

#include<iostream>
#include<string>
using namespace std;

class Book
{
    public:
    
    int id;
    string title;
    string author;
    bool issued;

    Book(int id, string title, string author, bool issued) : id(id), title(title), author(author), issued(false) {}
};

class Node
{
    public:

    Book book;
    Node* left;
    Node* right;
    int height;

    Node(Book book) : book(book), left(nullptr), right(nullptr), height(1) {}
};

class LibraryManagementSystem
{
    private: Node* root;

    int height(Node* root) {return root ? root->height : 0;}

    int getBalance(Node* root) {return root ? height(root->left) - height(root->right) : 0;}

    Node* minValueNode(Node* root);

    Node* leftRotate(Node* x);

    Node* rightRotate(Node* y);

    Node* insertBookHelper(Node* root, Book book, bool& isInserted);

    Node* deleteBookHelper(Node* root, int id, bool& isDeleted);

    Node* searchBookHelper(Node* root, int id);

    Node* searchByTitleAndAuthor(Node* root, string title, string author);

    void displayBooksHelper(Node* root);

    public: LibraryManagementSystem() : root(nullptr) {}

    void insertBook();

    void deleteBook();

    void searchBook();

    void displayBooks();

    void issueBook();

    void returnBook();
};

#endif