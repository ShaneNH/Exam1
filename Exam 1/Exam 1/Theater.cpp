//I affirm that all code given below was written solely by me, Shane Nishioka-Healy, and that any help I received adhered to 
//the rules stated for this exam.

#include "Theater.h"
#include "Movie.h"
#include <iostream>
#include <string>

Theater::Theater(string Name, string Phone)	//The name for this theater
{
	name = Name;
	phone = Phone;
	size = 0;
}
void Theater::AddMovie(Movie& Movie)		//Add a movie at a specific time
{
	movies[size] = Movie;
	size++;
}
string Theater::GetMovieForHour(int hour)		// What movie is shown at the given hour?
{
	if (hour<0)
		return "";
	for (int i = 0; i<size; i++)
	{
		if (movies[i].GetShowtime() >= hour)
			return movies[i].GetTitle();
	}
	return "";
}
//   Return "" if none are upcoming
int Theater::GetShowTimeForGenre(string Genre)	//When will the movie of the given genre be shown?
{
	for (int i = 0; i<size; i++)
	{
		if (movies[i].GetGenre() == Genre)
			return movies[i].GetShowtime();
	}
	return -1;  //Return -1 if none exist
}

int Theater::GetPopcornPrice()		
{
	return popcornPrice;
}
int Theater::GetCokePrice()
{
	return cokePrice;
}