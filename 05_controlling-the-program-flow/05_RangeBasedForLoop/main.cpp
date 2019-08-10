#include <iostream>
#include <vector>

using namespace std;

int main() {
  /* vector<double> temps {25.2, 36.4, 20.9, 14.5};
   
   double averageTemp {};
   double tempSum {};
   
   for(auto temp: temps) {
       cout << temp<< endl;
       tempSum += temp;
   
   }
   
    averageTemp = tempSum / temps.size(); 
    cout << "\n" << averageTemp;*/
   
    
    string name {"Tajib Smajlovic"};
    
    for (auto c: name) {
        if  (c != ' ')
            cout << c << endl;
    }
    
    
    
    cout << endl;
	system("PAUSE");
	return 0;
}
