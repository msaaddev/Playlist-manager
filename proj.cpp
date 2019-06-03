#include <iostream>
#include "song.cpp"
#include <cstring>
using namespace std;

class playList
{
private:

    int size, noOfSongs, currentSongIndex;
    Song *songs = new Song[size];

public:

    playList ();
    void AddSong ( const Song &s );
    bool DeleteSong ( const Song &s );
    void ShowAll ( ) const;
    void play ( int num = 1 );
    void ShowStatus ( ) const;
    void doublesize ( );
};

playList :: playList( )
{
    size = 2;
}

void playList :: AddSong ( const Song &s )
{

}

bool playList :: DeleteSong ( const Song &s )
{

}

void playList :: ShowAll ( ) const
{

}

void playList :: play ( int num )
{

}

void playList::doublesize ()
{
    if (size == noOfSongs)
    {
        size = size*=2;
    }
    else if (noOfSongs < (size/2))
    {
        if(size != 2)
        {
            size/=2;
        }
    }
}

void playList:: ShowStatus ( ) const
{
    cout << "Size of the song array: " << size << endl;
    cout << "No of Songs in the array: " << noOfSongs << endl;
    cout << "Current song index in array: " << currentSongIndex << endl;
}

int main()
{
}