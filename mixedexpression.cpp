#include<iostream>
using namespace std;
int main() {
    int num1,num2,num3;
    cout<<"Enter three numbers: ";
    cin>>num1>>num2>>num3;
    int total_sum = num1 + num2 + num3;
    cout<<"The result is: "<<total_sum<<endl;
    int average = static_cast<double>(total_sum) / 3;
    cout<<"The average is: "<<average<<endl;
    return 0;
}