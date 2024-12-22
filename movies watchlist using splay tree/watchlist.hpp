#ifndef WATCHLIST_HPP
#define WATCHLIST_HPP

#include<iostream>
#include<string>
using namespace std;

class Movie
{
    public:

    string movieName;
    string movieType;
    Movie* left;
    Movie* right;

    Movie(string name, string type) : movieName(name), movieType(type), left(nullptr), right(nullptr) {}
};

class MoviesWatchlistSystem
{
    private: Movie* root;

    Movie* rotateLeft(Movie* root);

    Movie* rotateRight(Movie* root);

    Movie* splay(Movie* root, string name);

    Movie* insertMovieHelper(Movie* root, string name, string type, bool& isInserted);

    Movie* removeMovieHelper(Movie* root, string name, bool& isDeleted);

    void displayAllMoviesHelper(Movie* root);

    void displayByTypeHelper(Movie* root, string type);

    public: MoviesWatchlistSystem() : root(nullptr) {}

    void insertMovie();

    void removeMovie();

    void displayAllMovies();

    void displayByType();
};

#endif