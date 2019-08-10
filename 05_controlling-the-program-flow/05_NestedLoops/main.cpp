#include <iostream>
#include <vector>

using namespace std;

int main() {
	/*for(int numOne{1}; numOne <= 10; ++numOne) {
        for(int numTwo{1}; numTwo <= 10; ++numTwo) {
            cout << numOne << " * " << numTwo << " = " << numOne * numTwo << endl;
        } 
        cout << "----------------" << endl;
    }*/
    
    
    int numItems {};
    vector<int> data {};
    
    cout << "How many data items do you have? ";
    cin >> numItems;
    
    for (int i{1}; i <= numItems; ++i) {
        int dataItem {};
        cout << "Enter data Item: " << i << ": ";
        cin >> dataItem;
        data.push_back(dataItem);
    }
    
    cout << "\nDisplaying Histogram" << endl;
    for(auto val: data) {
        for (int i{1}; i <= val; ++i) {
            if (i % 5 == 0) {
                cout << "*";
            } else 
                cout << "-" ;
        } 
        cout << endl;
    }
        
    
    
    cout << "\n";
    system("PAUSE");
	return 0;
}
