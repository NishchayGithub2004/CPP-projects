#include "cms.hpp"
#include "insertContact.cpp"
#include "deleteContact.cpp"
#include "searchContact.cpp"
#include "displayContacts.cpp"

int main()
{
    ContactManagementSystem cms;
    string name, number, address;
    int choice;

    while (true)
    {
        cout << "\n\nMAIN MENU\n";
        cout << "\n1. Insert contact";
        cout << "\n2. Delete contact";
        cout << "\n3. Search contact";
        cout << "\n4. Display contacts";
        cout << "\n5. Exit";

        cout << "\n\nEnter your choice : ";
        cin >> choice;

        switch(choice)
        {
            case 1: cms.insertContact(); break;

            case 2: cms.deleteContact(); break;

            case 3: cms.searchContact(); break;

            case 4: cms.displayContacts(); break;

            case 5: cout << "\nProgram exited successfully"; return 0;

            default: cout << "\nPlease enter a valid option"; break;
        }
    }
}