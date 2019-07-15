// This program will calculate area of a room

#include <iostream>

using namespace std;

int roomWidth{0}; // Global variable

int main() {
    int roomLenght{0};
    
    cout << "Enter room width: ";
    cin >> roomWidth;
    
     cout << "Enter room lenght: ";
    cin >> roomLenght;
    
    cout << "Area of a room is "<<roomLenght * roomWidth << " square meters"<< endl;
}
