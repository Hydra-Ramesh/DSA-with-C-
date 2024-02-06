#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of student : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    for(int i=0;i<=n;i++){
        if(arr[i]>30){
            cout<<i<<" ";
        }
    }
    return 0;
}