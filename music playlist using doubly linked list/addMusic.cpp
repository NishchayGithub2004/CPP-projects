#include "mpm.hpp"

void Playlist::addMusic()
{
    string name, singer, category;

    cout << "\nEnter music name : ";
    getline(cin, name);

    cout << "\nEnter music singer name : ";
    getline(cin, singer);

    cout << "\nEnter music category : ";
    getline(cin, category);

    Music *newMusic = new Music(name, singer, category);

    if (!head)
    {
        head = tail = newMusic;
        cout << "\nNew music added to the playlist successfully";
    }

    else
    {
        newMusic->next = head;
        head->prev = newMusic;
        head = newMusic;
        cout << "\nNew music added to the playlist successfully";
    }
}