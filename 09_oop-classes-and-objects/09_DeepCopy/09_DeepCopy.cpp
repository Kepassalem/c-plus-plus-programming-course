#include <iostream>
#include "Deep.h"

void displayDeep(Deep s) {
	std::cout << s.getDataValue() << std::endl;
}

int main()
{
	Deep obj1{ 100 };
	displayDeep(obj1);

	Deep obj2{ obj1 };

	return 0;
}