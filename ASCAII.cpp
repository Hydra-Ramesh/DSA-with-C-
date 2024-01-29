#include<iostream>
using namespace std;
int main(){
    for(char i=65;i<=90;i++){
        cout<<i<<':'<<static_cast<int>(i)<<endl;
    }
}