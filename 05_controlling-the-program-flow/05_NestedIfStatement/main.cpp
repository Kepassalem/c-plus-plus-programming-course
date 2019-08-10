#include <iostream>

using namespace std;

int main() {
    int score{};
    char letterGrade {};
    
    cout << "Enter your score: ";
    cin >> score;
    
    cout << "\nYou entered " <<score << endl;
    
    if (score >= 0 && score <= 100) {
       if  (score > 90) {
           letterGrade = 'A';
       } else if  (score > 80) {
           letterGrade = 'B';
       } else if  (score > 70) {
           letterGrade = 'C';
       } else if (score >= 60) {
           letterGrade = 'D';
       } else  {
           letterGrade = 'F';
       }
        cout << "Your grade is "<<letterGrade << endl;
    } else {
        cout << score << " is not in range!" << endl;
    }
    
	system("PAUSE");
	return 0;
}
