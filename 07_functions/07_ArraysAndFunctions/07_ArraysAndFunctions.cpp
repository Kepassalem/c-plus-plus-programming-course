#include <iostream>

using namespace std;

void printArray(const int arr[], size_t size);
void setArray(int arr[], size_t size, int value);

void printArray(const int arr[], size_t size) {
	for (size_t i{ 0 }; i < size; ++i)
		cout << arr[i] << " ";

	//  6 arr[0] = 999999;
}

void setArray(int arr[], size_t size, int value) {
	for (size_t i{ 0 }; i < size; ++i)
		arr[i] = value;
}

int main() // NOLINT
{
	// const myArr[]{ 100, 200, 300, 400, 500 };
	int myArr[]{ 100, 200, 300, 400, 500 };

	cout << "\n";
	printArray(myArr, 5);
	setArray(myArr, 5, 0);
	printArray(myArr, 5);

	return 0;
}