#include<iostream>
using namespace std;
int fact(int x){
    int f=1;
    for(int i=1;i<=x;i++){
        f=f*i;
    }return f;
}
int main(){
    int n,p,r;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<"Enter the value of r: ";
    cin>>r;
    int a= fact(n);
    int b= fact(r);
    int c= fact(n-r);
    cout<<a/(b*c);
    return 0;
}
