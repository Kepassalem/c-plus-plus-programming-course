#include <iostream>

using namespace std;

int main() {
	int cents{0};
    int balance{0};
    const int dollars{100};
    const int quarters{25};
    const int dime{10};
    const int nickel{5};
    // const int penny{1};
    
    cout << "\nEnter number of cents: ";
    cin >> cents;
    
    cout << "\nDollars: "<< (cents / dollars );
    cout << "\nQuarters: "<< (balance = cents % dollars) / quarters ;
    cout << "\nDime: "<< (balance %= quarters) / dime ;
    cout << "\nNickel: "<< (balance %= dime) / nickel ;
    cout << "\nPenny: "<< (balance %= nickel) << endl;;
    
    system("PAUSE");
	return 0;
}
