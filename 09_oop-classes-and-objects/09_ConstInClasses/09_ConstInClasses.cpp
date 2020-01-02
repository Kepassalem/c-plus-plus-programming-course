#include <iostream>
#include "Player.h"

using namespace std;

void displayPlayer(const Player& p) { cout << p.getName(); }

int main()
{
	// Player player;
	Player player1{ "test" };
	const Player player2{ "test2", 10, 12 };

	displayPlayer(player2);

	return 0;
}