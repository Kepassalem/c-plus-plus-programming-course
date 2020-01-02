#pragma once
#include <string>

using namespace std;

class Movie
{
private:
	std::string name;
	std::string rating;
	int watched;

public:
	Movie(std::string name, std::string rating, int watched); // Constructor
	Movie(const Movie& source); // Copy constructor
	~Movie();

	void setName(std::string name) { this->name = name; }
	string getName() const { return name; }

	void setRating(string rating) { this->rating = rating; }
	string getRating() const { return rating; }

	void setWatched(int watched) { this->watched = watched; }
	int getWatched() const { return watched; }

	void incrementWatched() { ++watched; }
	void display() const;
};
