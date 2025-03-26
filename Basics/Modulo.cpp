#include<iostream>
using namespace std;
int main(){
    int x = 16;
    int y = 3;
    int q = x/y;
    int r;
    r = x - (y*q);
    cout<<"Quotient: "<<q<<endl;
    cout<<"Remainder: "<<r<<endl;
    return 0;
}