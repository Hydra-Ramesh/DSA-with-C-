#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=n;i<=n*10;i=n+i){
        cout<<i<<endl;
    }
    return 0;
}