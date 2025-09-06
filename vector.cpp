#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <char> vowels {'a','e','i','o','u'};
    cout<<"\nThe first vowels is "<<vowels[0]<<endl;
    cout<<"The last vowels is "<<vowels[4]<<endl;
    vector <double> hi_temps {80.4,778.4,88.4,77.3};
    cout<<"\nThe first high temperature is "<<hi_temps[3]<<endl;
    hi_temps[3] = 379.9;
    cout<<"The new high temperature is "<<hi_temps[3]<<endl;
    vector<int> test_scores {39,46,37,56};
    cout<<"\nFirst test score at index 0 "<<test_scores[0]<<endl;
    cout<<"Second test score at index 1 "<<test_scores[1]<<endl;

    return 0;
}