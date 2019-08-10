#include <iostream>
#include <vector>

using namespace std;

int main() {
   vector <int> values {10, 25, 68, -65, -42, 29, 94, -41, -1, 25, 6};
   
   for (auto val: values) {
       if(val > 0) {
           cout << val << endl;
           continue;
       } else 
           break;
   }
    
    cout << "\n";
	system("PAUSE");
	return 0;
}
