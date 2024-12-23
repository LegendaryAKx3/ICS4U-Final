#include <iostream>
using namespace std;

// 05.02.02

/*
Write a program that calculates the average of a set of numbers entered by the user.
The number of numbers that will be entered is unknown.
The user will indicate they are done entering numbers by entering zero.


*/

int main(){
    int amount = 0;
    int total = 0;
    int input;
    cout << "Input: ";
    cin >> input;
    while (input != 0){
        total += input;
        amount++;
        cout << "Input: ";
        cin >> input;
    }
    double average = total / amount;
    cout << average << endl;

    return 0;
}