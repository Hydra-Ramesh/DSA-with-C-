#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i==3 || i==6)
        continue;   
         cout<<i<<endl;
    }
    return 0;

}