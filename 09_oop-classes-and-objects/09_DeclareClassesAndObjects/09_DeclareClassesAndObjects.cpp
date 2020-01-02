#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player {
	string name{ "Player" };
	int health{ 99 };
	int xp{ 3 };

	void talk(string);
	bool isDead();
};

class Account {
	string name{ "Account" };
	double balance{ 0.0 };

	bool deposit(double);
	bool withdraw(double);
};

int main()
{
	Account myAcc;
	Account exampAcc;

	Player tajib;
	Player hasan;

	Player players[]{ tajib, hasan };

	vector<Player> vecPlay{ tajib };
	vecPlay.push_back(hasan);

	Player* kemal{ nullptr };
	kemal = new Player;

	return 0;
}