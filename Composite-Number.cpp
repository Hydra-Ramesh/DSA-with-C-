#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool flag=true;
    for(int i=n/2;i>=1;i--){
        if(n%i==0) 
        flag=false; 
        break;
    }if(n==1)cout<<"Neither Prime nor Composite";
    else if(flag==true)cout<<"Prime";
    else cout<<"Composite";
    return 0;

}