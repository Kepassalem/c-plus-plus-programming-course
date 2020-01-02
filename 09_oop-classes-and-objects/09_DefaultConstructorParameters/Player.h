#pragma once
#include <string>

class Player
{
public:
	std::string name;
	int health;
	int xp;

public:
	Player(std::string nameVal = "None", int healthVal = 0, int xpVal = 0);
};
