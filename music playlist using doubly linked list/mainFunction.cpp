#include "mpm.hpp"
#include "addMusic.cpp"
#include "deleteMusic.cpp"
#include "displayMusicByCategory.cpp"
#include "displayMusicBySinger.cpp"
#include "displayPlaylistByEarliestAdded.cpp"
#include "displayPlaylistByRecentlyAdded.cpp"
#include "playMusic.cpp"
#include "playPreviousMusic.cpp"
#include "playNextMusic.cpp"

int main()
{
    Playlist playlist;
    int choice;

    while (true)
    {
        cout << "\n\nMAIN MENU\n\n";
        cout << "1. Add music";
        cout << "\n2. Delete music";
        cout << "\n3. Play a music";
        cout << "\n4. Play previous music";
        cout << "\n5. Play next music";
        cout << "\n6. Display music by singer";
        cout << "\n7. Display music by category";
        cout << "\n8. Display music by recently added";
        cout << "\n9. Display music by earliest added";
        cout << "\n10. Exit";
        
        cout << "\n\nEnter your choice : ";
        cin >> choice;
        cin.ignore();

        switch(choice)
        {
            case 1: playlist.addMusic(); break;

            case 2: playlist.deleteMusic(); break;

            case 3: playlist.playMusic(); break;

            case 4: playlist.playPreviousMusic(); break;

            case 5: playlist.playNextMusic(); break;

            case 6: playlist.displayMusicBySinger(); break;

            case 7: playlist.displayMusicByCategory(); break;

            case 8: playlist.displayPlaylistByRecentlyAdded(); break;

            case 9: playlist.displayPlaylistByEarliestAdded(); break;

            case 10: cout << "\nProgram exited successfully"; return 0;

            default: cout << "\nPlease enter a valid choice"; break;
        }
    }
}