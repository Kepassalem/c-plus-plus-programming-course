#pragma once
#include <string>

using namespace std;

class Player
{
private:
	std::string name;
	int health;
	int xp;

public:
	string getName() const { return name; }
	void setName(string name) { this->name = name; }

	Player();
	Player(string nameVal);
	Player(string nameVal, int healthVal, int xpVal);
};
