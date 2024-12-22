#include "lms.hpp"

void LibraryManagementSystem::returnBook()
{
    string title, author;

    cout << "\nEnter book title : ";
    getline(cin, title);

    cout << "\nEnter book author : ";
    getline(cin, author);

    Node* result = searchByTitleAndAuthor(root, title, author);

    if (result)
    {
        if (!result->book.issued) cout << "\nNo such issued book found";

        else
        {
            result->book.issued = false;
            cout << "\nBook returned successfully";
        }
    }

    else cout << "\nNo such issued book found";
}