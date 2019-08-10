#include <iostream>

using namespace std;

int main() {
    /*int num {};
    
    cout << "Enter a number: ";
    cin >> num;
    
   // ( (num % 2 == 0) ?  cout << "\nNumber you entered is even"  : cout << "\nNumber you entered is odd") << endl;
   cout <<( (num % 2 == 0) ?  "\nNumber you entered is even" :  "\nNumber you entered is odd") << endl;*/
   
   int numOne{}, numTwo{};
   
   cout << "Enter two numbers: ";
   cin >> numOne >> numTwo;
   
   if(numOne != numTwo) {
       cout << "Largerst: " << ((numOne > numTwo) ? numOne : numTwo) << endl;
       cout << "Smallest: " << ((numOne < numTwo) ? numOne : numTwo) << endl;
   } else 
       cout << "\nThe numbers are the same!" << endl;
    
	system("PAUSE");
	return 0;
}
