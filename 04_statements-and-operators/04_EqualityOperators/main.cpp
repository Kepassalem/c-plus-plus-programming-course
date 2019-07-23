#include <iostream>

using namespace std;

int main() {
    bool equalResult {false};
    bool notEqualResult {false};
    
    int num1{}, num2{};
    
    cout << boolalpha;
    
    cout << "Enter two integers separated by a space: ";
    cin >> num1 >> num2;
    equalResult = (num1 == num2);
    notEqualResult = (num1 != num2);
    cout << "Comparison result (equals): "<< equalResult << endl;
    cout << "Comparison result (not equals): "<< notEqualResult << endl;
    
	
    system("PAUSE");
	return 0;
}
