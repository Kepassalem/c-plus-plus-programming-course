#include "Player.h"
#include <iostream>

Player::Player() :Player{ "None", 0, 0 } {
	std::cout << "No args" << std::endl;
}
Player::Player(std::string nameVal) : Player{ nameVal, 0, 0 } {
	std::cout << "String arg" << std::endl;
}
Player::Player(std::string nameVal, int healtVal, int xpVal) : name{ nameVal }, health{ healtVal }, xp{ xpVal } {
	std::cout << "3 args" << std::endl;
}