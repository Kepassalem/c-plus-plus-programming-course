#include <iostream>
#include <vector>
#include <string>

using namespace std;

void doubleData(int* p);
void swap(int* a, int* b);
void display(vector<string>* vec);

void doubleData(int* p) {
	*p *= 2;
}

void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void display(vector<string>* vec) {
	for (auto str : *vec)
		cout << str << " ";
}


int main()
{
	int n{ 10 };
	int* p{ nullptr };

	cout << n << endl;
	doubleData(&n);
	cout << n << endl;

	p = &n;
	doubleData(p);
	cout << n << endl;


	int x{ 100 }, y{ 200 };
	cout << x << ", " << y << endl;
	swap(&x, &y);
	cout << x << ", " << y << endl;


	vector<string> names {"Tajib", "Hasan", "Kemal"};
	display(&names);
	
    return 0;
}