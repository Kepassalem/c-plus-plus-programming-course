#include <iostream>
#include  "Player.h"

using namespace std;

int main()
{
	Player player;
	cout << player.name << endl;

	Player player2{ "Tajib", 15 };
	cout << player2.name << " " << player2.health << endl;

	return 0;
}