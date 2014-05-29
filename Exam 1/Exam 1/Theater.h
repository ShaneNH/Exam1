
#ifndef Movie_Theater_h
#define Movie_Theater_h
#include <string>
#include "Movie.h"
//I affirm that all code given below was written solely by me, Shane Nishioka-Healy, and that any help I received adhered to 
//the rules stated for this exam.

using namespace std;
class Theater
{
private:
	string name;
	string phone;
	int popcornPrice;
	int cokePrice;
	Movie movies[50];
	int size;
public:
	Theater(string Name, string Phone);	//The name for this theater
	void AddMovie(Movie& Movie);		//Add a movie at a specific time
	string GetMovieForHour(int hour);		// What movie is shown at the given hour?
	int GetShowTimeForGenre(string Genre);	//When will the movie of the given genre be shown?
	int GetPopcornPrice();			
	int GetCokePrice();

};

#endif