#include <iostream>
#include "song.h"
using namespace std;
class playList
{
private:
	int size, currentSongIndex, noOfSongs, playindex; //declaring variables
	Song *PlayList;	//declaring song class pointer
	Song empty;	//  declaring song class object

public:
	playList();		//default constructor
	~playList();	//default destructor
	void AddSong(const Song& s);	//AddSong method prototype
	bool DeleteSong(const Song& s);	//DeleteSong method prototype
	void ShowAll() const;	//Showall method prototype
	void play(int num = 1);	//Play method prototype
	void ShowStatus() const;	//ShowStatus method prototype
	void doublesize();	//doublesize method prototype
	void halfsize();	//halfsize method prototype
	playList& operator+(Song& s);	//+ operator overload prototype
	playList& operator-(Song& s);	//- operator overload prototype
};
