#include <iostream>
#include  "Player.h"

int main()
{
	Player test;
	Player test2{ "Tajib", 25, 19 };
	std::cout << test.getName() << std::endl;
	std::cout << test2.getName() << std::endl;

	return 0;
}