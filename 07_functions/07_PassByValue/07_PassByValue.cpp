#include <iostream>
#include <string>
#include <vector>

using namespace std;

void passByRef(vector<string>& str);
void passByRef(vector<string>& str) {
	for (size_t i{ 0 }; i < str.size(); ++i) {
		str.at(i) += " passByRef ";

		cout << str.at(i) << endl;
	}
}

int main() // NOLINT
{
	vector<string> names{ "Tajib", "Hasan", "Kemal" };

	passByRef(names);

	return 0;
}