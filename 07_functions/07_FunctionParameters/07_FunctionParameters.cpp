#include <iostream>
#include <string>
#include <vector>

using namespace std;

void passByValue(int);
void passByValue2(string);
void passByValue3(vector<string>);
void printVector(vector<string>);

int main() { // NOLINT
	int num{ 10 };

	cout << "\nBefore passByValue: " << num << endl;
	passByValue(num);
	cout << "\nAfter passByValue: " << num << endl;

	vector<string> names{ "Tajib", "Enes", "Ipce" };
	printVector(names);

	return 0;
}

void passByValue(int num) {
	num = 1000;
}

void printVector(vector<string> s) {
	for (auto n : s)
		cout << n << " ";
	cout << endl;
}