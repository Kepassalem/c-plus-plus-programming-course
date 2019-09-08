#include <iostream>

using namespace std;

int* createArray(size_t size, int initialValue = 0);
void display(const int* const array, size_t size);

int* createArray(size_t size, int initialValue) {
	int* newStorage{ nullptr };
	newStorage = new int[size];

	for (size_t i{ 0 }; i < size; ++i)
		newStorage[i] = initialValue; // || *(newStorage + i) = initialValue;

	return  newStorage;
}

void display(const int* const array, size_t size) {
	for (size_t i{ 0 }; i < size; ++i)
		cout << *(array + 1) << " ";
}


int main()
{
	int* myArr{ nullptr };
	size_t size;
	int initialValue{};

	cin >> size;
	cin >> initialValue;
	myArr = createArray(size, initialValue);
	display(myArr, size);
	
	delete[] myArr;
	return 0;
}