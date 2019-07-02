// Create a C++ program that asks the user for their favourite number between 1 and 100 then reads this number in the console.

#include <iostream>

using namespace std;

int main()
{
    int favourite_number;
    
	cout <<"Enter your favourite number: ";
    cin>> favourite_number;
    cout << "Your favourite number is "<< favourite_number<< endl;
    
    system("PAUSE");
	return 0;
}
