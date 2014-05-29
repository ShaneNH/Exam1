//I affirm that all code given below was written solely by me, Shane Nishioka-Healy, and that any help I received adhered to 
//the rules stated for this exam.


#ifndef Movie_Movie_h
#define Movie_Movie_h
#include <string>
using namespace std;
class Movie
{
private:
	string title;
	string genre;
	int showTime;
public:
	Movie();
	Movie(string Title, string Genre, int ShowTime);
	string GetTitle();	// Returns the movie title
	string GetGenre();	// Returns the movie genre
	int GetShowtime();	//When is this movie shown?
};

#endif