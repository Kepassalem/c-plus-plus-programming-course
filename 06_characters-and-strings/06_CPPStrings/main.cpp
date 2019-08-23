#include <iostream>
#include <string>

using namespace std;

int main() {
   string s1 {"myString"};
    
    
    for (size_t i{0}; i < s1.length(); ++i)
        cout << s1.at(i) << endl;
    
    cout << "\n";
    system("PAUSE");
	return 0;
}
