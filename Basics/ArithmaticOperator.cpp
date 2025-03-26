#include<iostream>
using namespace std;
int main() {
    int x = 10;
    int y = 5;
    int sum = x + y;
    cout << "The sum is: " << sum << endl;
    int sub = x - y;
    cout << "The sub is: " << sub << endl;
    int mul = x * y;
    cout << "The mul is: " << mul << endl;
    float div = (float)x / y;
    cout << "The div is: " << div << endl;
    int mod = x % y;
    cout << "The mod is: " << mod << endl;
    return 0;
}