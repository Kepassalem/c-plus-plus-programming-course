#pragma once
#include <string>
#include <iostream>

class Player
{
public:
	std::string name;
	int health;
	int xp;

public:
	std::string getName() { return name; }
	int getHealth() { return health; }
	int getXp() { return xp; }
	void displayPlayer(Player p);

	Player(std::string nameVal = "None", int healthVal = 0, int xpVal = 0);

	// Copy Constructor
	Player(const Player& source);

	~Player() { std::cout << "Destructor called for: " << name << std::endl; }
};
