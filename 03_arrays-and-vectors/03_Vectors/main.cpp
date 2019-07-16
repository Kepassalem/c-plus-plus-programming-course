#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main() {
   /* vector <char> vowels {'a', 'e', 'i', 'o', 'u'};
    cout << vowels[0]<< endl;
    cout << vowels[4]<< endl;


    // vector <int> testScores (3, 80); ------> 3 elements all initialized to 100
    vector <int> testScores {100,95,82};
    cout << "\nTest scores using array syntax: "<< endl;
    cout << testScores[0] << endl << testScores[1] << endl << testScores[2]<< endl;
    
    cout << "\nTest scores using vector syntax: "<< endl;
    cout << testScores.at(0) << endl << testScores.at(1) << endl << testScores.at(2)<< endl;
    cout << "\nThere are " << testScores.size() << " scores in the vector"<< endl;
    
    
    cout << "\nUpdate test scores: "<< endl;
    cin >> testScores.at(0) >> testScores.at(1) >> testScores.at(2);
    cout << "\nUpdated test scores are:\n";
    cout << testScores.at(0) << endl << testScores.at(1) << endl << testScores.at(2)<< endl;
    
    
    cout <<"\nEnter score to add to the vector: \n";
    int scoreAdd {0};
    cin >> scoreAdd;
    
    testScores.push_back(scoreAdd);
    cout << "\nEnter one more score to add: \n";
    cin >> scoreAdd;
    testScores.push_back(scoreAdd);
    
    cout << "\nTest scores now are \n";
    cout << testScores.at(0) << endl << testScores.at(1) << endl << testScores.at(2) << endl << testScores.at(3) << endl << testScores.at(4) << endl;
    cout << "\nThere are now " << testScores.size() << " scores in the vector"<< endl;*/
    
    
    // 2D vector example
    vector <vector<int>> movieRatings{
     {1,3,5, 7},
     {2,4,6, 8},
     {1,2,3, 4}
    };
    
    cout <<"\nHere are the movie ratings of the user #1 using array syntax: \n";
    cout << movieRatings[0][0] << endl << movieRatings[0][1] << endl <<  movieRatings[0][2] << endl <<  movieRatings[0][3] << endl;
    
    cout <<"\nHere are the movie ratings of the user #1 using vector syntax: \n";
    cout << movieRatings.at(0).at(0)<< endl << movieRatings.at(0).at(1)<< endl << movieRatings.at(0).at(2)<< endl << movieRatings.at(0).at(3)<< endl;
    
    system("PAUSE");
    return 0;
}
