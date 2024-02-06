#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the  size of array : ";
    cin>>n;
    int x;
    cout<<"Enter the value of x : ";
    cin>>x;
    int arr[n];
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    bool flag=false;
    for(int i=0;i<=n;i++){
       if(arr[i]==x)flag=true;
    }if(flag==true){cout<<"The element is present in the array";}
    else{cout<<"Absent";}
    return 0;
}