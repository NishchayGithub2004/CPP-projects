#ifndef MPM_HPP
#define MPM_HPP

#include<iostream>
#include<string>
using namespace std;

class Music
{
    public:

    string name;
    string singer;
    string category;
    Music* next;
    Music* prev;

    Music(string name, string singer, string category) : name(name), singer(singer), category(category), next(nullptr), prev(nullptr) {}
};

class Playlist
{
    private: Music *head, *tail, *music;

    public: Playlist() : head(nullptr), tail(nullptr), music(nullptr) {}

    void addMusic();

    void deleteMusic();

    void playMusic();

    void playPreviousMusic();

    void playNextMusic();

    void displayPlaylistByRecentlyAdded();

    void displayPlaylistByEarliestAdded();

    void displayMusicBySinger();

    void displayMusicByCategory();
};

#endif