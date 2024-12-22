#include "lms.hpp"

Node* LibraryManagementSystem::minValueNode(Node* root)
{
    Node* current = root;

    while (current->left) current = current->left;

    return current;
}

Node* LibraryManagementSystem::deleteBookHelper(Node* root, int id, bool& isDeleted)
{
    if (!root)
    {
        isDeleted = false;
        return root;
    }

    if (id < root->book.id) root->left = deleteBookHelper(root->left, id, isDeleted);

    else if (id > root->book.id) root->right = deleteBookHelper(root->right, id, isDeleted);

    else
    {
        isDeleted = true;

        if (!root->left || !root->right)
        {
            Node* temp = root->left ? root->left : root->right;

            if (!temp) 
            {
                temp = root;
                root = nullptr;
            } 
            
            else *root = *temp;

            delete temp;
        }

        else 
        {
            Node* temp = minValueNode(root->right);
            root->book = temp->book;
            root->right = deleteBookHelper(root->right, temp->book.id, isDeleted);
        }
    }

    if (!root) return root;

    root->height = std::max(height(root->left), height(root->right)) + 1;

    int balance = getBalance(root);

    if (balance > 1 && getBalance(root->left) >= 0) return rightRotate(root);

    if (balance > 1 && getBalance(root->left) < 0)
    {
        root->left = leftRotate(root->left);
        return rightRotate(root);
    }

    if (balance < -1 && getBalance(root->right) <= 0) return leftRotate(root);

    if (balance < -1 && getBalance(root->right) > 0) 
    {
        root->right = rightRotate(root->right);
        return leftRotate(root);
    }

    return root;
}

void LibraryManagementSystem::deleteBook()
{
    int id;
    cout << "\nEnter book ID : ";
    cin >> id;

    bool isDeleted = false;

    root = deleteBookHelper(root, id, isDeleted);

    if (isDeleted) cout << "\nBook removed from the records successfully";

    else if (!root) cout << "\nRecords are empty";

    else cout << "\nBook with this ID not in the library";
}