#include <iostream>

using namespace std;

int main() {
    int num {};
    char selection {};
    
    /*do {
        cout << "Enter number between 1 and 10: ";
        cin >> num;
    } while (num >= 1 && num <= 10);*/
    
    
    do {
        int width{}, height {};
        
        cout << "Enter width and height: ";
        cin >> width >> height;
        
        double area {width * height};
        
        cout << "\nArea is " << area;
        
        cout << "\nCalculate again? ";
        cin >> selection;
        selection = toupper(selection);
    } while (selection == 'Y');
    
    cout << "Okay";
    
    cout << "\n";
	system("PAUSE");
	return 0;
}
