#include "cms.hpp"

Contact* ContactManagementSystem::insertContactHelper(Contact* root, string name, string number, string address, bool& isInserted)
{
    if (!root)
    {
        isInserted = true;
        return new Contact(name, number, address);
    }

    if (name < root->contactName) root->left = insertContactHelper(root->left, name, number, address, isInserted);

    else if (name > root->contactName) root->right = insertContactHelper(root->right, name, number, address, isInserted);

    else
    {
        isInserted = false;
        return root;
    }
}

void ContactManagementSystem::insertContact()
{
    string name, number, address;
    bool isInserted;

    cout << "\nEnter contact name : ";
    cin >> name;

    cout << "\nEnter contact number : ";
    cin >> number;

    cout << "\nEnter contact address : ";
    cin >> address;

    root = insertContactHelper(root, name, number, address, isInserted);

    if (isInserted) cout << "\nContact inserted successfully";

    else cout << "\nThis contact already exists";
}