#include "mpm.hpp"

void Playlist::displayMusicByCategory()
{
    if (!head)
    {
        cout << "\nThe playlist is empty";
        return;
    }

    string category;
    cout << "\nEnter music category : ";
    getline(cin, category);

    bool found = false;

    Music* temp = head;

    while (temp)
    {
        if (temp->category == category)
        {
            found = true;
            cout << "\nMusic : " << temp->name;
            cout << "\nSinger : " << temp->singer << "\n";
        }

        temp = temp->next;
    }

    if (!found) cout << "\nNo music with this category found in the playlist";
}