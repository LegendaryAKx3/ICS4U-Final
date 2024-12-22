#include <iostream>
using namespace std;

// 03.01.03
/*
Create a program that accepts a number from the user, prints a message saying, “Checking if # is greater than 10”, and prints a “success” message if the number is greater than 10.
Print a “Done checking” message after the check is done. (No message is expected if it fails).
*/

int main(){
    int num;
    cout << "Num: ";
    cin >> num;
    cout << "Checking if num is greater than ten" << endl;
    if (num > 10){
        cout << "Success" << endl;
    }
    cout << "Done Checking" << endl;
    return 0;
}