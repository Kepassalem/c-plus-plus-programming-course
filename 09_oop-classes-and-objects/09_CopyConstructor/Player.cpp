#include "Player.h"

Player::Player(std::string nameVal, int healthVal, int xpVal) : name{ nameVal }, health{ healthVal }, xp{ xpVal } {
	std::cout << "Constructor called for " << name << std::endl;
}

Player::Player(const Player& source) : name{ source.name }, health{ source.health }, xp{ source.xp } {
	std::cout << "Copy constructor by: " << source.name << std::endl;
}

void Player::displayPlayer(Player p) {
	std::cout << "Name: " << p.getName() << std::endl;
	std::cout << "Health: " << p.getHealth() << std::endl;
	std::cout << "XP: " << p.getXp() << std::endl;
}