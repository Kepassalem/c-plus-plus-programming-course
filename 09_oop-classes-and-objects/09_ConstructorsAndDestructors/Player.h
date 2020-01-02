#pragma once
#include <string>
#include <iostream>

class Player
{
private:
	std::string name;
	int health;
	int xp;

public:
	void setName(std::string nameVal);

	Player() {
		std::cout << "No args" << std::endl;
	}

	Player(std::string name) {
		std::cout << "String arg" << std::endl;
	}
	Player(std::string name, int health, int xp) {
		std::cout << "All arg" << std::endl;
	}
	~Player() {
		std::cout << "Destructor called for" << name << std::endl;
	}
};
