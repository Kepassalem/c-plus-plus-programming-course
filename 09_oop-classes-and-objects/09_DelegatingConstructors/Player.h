#pragma once
#include <string>
#include <iostream>

class Player
{
public:
	std::string name;
	int health;
	int xp;

	Player();
	Player(std::string nameVal);
	Player(std::string nameVal, int healtVal, int xpVal);

	~Player() {
		std::cout << "Dereferencing" << std::endl;
	}
};
