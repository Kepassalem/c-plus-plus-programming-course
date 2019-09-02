#include <iostream>

using namespace std;

int num{ 250 };

void localExample(int x);
void globalExample();
void staticLocalExample();

void staticLocalExample() {
	static int num{ 5000 };
	cout << num << endl;
	num += 50;
	cout << num << endl;
}

void localExample(int x) {
	int num{ 100 };

	cout << "\n";
	cout << num << endl;

	num = x;
	cout << num << endl;
}

void globalExample() {
	cout << "\n";
	cout << num << endl;

	num *= 2;
	cout << num << endl;
}

int main() // NOLINT
{
	int num{ 100 };
	int num2{ 200 };

	cout << num << endl;

	{
		int num{ 99 };
		cout << num << endl;
		cout << num2 << endl;
	}

	localExample(10);

	globalExample();
	globalExample();

	staticLocalExample();

	cout << "\n";
	return 0;
}