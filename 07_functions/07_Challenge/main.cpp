#include <iostream>
#include <vector>
#include <list>

using namespace std;

void displayScreen();
char getUserInput();
void addNumber(vector<int>& numbers);
void printNumbers(const vector<int> numbers);
void displayMean(const vector<int> numbers);
void smallestNumber(const vector<int> numbers);
void largestNumber(const vector<int> numbers);
void searchNumbers(const vector<int> numbers);
void clearList(vector<int>& numbers);

void displayScreen() {
	cout << " \n" << endl;
	cout << "|  P - Print numbers " << endl;
	cout << "|  A - Add a number " << endl;
	cout << "|  M - Display mean of the numbers " << endl;
	cout << "|  N - Search for a number in a list" << endl;
	cout << "|  S - Display the smallest number " << endl;
	cout << "|  L - Display the largest number " << endl;
	cout << "|  C - Clear the list " << endl;
	cout << "|  Q - Quit " << endl;
}

char getUserInput() {
	char input{};

	cin >> input;

	return input;
}

void addNumber(vector<int>& numbers) {
	int number;

	cout << "\nEnter integer to the list: ";
	cin >> number;
	numbers.push_back(number);
	cout << "\n" << number << " added!";
}

void printNumbers(const vector<int> numbers) {
	if (numbers.empty()) {
		cout << "[] - the list is empty" << endl;
	} else {
		cout << "[ ";
		for (auto i : numbers) {
			cout << i << " ";
		}
		cout << "]";
	}
}

void displayMean(const vector<int> numbers) {
	if (numbers.empty()) {
		cout << "Unable to calculate - NO DATA!" << endl;
	} else {
		int total{};
		for (auto i : numbers) {
			total += i;
		}
		cout << "Average of elements in list is: " << static_cast<double>(total) / numbers.size() << endl;
	}
}

void smallestNumber(const vector<int> numbers) {

	if (numbers.empty()) {
		cout << "Unable to determine the smallest number - the list is empty" << endl;
	} else {
		int smallestNum{ numbers.at(0) };
		for (auto i : numbers) {
			if (i < smallestNum) 
				smallestNum = i;
		}
		cout << "The smallest number is " << smallestNum << endl;
	}
}

void largestNumber(const vector<int> numbers) {

	if (numbers.empty()) {
		cout << "Unable to determine the largest number - the list is empty" << endl;
	} else {
		int largestNum{ numbers.at(0) };
		for (auto i : numbers) {
			if (i > largestNum) 
				largestNum = i;
		}
		cout << "The largest number is " << largestNum << endl;
	}
}

void searchNumbers(const vector<int> numbers) {
	if (numbers.empty()) {
		cout << "Unable to search for the number - the list is empty" << endl;
	} else {
		int searchedNum{};
		cout << "\nEnter number to search in the list: ";
		cin >> searchedNum;

		int i{ 0 };
		for (auto n : numbers) {
			if (n == searchedNum) {
				i++;
			}
		}

		if (i > 0) {
			cout << "\nThe number " << searchedNum << " occurs " << i << " times in a list!" << endl;
		} else {
			cout << "\nThe number you entered is not in the list!!" << endl;
		}
	}
}

void clearList(vector<int>& numbers) {
	if (numbers.empty()) {
		cout << "The list is already empty!" << endl;
	} else {
		numbers.clear();
		cout << "\nThe list was cleared!" << endl;
	}
}


int main() { // NOLINT
	vector<int> numbers;
	char choice{}, uppChoice{};

	do {
		displayScreen();
		choice = getUserInput();
		uppChoice = toupper(choice);

		switch (uppChoice) {
		case 'P':
			printNumbers(numbers);
			break;
		case 'A':
			addNumber(numbers);
			break;
		case 'M':
			displayMean(numbers);
			break;
		case 'N':
			searchNumbers(numbers);
			break;
		case 'S':
			smallestNumber(numbers);
			break;
		case 'L':
			largestNumber(numbers);
			break;
		case 'C':
			clearList(numbers);
			break;
		default:
			cout << "\nWrong input!" << endl;
		}
	} while (uppChoice != 'Q');
	
	cout << "\n";
	return 0;
}