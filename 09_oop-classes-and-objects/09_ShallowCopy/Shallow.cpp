#include "Shallow.h"
#include <ostream>
#include <iostream>

Shallow::Shallow(int d) {
	data = new int;
	*data = d;
}

Shallow::Shallow(const Shallow& source) :data{ source.data } {
	std::cout << "Copy COnstructor - shallow copy" << std::endl;
}

Shallow::~Shallow() {
	delete data;
	std::cout << "Destructor freeing data" << std::endl;
}