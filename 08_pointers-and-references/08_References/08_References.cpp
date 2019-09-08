#include <iostream>
#include <vector>;
#include <string>;

using namespace std;

void change(vector<string> &names);
void display(vector<string> names);

void change(vector<string>& names) {
	for (auto &s : names)
		s = "Test";
}

void display(vector<string> names) {
	for (auto s : names)
		cout << s << " ";
}


int main()
{
	vector<string> names{ "Tajib", "Hasan", "Kemal" };

	for (auto& str : names)
		str = "Testing";
	for (auto const& s : names)
		cout << s << " ";

	change(names);
	display(names);


	int num{ 10 };
	int& ref{ num };

	int* p{ &num };
	int& r = *p;
	
	cout << p << endl;
	cout << r << endl;

	cout << num << endl;
	cout << ref << endl;

	ref = 20;
	cout << num << endl;
	cout << ref << endl;
	
	return 0;
}