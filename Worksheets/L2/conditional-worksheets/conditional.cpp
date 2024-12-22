#include <iostream>
using namespace std;

// 3.02.01 Number of Digits
// Prompt the user for num 0-100 non inclusive, print the number of digits, assuming only valid numbers entered

int main(){
    int num;
    cout << "Input num 0-100, non inclusive: ";
    cin >> num;

    if (num > 9){
        cout << "2 digits" << endl;
    }else{
        cout << "1 digit" << endl;
    }
    return 0;
}