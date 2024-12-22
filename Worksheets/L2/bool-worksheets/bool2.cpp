#include <iostream>
using namespace std;

// 03.06.04 
/*
Write a program number_sorter that accepts a number between 1 and 100, inclusive, and which distinguishes number by the following criteria, to be testing in order:
a) number is divisible by 10, print a message stating “Criteria A”
b) number is divisible by 5 or is strictly less than 40, print “Criteria B”
c) number is less strictly less than 60, print “Criteria C”
d) otherwise, print “Does not match any Criteria”
Use only 1 “if…elif” statement and compound Boolean expressions
*/

int main(){
    int num;
    cout << "Input: ";
    cin >> num;
    if (num % 10 == 0){
        cout << "Criteria A" << endl;
    }
    else if ((num % 5 == 0) || (num < 40)){
        cout << "Criteria B" << endl;
    }
    else if (num < 60){
        cout << "Criteria C" << endl;
    }
    else{
        cout << "Does not match any criteria" << endl;
    }

    return 0;
}