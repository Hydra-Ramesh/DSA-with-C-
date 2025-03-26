//Calculate percentage of 5 subject;
#include <iostream>
using namespace std;
int main(){
    int first;
    int second;
    int third;
    int fourth;
    int fifth;
    float average;
    float percentage;
    cout << "Enter marks for 5 subjects: " << endl;
    cout << "Subject 1: ";
    cin >> first;
    cout << "Subject 2: ";
    cin >> second;
    cout << "Subject 3: ";
    cin >> third;
    cout << "Subject 4: ";
    cin >> fourth;
    cout << "Subject 5: ";
    cin >> fifth;
    average = (first + second + third + fourth + fifth) / 5;
    percentage = (average / 50) * 100;
    cout << "Average: " << average << endl;
    cout << "Percentage: " << percentage << "%" << endl;
    return 0;
}