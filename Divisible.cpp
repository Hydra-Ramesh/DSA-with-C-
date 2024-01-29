//Check a number is divisible by 5 and 3.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    if(n%5==0&&n%3==0){
        cout<<"Divisible";
    }else{
        cout<<"Not Divisible";
    }
    return 0;
}