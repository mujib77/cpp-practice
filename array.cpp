#include<iostream>
using namespace std;
int main()
{
    char vowels[] {'a','e','i','o','u'};
    cout<<"\nThe first vowel is "<<vowels[0]<<endl;
    cout<<"The last vowels is "<<vowels[4]<<endl;
    double hi_temps [] {90.1,89.8,83.4,333.2};
    cout<<"\nThe first high temperature is "<<hi_temps[3]<<endl;
    hi_temps[3] = 778.4;
    cout<<"The first high temperature is now "<<hi_temps[3]<<endl;
    int test_scores[3] {20,30};
    cout<<"\nfirst score at index 0 "<<test_scores[0]<<endl;
    cout<<"second test scores at index 1 "<<test_scores[1]<<endl;
    cout<<"third test scores at index 2 "<<test_scores[2]<<endl;
    cout<<"\nEnter 3 test scores ";
    cin>>test_scores[0];
    cin>>test_scores[1];
    cin>>test_scores[2];
    cout<<"\nThe updated test scores are "<<endl;
    cout<<test_scores[0]<<endl;
    cout<<test_scores[1]<<endl;
    cout<<test_scores[2]<<endl;
    return 0;

}