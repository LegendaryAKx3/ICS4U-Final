#include <iostream>
using namespace std;

// 02.04.01

/*
Write a program that prompts for two integers, adds them,
then subtracts the first number from the second,
then prints out their sum and difference, in two separate messages. 
*/
int main(){
    int num1;
    int num2;
    cout << "num1: ";
    cin >> num1;
    cout << "num2: ";
    cin >> num2;

    int sum = num1 + num2;
    int diff = num1 - num2;
    cout << "sum: " << sum << endl;
    cout << "difference: " << diff << endl;
    return 0;
}