#include<iostream>
#include<vector>
using namespace std;
int main(){
     vector<int>v;
    v.push_back(6);
    v.push_back(1);
    v.push_back(9);
    v.push_back(10);
    v.push_back(6);
    v.push_back(1);
    v.push_back(9);
    v.push_back(10);
    v.push_back(6);
    v.push_back(1);
    v.push_back(9);
    v.push_back(10);
    v.pop_back();
    cout<<v.capacity();
    cout<<endl;
    cout<<v.size();
}