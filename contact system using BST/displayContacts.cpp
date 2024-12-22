#include "cms.hpp"

void ContactManagementSystem::displayContactsHelper(Contact* root)
{
    if (root)
    {
        displayContactsHelper(root->left);
        cout << "Name : " << root->contactName << ", Number : " << root->contactNumber << ", Address : " << root->contactAddress << "\n";
        displayContactsHelper(root->right);
    }
}

void ContactManagementSystem::displayContacts()
{
    if (!root)
    {
        "\nContacts list is empty";
        return;
    }

    cout << "\nContacts are : \n\n";
    displayContactsHelper(root);
}