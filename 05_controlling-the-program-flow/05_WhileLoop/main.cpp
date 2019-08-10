#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int i{0};
    int num {};
    bool done {false};
    
    /*while( i<= 6) {
        cout << i<< endl;
         ++i;
    }*/
    
    
    cout << "Enter number less than 100: ";
    cin >> num;
    
    while(!done) {
        cout << "Enter number less than 100: ";
        cin >> num;
        
        if (num < 100) 
            done = true;
            cout << "Good";
    }
    
    cout << "\n";
	system("PAUSE");
	return 0;
}
