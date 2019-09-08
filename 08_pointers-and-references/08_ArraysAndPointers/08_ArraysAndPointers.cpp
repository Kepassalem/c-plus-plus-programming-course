#include <iostream>

using namespace std;

int main()
{
	int arr[] { 100, 202, 300 };
	int* p{ arr };

	cout << arr << endl;
	cout << p << endl;

	cout << "\nArray subscript notation" << endl;
	cout << arr[0] << endl;
	cout << arr[1] << endl;
	cout << arr[2] << endl;

	cout << "\nPointer subscript notation" << endl;
	cout << p[0] << endl;
	cout << p[1] << endl;
	cout << p[2] << endl;

	cout << "\nArray offset notation" << endl;
	cout << *arr << endl;
	cout << *(arr + 1) << endl;
	cout << *(arr + 2) << endl;

	cout << "\nPointer offset notation" << endl;
	cout << *p << endl;
	cout << *(p + 1) << endl;
	cout << *(p + 2) << endl;

	cout << (p + 1) << endl;
	cout << (p + 2) << endl;
	cout << (p + 3) << endl;
	
	return 0;
}
