#include "mpm.hpp"

void Playlist::displayPlaylistByEarliestAdded()
{
    if (!tail)
    {
        cout << "\nThe playlist is empty";
        return;
    }
    
    Music* temp = tail;

    cout << "\nMusic playlist\n\n";

    while (temp)
    {
        cout << "Name : " << temp->name;
        cout << "\nSinger : " << temp->singer;
        cout << "\nCategory : " << temp->category << "\n\n";
        temp = temp->prev;
    }
}