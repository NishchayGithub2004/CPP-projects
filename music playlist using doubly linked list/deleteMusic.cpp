#include "mpm.hpp"

void Playlist::deleteMusic()
{
    if (!head)
    {
        cout << "\nPlaylist is empty";
        return;
    }

    string name;
    cout << "\nEnter music name : ";
    getline(cin, name);

    Music* current = head;

    while (current && current->name != name) current = current->next;

    if (!current)
    {
        cout << "\nMusic not found in the playlist";
        return;
    }

    if (current == head && current == tail) head = tail = nullptr;

    else if (current == head)
    {
        head = current->next;
        head->prev = nullptr;
    }

    else if (current == tail)
    {
        tail = current->prev;
        tail->next = nullptr;
    }

    else
    {
        current->prev->next = current->next;
        current->next->prev = current->prev;
    }

    delete current;
    cout << "\nMusic deleted from the playlist successfully";
}