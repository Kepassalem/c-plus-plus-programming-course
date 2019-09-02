#include <iostream>

using namespace std;

double calcCost(double cost, double tax = 0.06, double pack = 3.5);

double calcCost(double cost, double tax, double pack) {
	return cost += (cost * tax) + pack;
}

int main()
{
	cout << calcCost(10);
	return 0;
}