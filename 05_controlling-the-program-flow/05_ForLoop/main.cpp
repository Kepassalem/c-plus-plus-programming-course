#include <iostream>
#include <vector>

using namespace std;

int main() {
   
   /* for(int i{0}; i <=5; ++i) {
        cout << i<< endl;
    }
    
    for(int i{0},  j{20}; i <= j; ++i, j-=2) {
        cout << i << " " << j << endl;
    }*/
    
//    for (int i{10}; i <= 100; i+=10) {
//        if (i % 15 == 0) {
//            cout << i << endl;
//        }
//    }

//        for (int i{1}; i<=100; ++i) {
//            cout << i << " , ";
//            if (i % 10 == 0)
//                cout << endl;
//        }
    
    /*for (int i{0}; i<= 100; ++i) {
        cout << i<< ((i % 10 == 0) ? " | " : "_");
    }*/
    
    vector<int> nums{10, 20, 30, 40, 50};
    
    for (unsigned i{0}; i<nums.size(); ++i) {
        cout << nums[i] << endl;
    }
    
    
    cout << endl;
    
	system("PAUSE");
	return 0;
}
