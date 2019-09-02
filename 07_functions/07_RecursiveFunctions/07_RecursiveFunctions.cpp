#include <iostream>

using namespace std;

unsigned long long fibonacci(unsigned long long n);
unsigned long long factorial(unsigned long long n);

unsigned long long fibonacci(unsigned long long n) {
	if (n <= 1)
		return n;

	return fibonacci(n - 1) + fibonacci(n - 2);
}

unsigned long long factorial(unsigned long long n) {
	if (n == 0)
		return 1;

	return n * factorial(n - 1);
}

int main() // NOLINT
{
	cout << fibonacci(5) << endl;
	cout << fibonacci(10) << endl;
	cout << fibonacci(20) << endl;

	cout << factorial(5) << endl;
	cout << factorial(10) << endl;
	cout << factorial(20) << endl;

	return 0;
}