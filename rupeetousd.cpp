#include<iostream>
using namespace std;
int main() {
    const double rupee_to_usd{0.012};
    cout<<"------------------------------------------------"<<endl;
    cout<<"Welcome to Rupee to USD convertor"<<endl;
    cout<<"\nEnter the amount in Rupee: ";
    double rupee{0};
    double usd{0};
    cin>>rupee;
    usd = rupee * rupee_to_usd;
    cout<<rupee<<" The amount of usd is "<<usd<<" usd "<<endl;
    return 0;

}