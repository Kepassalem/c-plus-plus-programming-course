#include <iostream>

using namespace  std;

int *alct(const int *const arr1, size_t size1, const int *const arr2, size_t size2);
void display(const int *const arr[], size_t size);

int *alct(const int *const arr1, size_t size1, const int *const arr2, size_t size2) {
	int* p = new int[size1 * size2];

	size_t s{ 0 };
	
	for (size_t i{ 0 }; i < size1; ++i) {
		for (size_t j{ 0 }; j < size2; ++j) {
			p[s] = arr1[i] * arr2[j];
			++s;
		}
	}

	return p;
}

void display(const int* const arr, size_t size) {
	for (size_t i{ 0 }; i < size; ++i)
		cout << arr[i] << " ";
}


int main()
{
	int arr1[]{ 1, 20, 30, 40, 50 };
	int arr2[]{ 2, 3, 4 };
;
	int *p = alct(arr1, 5, arr2, 3);
	display(p, 15);

	delete[] p;
	return 0;
}