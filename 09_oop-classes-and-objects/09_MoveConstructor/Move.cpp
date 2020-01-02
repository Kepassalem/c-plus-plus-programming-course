#include "Move.h"
#include <ostream>
#include <iostream>

using namespace std;

Move::Move(int d) {
	data = new int;
	*data = d;
	std::cout << "Constructor for: " << d << std::endl;
}

Move::Move(const Move& source) : Move{ *source.data } {
	cout << "Copy constructor - deep copy for: " << *data << endl;
}

Move::Move(Move&& source) noexcept :data{ source.data } {
	source.data = nullptr;
	cout << "Move constructor - moving resource: " << *data << endl;
}

Move::~Move() {
	if (data != nullptr) {
		cout << "Destructor called for: " << *data << endl;
	}
	else { cout << "nullptr" << endl; }

	delete data;
}