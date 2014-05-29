//I affirm that all code given below was written solely by me, Shane Nishioka-Healy, and that any help I received adhered to 
//the rules stated for this exam.

#include "Movie.h"
//default movie 
Movie::Movie()
{
	title = "Harry Potter";
	genre = "Action";
	showTime = 1;
}
Movie::Movie(string Title, string Genre, int ShowTime)
{
	title = Title;
	genre = Genre;
	showTime = ShowTime;
}

string Movie::GetTitle()	// Returns the movie title
{
	return title;
}
string Movie::GetGenre()	// Returns the movie genre
{
	return genre;
}
int Movie::GetShowtime()	//When is this movie shown?
{
	return showTime;
}
