#include "Player.h"
#include <iostream>

using namespace std;

Player::Player() : Player{ "none", 0, 0 } {
	cout << "Player()" << endl;
}

Player::Player(string nameVal) : Player{ nameVal, 0, 0 } {
	cout << "Player(string nameVal)" << endl;
}

Player::Player(string nameVal, int healthVal, int xpVal) : name{ nameVal }, health{ healthVal }, xp{ xpVal } {
	cout << "Player(string nameVal, int healthVal, int xpVal)" << endl;
}