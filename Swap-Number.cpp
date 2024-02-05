#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;
    int c=a;
    a=b;
    b=c;
    cout<<a<<" "<<b;
    return 0;
}