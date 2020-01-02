#include <iostream>
#include <string>

using namespace std;

class  Player {
private:
	string name = "Test";
	int health;

public:
	void talk(string say) { cout << name << " says " << say << endl; }
	bool isDead();
};

int main()
{
	Player player;

	player.talk(" OOOO ooOOO OOO O O O OOo");

	return 0;
}