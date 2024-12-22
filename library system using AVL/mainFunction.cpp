#include "lms.hpp"
#include "left_and_right_rotate.cpp"
#include "insertBook.cpp"
#include "deleteBook.cpp"
#include "searchBook.cpp"
#include "displayBooks.cpp"
#include "issueBook.cpp"
#include "returnBook.cpp"
#include "searchByTitleAndAuthor.cpp"

int main()
{
    LibraryManagementSystem lms;
    int choice;

    while (true)
    {
        cout << "\n\nMAIN MENU\n";
        cout << "\n1. Insert book";
        cout << "\n2. Delete book";
        cout << "\n3. Search book";
        cout << "\n4. Display books";
        cout << "\n5. Issue book";
        cout << "\n6. Return book";
        cout << "\n7. Exit";
        
        cout << "\n\nEnter your choice : ";
        cin >> choice;

        switch(choice)
        {
            case 1: lms.insertBook(); break;

            case 2: lms.deleteBook(); break;

            case 3: lms.searchBook(); break;

            case 4: lms.displayBooks(); break;

            case 5: lms.issueBook(); break;

            case 6: lms.returnBook(); break;

            case 7: cout << "\nProgram exited successfully"; return 0;

            default: cout << "\nPlease enter a valid choice"; break;
        }
    }
}