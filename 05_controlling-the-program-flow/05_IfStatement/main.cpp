#include <iostream>

using namespace std;

int main() {
    int num{};
    int minNum{};
    int maxNum{};
    
    cout << "Enter a number: ";
    cin >> num;
    
    cout << "\nYou entered " <<num << endl;
    
    if (num > 10) {
        cout << "Number is greater than 10"<< endl;
    } 
    if (num > 100) {
        cout << "Number is greater than 100"<< endl;
    }
    if (num < 10) {
        cout << "Number is smaller than 10"<< endl;
    }
    if (num < 100) {
        cout << "Number is smaller than 100"<< endl;
    }
    if (num == 10) {
        cout << "Number is equal to 10"<< endl;
    }
     if (num == 100) {
        cout << "Number is equal to 100"<< endl;
    }
     if (num >= 10 && num <= 100) {
        cout << "Number is in range betwen 10 and 100"<< endl;
    }
    
	system("PAUSE");
	return 0;
}
