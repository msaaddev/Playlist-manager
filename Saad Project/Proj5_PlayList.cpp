#include "pch.h"
#include <iostream>
#include "proj5_playlist.h"
#include "song.h"
using namespace std;

playList::playList()	//default constructor
{
	playindex = 0;
	currentSongIndex = 0;
	noOfSongs = 0;
	size = 2;
	PlayList = new Song[size];	//dynamic object of Song class
}

playList::~playList()	//default destructor
{
	delete[]PlayList;
}

void playList::AddSong(const Song& s)	//AddSong method definition
{

	*(PlayList+currentSongIndex) = s;
	currentSongIndex++;
	noOfSongs++;
	this->doublesize();
}

bool playList::DeleteSong(const Song& s) //DeleteSong method definition
{
	bool checkForDeletion = false;
	int i;
	for (i = 0; i < currentSongIndex; i++)
	{
		if (*(PlayList+i) == s)
		{
			for (i; i < currentSongIndex; i++)
			{
				*(PlayList + i) = *(PlayList + (i+1));
			}
			checkForDeletion = true;
		}
		noOfSongs = currentSongIndex - 1;
	}

	i -= 2;
	if (checkForDeletion)
	{
		this->halfsize();

		if (PlayList[1] == empty)
			size = 2;

		if (currentSongIndex > size)
			currentSongIndex = 0;
	}

	return checkForDeletion;
}

void playList::ShowAll() const	//Showall method definition
{
	cout << "   ************ Following are the songs that are currently in the playlist: ************   " << endl << endl;
	for (int i = 0; i < currentSongIndex; i++)
	{
		cout << *(PlayList + i) << endl;
	}
}

void playList::play(int num)	//Play method definition
{
	for (int i = 0; i < num; i++)
	{
		cout << *(PlayList+playindex) << endl;
		playindex++;
		if (playindex == noOfSongs)
		{
			playindex = 0;
		}
	}

}

void playList::doublesize()	//doublesize method definition
{
	int new_size = size * 2;
	Song *temp = new Song[new_size];
	for (int g = 0; g < size; g++)
	{
		temp[g] = PlayList[g];
	}
	this->size = new_size;
	PlayList = temp;
}

void playList::halfsize()	//halfsize method definition
{
	int new_size = size / 2;
	Song *temp = new Song[new_size];
	for (int g = 0; g < new_size; g++)
	{
		temp[g] = PlayList[g];
	}
	this->size = new_size;
	PlayList = temp;
}

void playList::ShowStatus() const	//ShowStatus method definition
{
	cout << "Size of the song array: " << size << endl;
	cout << "No of Songs in the array: " << noOfSongs << endl;
	cout << "Current song index in array: " << currentSongIndex << endl;
}

playList& playList::operator+(Song& s)	//+operator overloaded definition
{
	AddSong(s);
	return *this;
}

playList& playList::operator-(Song& s) //-operator overloaded definition
{
	DeleteSong(s);
	return *this;
}