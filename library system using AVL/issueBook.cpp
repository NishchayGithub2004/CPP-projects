#include "lms.hpp"

void LibraryManagementSystem::issueBook()
{
    string title, author;

    cout << "\nEnter book title : ";
    getline(cin, title);

    cout << "\nEnter book author : ";
    getline(cin, author);

    Node* result = searchByTitleAndAuthor(root, title, author);

    if (result)
    {
        if (result->book.issued) cout << "\nSorry but the book is not available at the moment";

        else
        {
            result->book.issued = true;
            cout << "\nBook issued successfully";
        }
    }

    else cout << "\nSorry but the book is not available at the moment";
}