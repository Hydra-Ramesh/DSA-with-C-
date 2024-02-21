#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&a){
    for(int i=0;i<=a.size()-1;i++){
        cout<<a[i]<<" ";
    }cout<<endl;
}
int main(){
     vector<int>v;
    v.push_back(6);
    v.push_back(1);
    v.push_back(9);
    v.push_back(10);
    display(v);
    for(int i=0,j=v.size()-1;i<=j;i++,j--){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
    }
    display(v);
    return 0;
}