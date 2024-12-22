#include "mpm.hpp"

void Playlist::displayMusicBySinger()
{
    if (!head)
    {
        cout << "\nThe playlist is empty";
        return;
    }

    string singer;
    cout << "\nEnter singer name : ";
    getline(cin, singer);

    bool found = false;

    Music* temp = head;

    while (temp)
    {
        if (temp->singer == singer)
        {
            found = true;
            cout << "\nMusic : " << temp->name;
            cout << "\nCategory : " << temp->category << "\n";
        }

        temp = temp->next;
    }

    if (!found) cout << "\nNo music with this singer found in the playlist";
}