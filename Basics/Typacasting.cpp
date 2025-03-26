#include <iostream>
using namespace std;
int main() {
    float num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "The fractional part of the number is: " << num - static_cast<int>(num) << endl;
    return 0;
}