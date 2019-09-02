#include <iostream>
#include <cmath>

using namespace std;

// Function prototypes
double calculateArea(double);
double calculateVolume(double, double);
void areaCirce();
void volumeCylinder();

const double pi{ 3.14159 };

int main() { // NOLINT
	areaCirce();
	volumeCylinder();

	cout << "\n";
	return 0;
}

double calculateArea(double radius) {
	return pi * pow(radius, 2);
}

double calculateVolume(double radius, double height) {
	return calculateArea(radius) * height;
}

void areaCirce() {
	double radius{};
	cout << "\nEnter the radius of the circle: ";
	cin >> radius;

	cout << "\nThe area of the circle with radius: " << radius << " is: " << calculateArea(radius);
}

void volumeCylinder() {
	double radius{};
	double height{};

	cout << "\nEnter the radius of the cylinder: ";
	cin >> radius;

	cout << "\nEnter the height of the cylinder: ";
	cin >> height;

	cout << "\nThe volume of the cylinder with radius: " << radius << " and height " << height << " is: " << calculateVolume(radius, height);
}