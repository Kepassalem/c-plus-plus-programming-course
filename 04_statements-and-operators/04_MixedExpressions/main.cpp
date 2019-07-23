#include <iostream>

using namespace std;

int main() {
    double result{0.0};
    int numOne {0}, numTwo {0}, numThree{0};
    
    cout << "\nEnter three numbers to see their average ";
    cin >> numOne >> numTwo >> numThree;
    
    result = static_cast<double>(numOne + numTwo + numThree) / 3;
    
    cout << "\nResult is: "<< result<< endl;
    
    
    
    system("PAUSE");
    return 0;
}
