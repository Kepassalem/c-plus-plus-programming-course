#pragma once
#include <string>

class Player
{
public:
	std::string name;
	int age;
	int xp;

	Player();
	Player(std::string nameVal);
	Player(std::string nameVal, int healthVal, int xpVal);
};
