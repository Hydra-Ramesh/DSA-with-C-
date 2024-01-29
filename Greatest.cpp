//Print and Check a greatest number among 3 number
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b){
        if(a>c){
            cout<<a<<" is the Greatest";
        }else{
         cout<<c<<" is Greatest";
        }
    }else{
        if(b>c){
            cout<<b<<" is Greatest";
        }else{
            cout<<c<<" is Greatest";
        }
    }
    return 0;
}