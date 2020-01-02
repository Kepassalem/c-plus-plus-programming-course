#pragma once
#include  <vector>
#include <string>
#include "Movie.h"

using namespace std;

class Movies
{
private:
	std::vector<Movie> movies;
public:
	Movies();
	Movies(const Movies& source);
	~Movies();

	bool addMovie(string name, string rating, int watched);
	bool incrementWatchedCount(string name);
	void displayMovies() const;
};
