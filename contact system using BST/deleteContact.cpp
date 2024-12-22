#include "cms.hpp"

Contact *ContactManagementSystem::deleteContactHelper(Contact *root, string name, string number, string address, bool &isDeleted)
{
    if (!root)
    {
        isDeleted = false;
        return root;
    }

    if (name < root->contactName)
        root->left = deleteContactHelper(root->left, name, number, address, isDeleted);

    else if (name > root->contactName)
        root->right = deleteContactHelper(root->right, name, number, address, isDeleted);

    else
    {
        if (root->contactNumber == number && root->contactAddress == address)
        {
            isDeleted = true;

            if (!root->left)
            {
                Contact *temp = root->right;
                delete root;
                return temp;
            }

            else if (!root->right)
            {
                Contact *temp = root->left;
                delete root;
                return temp;
            }

            Contact *temp = findMin(root->right);
            root->contactName = temp->contactName;
            root->contactNumber = temp->contactNumber;
            root->contactAddress = temp->contactAddress;
            root->right = deleteContactHelper(root->right, temp->contactName, temp->contactNumber, temp->contactAddress, isDeleted);
        }
    }

    return root;
}

void ContactManagementSystem::deleteContact()
{
    string name, number, address;
    bool isDeleted;

    cout << "\nEnter contact name : ";
    cin >> name;

    cout << "\nEnter contact number : ";
    cin >> number;

    cout << "\nEnter contact address : ";
    cin >> address;

    root = deleteContactHelper(root, name, number, address, isDeleted);

    if (isDeleted) cout << "\nContact deleted successfully";

    else cout << "\nThis contact does not exist";
}