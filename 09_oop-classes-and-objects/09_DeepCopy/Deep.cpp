#include "Deep.h"
#include <ostream>
#include <iostream>

Deep::Deep(int d) {
	data = new int;
	*data = d;
}

Deep::Deep(const Deep& source) : Deep{ *source.data } {
	std::cout << "Copy COnstructor - deep copy" << std::endl;
}

Deep::~Deep() {
	delete data;
	std::cout << "Destructor freeing data" << std::endl;
}