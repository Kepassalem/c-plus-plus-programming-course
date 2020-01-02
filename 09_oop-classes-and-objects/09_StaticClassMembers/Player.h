#pragma once
#include <string>
class Player
{
private:
	static int numPlayers;
	std::string name;
	int health;

public:
	int xp;
	std::string getName() { return name; }
	int getHealth() { return health; }
	int getXp() { return xp; }

	Player(std::string nameVal = "None", int healthVal = 0, int xpVal = 0);

	// Copy Constructor
	Player(const Player& source);

	// Destructor
	~Player();

	static int getNumPlayers();
};
