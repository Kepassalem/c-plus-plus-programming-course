#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	int score{ 10 };
	int *p1{ &score };

	cout << *p1 << endl;
	*p1 = 20;
	cout << *p1 << endl;
	cout << score << endl;


	double temp1{ 121.8 };
	double temp2{ 24.6 };
	double* p2{ &temp1 };

	cout << *p2 << endl;
	p2 = &temp2;
	cout << *p2 << endl;


	string name{ "Tajib" };
	string* p3{ &name };

	cout << *p3 << endl;
	name = "Hasan";
	cout << *p3 << endl;


	vector<string> list{ "Tajib", "Hasan", "Kemal" };
	vector<string>* p4{ &list };

	cout << (*p4).at(0) << endl;

	for (auto s : *p4)
		cout << s << " ";

	
	
	cout << "\n";
	return 0;
}