#include <iostream>
#include <vector>

using namespace std;

int main() {
    char choice {}, uppChoice {};
     int addNum{};
    vector<int> list {};
    
    
    do {
    cout << " \n" << endl;
    cout << "|  P - Print numbers " << endl;
    cout << "|  A - Add a number " << endl;
    cout << "|  M - Display mean of the numbers " << endl;
    cout << "|  N - Search for a number in a list" << endl;
    cout << "|  S - Display the smallest number " << endl;
    cout << "|  L - Display the largest number " << endl;
    cout << "|  C - Clear the list " << endl;
    cout << "|  Q - Quit " << endl;
    
    cout << "\nEnter your choice: ";
    cin >> choice;
    uppChoice = toupper(choice);
    
     if (uppChoice != 'P' && uppChoice != 'A' && uppChoice != 'M' && uppChoice != 'S' && uppChoice != 'L' && uppChoice != 'Q' && uppChoice != 'N' && uppChoice != 'C') {
         cout << "\nUnknown selection, please try again: ";
         cin >> choice;
         uppChoice = toupper(choice);
     } else {
         switch (uppChoice) {
        case 'P':
            if (list.size() == 0) {
                cout << "[] - the list is empty"<< endl;
            } else {
                cout << "[ ";
                for (auto i: list) {
                    cout << i << " ";
                }
                cout << "]";
            }
            break;
        case 'A':        
            cout << "\nEnter integer to the list: ";
            cin >> addNum;
            cout << "\n" << addNum << " added!";
            list.push_back(addNum);
            break;
        case 'M':
              if (list.size() == 0) {
                cout << "Unable to calculate - NO DATA!"<< endl;
            } else {
                int total {};
                for (auto i: list) {
                    total += i;
                }
                cout << "Average of elements in list is: " << static_cast<double>(total)/list.size() << endl;
            }
            break;
        case 'S':
              if (list.size() == 0) {
                cout << "Unable to determine the smallest number - the list is empty"<< endl;
            } else {
                int smallestNum {list.at(0)};
                for (auto i: list) {
                    if (i < smallestNum) {
                        smallestNum = i;
                    }
                }
                cout << "The smallest number is " << smallestNum<< endl;
            }
            break;    
        case 'L':
             if (list.size() == 0) {
                cout << "Unable to determine the largest number - the list is empty"<< endl;
            } else {
                int largestNum {list.at(0)};
                for (auto i: list) {
                    if (i > largestNum) {
                        largestNum = i;
                    }
                }
                cout << "The largest number is " << largestNum<< endl;
            }
            break;
        case 'N':
             if (list.size() == 0) {
                cout << "Unable to search for the number - the list is empty"<< endl;
            } else {
                int searchedNum{};
                cout << "\nEnter number to search in the list: ";
                cin >> searchedNum;
                
                int i{0};
                for (auto n: list) {
                    if (n == searchedNum) {
                        i++;
                    }
                }
                
                if (i > 0) {
                    cout << "\nThe number " << searchedNum << " occurs " << i << " times in a list!"<< endl;
                } else {
                    cout << "\nThe number you entered is not in the list!!"<< endl;
                }
            }
            break;
        case 'C':
             if (list.size() == 0) {
                cout << "The list is already empty!"<< endl;
            } else {
                list.clear();
                cout << "\nThe list was cleared!" << endl;
            }
            break;
        case 'Q':
            cout << "GoodBye!"<< endl;
            break;    
        }
     }
    } while (uppChoice != 'Q');
    
    
    cout << "\n";
    system("PAUSE");
	return 0;
}
