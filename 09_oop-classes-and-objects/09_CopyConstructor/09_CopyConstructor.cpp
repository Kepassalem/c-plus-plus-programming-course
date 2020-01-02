#include <iostream>
#include "Player.h"

int main()
{
	Player empty;
	empty.displayPlayer(empty);
	empty = { "Tajib", 0, 0 };
	empty.displayPlayer(empty);
}