#include <iostream>
using namespace std;

// 05.02.01
/*Write a program that prompts the user for two numbers. The program will then print out all the numbers between these numbers,
including the last number. Assume the first number entered is larger than the second number.*/

int main(){
    int num1;
    cout << "Input 1: ";
    cin >> num1;

    int num2;
    cout << "Input 2: ";
    cin >> num2;

    while (num1 > num2){
        cout << num2 << endl;
        num2++;
    }

    return 0;
}