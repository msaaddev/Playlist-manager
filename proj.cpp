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

};

playList::playList()
{
    size = 2;
}


int main()
{
}