#include <iostream>
#include "song.h"
#include <cstring>
using namespace std;

class playList
{
protected:

    int size;
    Song *songs = new songs[size];

public:
    playList();
    void AddSong(const Song &s);
    bool DeleteSong(const Song &s);
    void ShowAll() const;
    void play(int num=1);
    void ShowStatus() const;

};

playList::playList()
{
    size = 2;
}


int main()
{
}