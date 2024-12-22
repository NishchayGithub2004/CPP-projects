#include "watchlist.hpp"
#include "left_and_right_rotate.cpp"
#include "splay.cpp"
#include "insertMovie.cpp"
#include "removeMovie.cpp"
#include "displayAllMovies.cpp"
#include "displayByType.cpp"

int main()
{
    MoviesWatchlistSystem mws;
    int choice;

    while (true)
    {
        cout << "\n\nMAIN MENU\n";
        cout << "\n1. Insert movie to the watchlist";
        cout << "\n2. Remove movie from the watchlist";
        cout << "\n3. Display all movies in the watchlist";
        cout << "\n4. Display movies of a type in the watchlist";
        cout << "\n5. Exit";

        cout << "\n\nEnter your choice : ";
        cin >> choice;
        cin.ignore();

        switch(choice)
        {
            case 1: mws.insertMovie(); break;
            case 2: mws.removeMovie(); break;
            case 3: mws.displayAllMovies(); break;
            case 4: mws.displayByType(); break;
            case 5: cout << "\nProgram exited successfully"; return 0;
            default: cout << "\nPlease enter a valid choice";
        }
    }
}