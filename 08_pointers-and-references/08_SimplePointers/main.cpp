#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	int num{ 12 };

	cout << "Value of num is: " << num << endl;
	cout << "sizeof of num is: " << sizeof num << endl;
	cout << "Address of num is: " << &num << endl;

	
	int* p;
	// cout << "Value of p is: " << p << endl;
	cout << "sizeof of p is: " << sizeof p << endl;
	cout << "Address of p is: " << &p << endl;

	p = nullptr;
	cout << "Value of p is: " << p << endl;


	int* p1{ nullptr };
	double* p2{ nullptr };
	unsigned long long* p3{ nullptr };
	vector<string>* p4{ nullptr };
	string* p5{ nullptr };

	cout << "sizeof p1 is: " << sizeof p1;
	cout << "sizeof p2 is: " << sizeof p2;
	cout << "sizeof p3 is: " << sizeof p3;
	cout << "sizeof p4 is: " << sizeof p4;
	cout << "sizeof p5 is: " << sizeof p5;

	   
	int *scoreP{ nullptr };
	int score{ 100 };

	scoreP = &score;
	cout << "Value of score is: " << score << endl;
	cout << "Address of p is: " << &score << endl;
	cout << "Value of ScoreP is: " << scoreP << endl;

	
	cout << "\n";
	return 0;
}