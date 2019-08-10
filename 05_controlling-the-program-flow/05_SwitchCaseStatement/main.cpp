#include <iostream>

using namespace std;

int main() {
    /*char letterGrade {};
    cout << "What letter grade you expect to get on exam? ";
    cin >>letterGrade;
    
    // letterGrade = toupper(letterGrade);
    
    switch(letterGrade){
        case 'A': 
        case 'a': 
            cout << "You need to score 90 or more on exam!"; break;
        case 'B':
        case 'b': 
            cout << "You need to score 80 or more on exam!"; break;
        case 'C':
        case 'c': 
            cout << "You need to score 70 or more on exam!"; break;
        case 'D':
        case 'd': 
            cout << "You need to score 60 or more on exam!"; break;
        case 'F': 
        case 'f': 
        {
            char confirm {};
            cout << "Are you sure (Y/N)? ";
            cin >> confirm;
            switch(confirm) {
                case 'Y':
                case 'y': 
                    cout << "You don't have to study anything"; break;
                case 'N':
                case 'n':
                    cout << "Go study!!"; break;
                 default: cout << "Wrong input"<< endl;
            }
        }
        default: cout << "Wrong input"<< endl;
    }*/
    
    // Switch with enumeration
    
    enum Direction {
        left, right, up, down
    };
    Direction heading {right};
    
    switch(heading) {
        case left:
            cout << "Going left" << endl; break;
        case right:
            cout << "Going right" << endl; break;
        case up:
            cout << "Going up" << endl; break;
        case down:
            cout << "Going down" << endl; break;    
    }
    
	system("PAUSE");
	return 0;
}
