#include <iostream>

using namespace std;

int main() {
    const int lower{10}, upper{20};
    int num{};
    
    cout << boolalpha;
	
    cin >> num;
    
    
    bool withinBounds{};
    withinBounds = (num > lower && num < upper);
    /*withinBounds = (num >= lower && num <= upper);
    withinBounds = (num > lower || num < upper);*/ 
    cout << withinBounds << endl;
    
    system("PAUSE");
	return 0;
}
