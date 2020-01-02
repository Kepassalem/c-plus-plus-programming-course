#pragma once
#include <string>

class Player
{
private:
	std::string	name;
	int health;
	int xp;

public:
	Player() {
		name = "No name";
		health = 0;
		xp = 0;
	}
	Player(std::string nameVal, int healthVal, int xpVal) {
		name = nameVal;
		health = healthVal;
		xp = xpVal;
	}

	void setName(std::string val);
	std::string getName();
};
