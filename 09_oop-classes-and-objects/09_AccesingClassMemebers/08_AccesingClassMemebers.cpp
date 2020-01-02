#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player {
public:
	string name{ "Player" };
	int health{ 99 };
	int xp{ 3 };

	void talk(string say) { cout << name << " says " << say << endl; }
	bool isDead();
};

class Account {
public:
	string name{ "Account" };
	double balance{ 0.0 };

	bool deposit(double bal) { balance += bal; }
	bool withdraw(double bal) { balance -= bal; }
};

int main()
{
	Account myAcc;
	Account exampAcc;

	myAcc.deposit(150);
	myAcc.deposit(79);

	Player tajib;
	tajib.name = "Tajib";
	tajib.health = 99999;
	tajib.xp = 24;
	tajib.talk("Djesteee rajaaa");

	Player hasan;
	hasan.name = "Hasan";
	hasan.health = tajib.health + 100;
	hasan.xp = tajib.xp - 6;

	Player players[]{ tajib, hasan };

	vector<Player> vecPlay{ tajib };
	vecPlay.push_back(hasan);

	Player* kemal = new Player;
	kemal->name = "Kemal";
	kemal->xp = 29;
	kemal->talk("OOOO oooo omladino");

	return 0;
}