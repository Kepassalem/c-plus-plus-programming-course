#include <iostream>
#include <cmath>
#include <cstdlib> // gives us rand()
#include <ctime> // gives us time()

using namespace std;

int main() { // NOLINT
	/*double num;

	cout << "enter a number (double)" << endl;
	cin >> num;

	cout << "\nthe sqrt is: " << sqrt(num) << endl;
	cout << "\nthe cubbed root is: " << cbrt(num) << endl;
	cout << "\nthe sine is: " << sin(num) << endl;
	cout << "\nthe cos is: " << cos(num) << endl;

	cout << pow(num, 2) << endl;*/

	// Random numbers
	int randomNumber{};
	size_t count{ 10 };
	int min{ 1 };
	int max{ 6 };
	srand(time(nullptr)); // if not used, you will get the same requence random numbers every run

	cout << "RAND_MAX on my system is: " << RAND_MAX << endl;

	for (size_t i{ 1 }; i <= count; ++i)
	{
		randomNumber = rand() % max + min;
		cout << randomNumber << endl;
	}

	return 0;
}