#include <iostream>
#include "Movies.h"

void addMovie(Movies& movies, string name, string rating, int watched) {
	if (movies.addMovie(name, rating, watched))
		cout << "Movie added!" << endl;
	else
		cout << "Movie already added!" << endl;
}

void increment(Movies& movies, string name) {
	if (movies.incrementWatchedCount(name)) {
		cout << "Incremented!!" << endl;
	}
	else { cout << "Movie doesn't exist!"; }
}

int main()
{
	Movies myMovies;

	addMovie(myMovies, "Test", "PG12", 2);
	addMovie(myMovies, "Test2", "PG16", 4);
	addMovie(myMovies, "Test3", "PG12", 6);

	myMovies.displayMovies();

	increment(myMovies, "Test");
	// increment(myMovies, "Hello");

	myMovies.displayMovies();
	return 0;
}