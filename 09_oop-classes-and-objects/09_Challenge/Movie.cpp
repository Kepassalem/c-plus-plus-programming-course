#include "Movie.h"
#include  <iostream>

Movie::Movie(std::string name, std::string rating, int watched) : name{ name }, rating{ rating }, watched{ watched } {
}

Movie::Movie(const Movie& source) : name{ source.name }, rating{ source.rating }, watched{ source.watched } {
	// cout << "MOVIE copy const. called" << endl;
}

Movie::~Movie() {
}

void Movie::display() const {
	cout << name << " " << rating << " " << watched << endl;
}