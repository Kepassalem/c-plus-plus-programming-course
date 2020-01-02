#include <iostream>
#include "Player.h"

int main()
{
	Player test;
	std::cout << test.name << std::endl;
	std::cout << test.age << std::endl;
	std::cout << test.xp << std::endl;

	Player test2{ "Test" };
	std::cout << test2.name << std::endl;
	std::cout << test2.age << std::endl;
	std::cout << test2.xp << std::endl;

	Player test3{ "Test3", 52, 36 };
	std::cout << test3.name << std::endl;
	std::cout << test3.age << std::endl;
	std::cout << test3.xp << std::endl;

	return 0;
}