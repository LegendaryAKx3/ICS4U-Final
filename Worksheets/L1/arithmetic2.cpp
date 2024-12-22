#include <iostream>
using namespace std;

// 2.02.02 
//  write a program that prints the circumference (2(pi)r) of a circle with radius 15 cm.
// Write one that just displays calculated answer, write another that displays it as the circumference is XX cm

int main(){
    double pi = 3.14;
    int radius = 15;
    double circumference = pi * radius * 2;
    cout << circumference << endl;

    // alternative
    cout << "The circumference is " << circumference << " cm" << endl;
    return 0;
}