//Simple Interest
#include<iostream>
using namespace std;
int main(){
    float principal, rate, time, interest;
    cout<<"Enter the principal amount: ";
    cin>>principal;
    cout<<"Enter the rate of interest per annum: ";
    cin>>rate;
    cout<<"Enter the time in years: ";
    cin>>time;
    interest = (principal * rate * time) / 100;
    cout<<"Simple Interest: "<<interest<<endl;
    return 0;
}