#include <iostream>

using namespace std;

int main() {
    int num{};
    int target {100};
    
    cout << "Enter a number: ";
    cin >> num;
    
    cout << "\nYou entered " <<num << endl;
    
    if (num > target) {
        cout << num << " is greater than " << target << endl;
    } else {
        cout << num << " is less than " << target << endl;
    }
    
	system("PAUSE");
	return 0;
}
