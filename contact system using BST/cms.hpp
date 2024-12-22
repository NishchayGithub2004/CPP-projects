#ifndef CMS_HPP
#define CMS_HPP

#include<iostream>
#include<string>
using namespace std;

class Contact
{
    public:

    string contactName;
    string contactNumber;
    string contactAddress;

    Contact* left;
    Contact* right;

    Contact(string name, string number, string address)
    {
        contactName = name;
        contactNumber = number;
        contactAddress = address;
        left = nullptr;
        right = nullptr;
    }
};

class ContactManagementSystem
{
    private: Contact* root;

    Contact* findMin(Contact* root)
    {
        while (root->left) root = root->left;
        
        return root;
    }

    Contact* insertContactHelper(Contact* root, string name, string number, string address, bool& isInserted);

    Contact* deleteContactHelper(Contact* root, string name, string number, string address, bool& isDeleted);

    Contact* searchContactHelper(Contact* root, string name, string number, string address);

    void displayContactsHelper(Contact* root);

    public: ContactManagementSystem() : root(nullptr) {}

    void insertContact();

    void deleteContact();

    void searchContact();

    void displayContacts();
};

#endif