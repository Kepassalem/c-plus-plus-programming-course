#include <iostream>
#include <cstring> // for c-style string functions
#include <cctype> // for character-based functions

using namespace std;

int main() {
    char firstName[20] {};
    char lastName[20] {};
    char fullName[50] {};
    char temp[50] {};
    
    // string name;
    // name = "Test";
    
    // cout << name << endl;
    // cout << strlen(name);
    // cout << firstName;
    
    /*cout << "\nEnter your name: ";
    cin >> firstName;
    
    cout << "\nEnter your last name: ";
    cin >> lastName;
    
    cout << "\nHello " << firstName << " your name has " << strlen(firstName) << " characters" << endl;
    cout << "and your last name, "  << lastName << " has " << strlen(lastName) << " characters" << endl;
    
    strcpy(fullName, firstName);        // Copy firstName to fullName
    // strcat(fullName, firstName);
    strcat(fullName, " ");                     // Concatenate fullName and a space
    strcat(fullName, lastName);         // Concatenate lastName to fullName
    cout << "\nYour full name is " << fullName;*/
    
    
    /*cout << "\nEnter your full name: ";
    cin >> fullName;
    cout << "\nYour full name is " << fullName;*/
    
    
    cout << "\nEnter your full name: ";
    cin.getline(fullName, 50);
    cout << "\nYour first name is " << fullName << endl;
    
    strcpy(temp, fullName);
    
    for (size_t i{0}; i < strlen(fullName); ++i) {
        if  (isalpha(fullName[i]))
            fullName[i] = toupper(fullName[i]);
    }
    cout << "\nYour full name is: " << fullName << endl;
    
    if (strcmp(temp, fullName) == 0)
        cout << temp << " and " << fullName << " are the same." << endl;
    else
        cout << temp << " and " << fullName << " are different!" << endl;
    
    
    cout << "\n";
    system("PAUSE");
	return 0;
}
