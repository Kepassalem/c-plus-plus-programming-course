#include <iostream>

using namespace std;

int main() {
    int num1{}, num2{};
    
    cout << boolalpha;
    
    cout << "Enter two integers separated by a space: ";
    cin >> num1 >> num2;
    
    cout << (num1 > num2) << endl;
    cout << (num1 >= num2) << endl;
    cout << (num1 < num2) << endl;
    cout << (num1 <= num2) << endl;
    
	
    system("PAUSE");
	return 0;
}
