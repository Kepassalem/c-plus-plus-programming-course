#include <iostream>
#include "Player.h"

using namespace std;

void displayActivePlayers() {
	cout << "\nActive players: " << Player::getNumPlayers();
}

int main()
{
	displayActivePlayers();
	Player newPlayer{ "Hero" };

	{
		Player test{ "test" };
		displayActivePlayers();
	}

	displayActivePlayers();

	Player* enemy = new Player{ "Enemy", 100, 100 };
	cout << enemy << endl;
	cout << (*enemy).xp << endl;
	delete enemy;
}