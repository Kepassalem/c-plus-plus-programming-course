#include <iostream>
#include <string>

using namespace std;

int main() {
   string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
   string key {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};
   string message;
   string secretMessage {}; 
    
    cout << "\nEnter your secret message: ";
    getline(cin, message);
    
    for (char c: message) {
        size_t position = alphabet.find(c);
        
        if (c == ' ')
            secretMessage += ' ';
        else if (position == string::npos)
            secretMessage += c;
        else
            secretMessage += key.at(position);
    }
    
    cout << secretMessage;
    
    
    cout << "\n";
    system("PAUSE");
	return 0;
}
