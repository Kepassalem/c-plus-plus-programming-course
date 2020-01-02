#include "Movies.h"
#include <iostream>

Movies::Movies() {
}

Movies::~Movies() {
}

bool Movies::addMovie(string name, string rating, int watched) {
	for (const Movie& movie : movies)
		if (movie.getName() == name) return false;

	movies.push_back(Movie{ name, rating, watched });
	return true;
}

bool Movies::incrementWatchedCount(string name) {
	for (Movie& movie : movies)
		if (movie.getName() == name) {
			movie.incrementWatched();
			return true;
		}
		else { return false; }
}

void Movies::displayMovies() const {
	if (movies.size() == 0) {
		cout << "No movies added!" << endl;
	}
	else {
		for (Movie movie : movies) {
			cout << movie.getName() << " " << movie.getRating() << " " << movie.getWatched() << endl;
		}
	}
}