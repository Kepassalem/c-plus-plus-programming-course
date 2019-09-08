#include <iostream>

using namespace std;

int main()
{
	int scores[]{ 100, 200, 300, 400, 500 };
	int* p1{ scores };

	while (*p1 != 500) {
		cout << *p1 << endl;
		p1++;
	}


	p1 = scores;
	while (*p1 != 500)
		cout << *p1++ << endl;

	return 0;
}