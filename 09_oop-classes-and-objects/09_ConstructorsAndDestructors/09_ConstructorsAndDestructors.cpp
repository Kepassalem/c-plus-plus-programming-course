#include <iostream>
#include "Player.h"

int main()
{
	Player test;
	test.setName("Test");

	Player test2(
		"Test2", 100, 10
	);

	Player* test3 = new Player;
	test3->setName("Test3");

	delete test3;

	return 0;
}