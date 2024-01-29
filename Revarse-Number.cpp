#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int r=0;
    int ld=0;
    int x=n;
    while(n>0){
       ld=n%10;
       r=r*10;
       r=r+ld;
       n=n/10;  
    }cout<<r+x;
    return 0;
}