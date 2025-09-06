#include<iostream>
using namespace std;
int main()
{
    const double euro_to_usd{1.19};
    cout<<"Welcome to Euro to USD convertor"<<endl;
    cout<<"\nEnter the amount in Euro: ";
    double euro{0};
    double usd{0};
    cin>>euro;
    usd = euro * euro_to_usd;
    cout<<euro<<" Euro is equal to "<<usd<<"USD"<<endl;
    return 0;
}