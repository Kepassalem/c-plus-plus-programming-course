#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
    const double smallRoomPrice {25.0};
    const double bigRoomPrice {35.0};
    const double tax {0.06};
    
    int smallRooms{0};
    int bigRooms{0};
    
    cout<< "How many small rooms whould you like cleaned: ";
    cin>> smallRooms;
    cout << "How many big rooms whould you like cleaned: ";
    cin >> bigRooms;
    
    cout<<"\nNumber of small rooms entered: " << smallRooms <<endl;
    cout<<"Number of big rooms entered: " << bigRooms <<endl;
    
    cout << "Small room price: " << smallRoomPrice << "KM"<< endl;
    cout << "Big room price: " << bigRoomPrice << "KM"<< endl;
    
    cout << "________________________________________________________\n";
    
    double cost = (smallRoomPrice * smallRooms) + (bigRoomPrice * bigRooms);
    double costWithTax = cost + cost * tax;
    
    cout << "Total cost with tax: " << costWithTax << "KM\n";

    system("PAUSE");
    return 0;
}