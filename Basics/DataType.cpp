#include <iostream>
using namespace std;

int main() {
    // Primary Data Types
    int a = 10;
    float b = 5.67;
    double c = 5.6789;
    char ch = 'A';
    bool flag = true;
    wchar_t w = L'B';

    // Modified Data Types
    short s = 32000;
    unsigned int ui = 100;
    long l = 999999;
    long long ll = 1234567890123;
    unsigned long long ull = 1234567890123456;

    // Floating point variations
    long double ld = 1.23456789012345;

    // Derived Types
    int arr[3] = {1, 2, 3};
    int* ptr = &a;
    int& ref = a;

    cout << "✅ PRIMARY DATA TYPES:\n";
    cout << "int: " << a << endl;
    cout << "float: " << b << endl;
    cout << "double: " << c << endl;
    cout << "char: " << ch << endl;
    cout << "bool: " << flag << endl;
    wcout << L"wchar_t: " << w << endl;

    cout << "\n✅ MODIFIED DATA TYPES:\n";
    cout << "short: " << s << endl;
    cout << "unsigned int: " << ui << endl;
    cout << "long: " << l << endl;
    cout << "long long: " << ll << endl;
    cout << "unsigned long long: " << ull << endl;

    cout << "\n✅ FLOATING POINT VARIATIONS:\n";
    cout << "long double: " << ld << endl;

    cout << "\n✅ DERIVED DATA TYPES:\n";
    cout << "Array: " << arr[0] << ", " << arr[1] << ", " << arr[2] << endl;
    cout << "Pointer (address of a): " << ptr << ", value: " << *ptr << endl;
    cout << "Reference to a: " << ref << endl;

    cout << "\n✅ VOID TYPE: Used as return type or function with no return\n";

    return 0;
}
