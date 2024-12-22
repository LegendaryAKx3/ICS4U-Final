#include <iostream>
using namespace std;
// Question 2.03.02 Calculating costs
// Write a program that calculates the cost with 13% sales tax, for $5 and $25 purchases

int main(){
    int price = 5;
    double tax = 0.13;
    double salesTax = tax * price;
    double total = price + salesTax;
    cout << "for $5: " << total << endl;

    price = 25;
    salesTax = tax * price;
    total = price + salesTax;
    cout << "for $25: " << total << endl;
    return 0;
}