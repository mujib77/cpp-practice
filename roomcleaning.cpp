#include<iostream>
using namespace std;
int main(){
    cout<<"Welcome to Room Cleaning Service"<<endl;
    cout<<"\nHow many Rooms do you want to clean?"<<endl;
    int rooms{0};
    cin>>rooms;
    cout<<"Eastimate for carpet cleaning service"<<endl;
    cout<<"Number of rooms: "<<rooms<<endl;
    cout<<"Price per room: $90"<<endl;
    cout<<"Cost: $"<<90*rooms<<endl;
    cout<<"Tax: $"<<(90*rooms)*0.06<<endl;
    cout<<"================================"<<endl;
    cout<<"Total Estimate: $"<<(90*rooms)+((90*rooms)*0.06)<<endl;
    cout<<"This estimate is valid for 30 days"<<endl;
return 0;}