// Saad Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <iostream>
#include "song.h"
#include "proj5_playlist.h"
#include <cstring>
using namespace std;

int main()
{
	Song s("Hello hello", "HI HI");	//song object created
	Song s2("ABCDEF", "GHI"); //song object created
	Song s3("My name is Saad", "Saad"); //song object created
	Song s4("Closer", "Chainsmokers");

	playList obj; //playlist object created
	obj.AddSong(s2); //Adding song
	obj.AddSong(s3); //Adding Song
	obj = obj + s; //Adding song
	obj.AddSong(s4);
	obj.ShowAll();   //showing playlist
	//obj = obj - s;   //deleting a song from playlist
	//obj.ShowAll();   //showing playlist
	//obj.play(5);
}