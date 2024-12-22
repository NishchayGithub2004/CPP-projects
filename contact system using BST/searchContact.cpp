#include "cms.hpp"

Contact* ContactManagementSystem::searchContactHelper(Contact* root, string name, string number, string address)
{
    if (!root) return nullptr;

    if (root->contactName == name && root->contactNumber == number && root->contactAddress == address) return root;

    if (name < root->contactName) return searchContactHelper(root->left, name, number, address);

    else if (name > root->contactName) return searchContactHelper(root->right, name, number, address);
}

void ContactManagementSystem::searchContact()
{
    string name, number, address;

    cout << "\nEnter contact name : ";
    cin >> name;

    cout << "\nEnter contact number : ";
    cin >> number;

    cout << "\nEnter contact address : ";
    cin >> address;

    Contact* result = searchContactHelper(root, name, number, address);

    if (result) cout << "\nContact found";

    else cout << "\nContact not found";
}