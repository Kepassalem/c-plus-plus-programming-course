#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector <int> vectorOne;
    vector <int> vectorTwo;
    
    
    int valueToAdd;
    cin >> valueToAdd;
    vectorOne.push_back(valueToAdd);
    cin >> valueToAdd;
    vectorOne.push_back(valueToAdd);
    
    /*vectorOne.push_back(10);
    vectorOne.push_back(20);*/
    
    cout << endl << vectorOne.at(0) << endl << vectorOne.at(1) << endl;
    
    int valueTwoToAdd;
    cin >> valueTwoToAdd;
    vectorTwo.push_back(valueTwoToAdd);
    cin >> valueTwoToAdd;
    vectorTwo.push_back(valueTwoToAdd);
    
    /*vectorTwo.push_back(100);
    vectorTwo.push_back(200);*/
    
    cout << endl << vectorTwo.at(0) << endl << vectorTwo.at(1) << endl;
    cout << endl << endl << endl;
    
    vector <vector<int>> vector2D;
    vector2D.push_back(vectorOne);
    vector2D.push_back(vectorTwo);
    cout << endl << endl << endl;
    
    cout <<vector2D.at(0).at(0) << endl << vector2D.at(0).at(1) <<endl << endl << vector2D.at(1).at(0) << endl << vector2D.at(1).at(1);
    
    system("PAUSE");
    return 0;
}
