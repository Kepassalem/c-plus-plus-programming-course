#include "Player.h"
#include <iostream>

Player::Player(std::string nameVal, int healthVal, int xpVal) :name{ nameVal }, health{ healthVal }, xp{ xpVal } {
	std::cout << "Constructor called" << std::endl;
}