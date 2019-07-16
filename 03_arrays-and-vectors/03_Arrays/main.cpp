#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    char vowels[] {'a', 'e', 'i', 'o', 'u'};
    cout << "The first vowel is: " <<vowels[0] <<endl;
    cout << "The last vowel is: " <<vowels[4] <<endl;
    
    
    double temperatures[] {90.1, 89.8, 77.5, 81.6};
    cout << "\nThe first temperature is: "<< temperatures[0]<< endl;
    temperatures[0] = 108.4;
    cout << "The first temperature now is: "<< temperatures[0]<< endl;
    
    
    int scores[5] {0};
    cout << scores[0]<< endl;
    cout << scores[1]<< endl;
    cout << scores[2] << endl;
    cout << scores[3] << endl;
    cout << scores[4] << endl;
    
    cout << "\nEnter 5 test scores!\n ";
    cin >> scores[0] >> scores[1] >> scores[2] >> scores[3] >> scores[4];
    
    cout << "\nThe scores you entered are: "<<endl;
    cout << scores[0]<< endl;
    cout << scores[1]<< endl;
    cout << scores[2] << endl;
    cout << scores[3] << endl;
    cout << scores[4] << endl;
    
    
    cout << "Array name is : "<< scores<<endl;
    
    system("PAUSE");
    return 0;
}