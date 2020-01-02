#include "Player.h"

Player::Player() : name{ "None" }, age{ 0 }, xp{ 0 } {}
Player::Player(std::string nameVal) : name{ nameVal }, age{ 0 }, xp{ 0 } {}
Player::Player(std::string nameVal, int healthVal, int xpVal) : name{ nameVal }, age{ healthVal }, xp{ xpVal }{}