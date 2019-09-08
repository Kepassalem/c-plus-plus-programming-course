#include <iostream>

using namespace std;

int main() {
	int *p1{ nullptr };
	p1 = new int;
	cout << p1 << endl;
	delete p1;


	size_t size{ 0 };
	double* p2{ nullptr };

	cin >> size;

	p2 = new double[size];
	cout << p2 << endl;
	delete[] p2;



	
	return 0;
}