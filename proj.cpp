#include <iostream>
#include "song.cpp"
#include <cstring>
using namespace std;

class playList
{
private:
    int size, noOfSongs, currentSongIndex = 0;
    Song *PlayList = new Song[size];
    Song empty;

public:
    playList();
    void AddSong(const Song &s);
    bool DeleteSong(const Song &s);
    void ShowAll() const;
    void play(int num = 1);
    void ShowStatus() const;
    void doublesize();
};

playList ::playList()
{
    size = 2;
    for (int i = 0; i < size; i++)
    {
        PlayList[i] = empty;
    }
}

void playList ::AddSong(const Song &s)
{
    PlayList[currentSongIndex] = s;
    currentSongIndex++;
}

bool playList ::DeleteSong(const Song &s)
{
    bool checkForDeletion = false;
    int i;
    for (i = 0; i < currentSongIndex; i++)
    {
        if (PlayList[i] == s)
        {
            for (i; i < currentSongIndex; i++)
            {
                PlayList[i] = PlayList[i + 1];
            }
            checkForDeletion = true;
        }
    }

    i -= 2;
    if (checkForDeletion)
    {
        if ((size / 2) != i)
            size = i * 2;

        if (PlayList[1] == empty)
            size = 2;

        if (currentSongIndex > size)
            currentSongIndex = 0;
    }

    return checkForDeletion;
}

void playList ::ShowAll() const
{
    cout << "   ************ Following are the songs that are currently in the playlist: ************   " << endl;
    for (int i = 0; i < currentSongIndex; i++)
    {
        cout << PlayList[i] << endl;
    }
}

void playList ::play(int num)
{
    int x;
    for (num; num < currentSongIndex; num++)
    {
        x = num + 1;
        cout << PlayList[num] << endl;
        if (x == currentSongIndex)
        {
            num = 0;
        }
    }
}

void playList::doublesize()
{
    if (size == noOfSongs)
    {
        size *= 2;
    }
    else if (noOfSongs < (size / 2))
    {
        if (size != 2)
        {
            size /= 2;
        }
    }
}

void playList::ShowStatus() const
{
    cout << "Size of the song array: " << size << endl;
    cout << "No of Songs in the array: " << noOfSongs << endl;
    cout << "Current song index in array: " << currentSongIndex << endl;
}

int main()
{
    cout << "Testing";
}