#include <iostream>
#include "Shallow.h"

void displayShallow(Shallow s);
void displayShallow(Shallow s) {
	std::cout << s.getDataValue() << std::endl;
}

int main()
{
	/*int n{ 10 };
	int* test = nullptr;
	std::cout << test << std::endl;

	test = &n;
	std::cout << test << std::endl;
	std::cout << *test << std::endl;*/

	Shallow obj1{ 100 };
	displayShallow(obj1);

	return 0;
}