//Test a Triangle is it valid or not by its Side.
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a+b>c&&b+c>a&&a+c>b){
        cout<<"Valid Triangle";
    }else{
        cout<<"Invalid";
    }
    return 0;
}