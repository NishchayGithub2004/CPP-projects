#include "mpm.hpp"

void Playlist::playMusic()
{
    string name;
    cout << "\nEnter music name : ";
    getline(cin, name);

    Music* temp = head;

    while (temp && temp->name != name) temp = temp->next;

    if (!temp)
    {
        cout << "\nMusic not found in the playlist";
        return;
    }

    music = temp;
    
    cout << "\nNow playing : " << music->name;
    cout << "\nSinger : " << music->singer;
    cout << "\nCategory : " << music->category;
}