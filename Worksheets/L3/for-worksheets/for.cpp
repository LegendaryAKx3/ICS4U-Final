#include <iostream>
using namespace std;

// 05.01.01
/*
Write a program that has starts with a number and subtracts 20 from it 3 times.
Your program receives the starting number as input. Print out the result.
*/

int main(){
    int input;
    cout << "Input: ";
    cin >> input;

    for (int i = 0;i < 3; i++){
        input = input - 20;
    }
    cout << input << endl;
    return 0;
}