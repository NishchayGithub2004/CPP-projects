#include "mpm.hpp"

void Playlist::playNextMusic()
{
    if (!music)
    {
        cout << "\nNo music currently playing";
        return;
    }

    if (!music->next)
    {
        cout << "\nNo music present next to the currently playing music in the playlist";
        return;
    }

    music = music->next;

    cout << "\nNow playing : " << music->name;
    cout << "\nSinger : " << music->singer;
    cout << "\nCategory : " << music->category;
}