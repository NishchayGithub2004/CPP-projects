#include "mpm.hpp"

void Playlist::playPreviousMusic()
{
    if (!music)
    {
        cout << "\nNo music currently playing";
        return;
    }

    if (!music->prev)
    {
        cout << "\nNo music present previous to the currently playing music in the playlist";
        return;
    }

    music = music->prev;

    cout << "\nNow playing : " << music->name;
    cout << "\nSinger : " << music->singer;
    cout << "\nCategory : " << music->category;
}