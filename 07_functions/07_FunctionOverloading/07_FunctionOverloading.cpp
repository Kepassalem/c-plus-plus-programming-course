#include <iostream>
#include <string>
#include <vector>

using namespace std;

void print(int);
void print(double);
void print(string);
void print(string, string);
void print(vector<string>);

void print(int num) { cout << "\nPrinting int: " << num << endl; }
void print(double num) { cout << "\nPrinting double: " << num << endl; }
void print(string s) { cout << "\nPrinting string: " << s << endl; }
void print(string s, string t) { cout << "\nPrinting strings: " << s << " and " << t << endl; }
void print(vector<string> v) {
	cout << "\nPrinting vector of strings: ";
	for (auto s : v)
		cout << s << " ";
}

int main() // NOLINT
{
	print(25);
	print(16.2);
	print("Hellouuu");
	print("Hello", "There");
	print({ "Tajib", "Hasan", "Kemal" });

	return 0;
}