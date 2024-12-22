#include "mpm.hpp"

void Playlist::displayPlaylistByRecentlyAdded()
{
    if (!head)
    {
        cout << "\nThe playlist is empty";
        return;
    }

    cout << "\nMusic playlist\n\n";

    Music* temp = head;

    while (temp)
    {
        cout << "Name : " << temp->name;
        cout << "\nSinger : " << temp->singer;
        cout << "\nCategory : " << temp->category << "\n\n";
        temp = temp->next;
    }
}