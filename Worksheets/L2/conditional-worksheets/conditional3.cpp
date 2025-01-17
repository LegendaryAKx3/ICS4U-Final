#include <iostream>
using namespace std;

// 03.03.02 Printing Prices
/*
Create a printing_prices program that prompts the user for the number of copies to print and then, when executing, displays the price per copy and the total price, tax not included.
Note: When working with ranged applications, carefully test the boundaries of the ranges, for example, 499 copies, 500 copies and 501 copies.
*/

int main(){
    int copies;
    double price;
    cout << "Copies: ";
    cin >> copies;

    if (copies < 500){
        price = 0.3;
    }
    else if (copies < 750){
        price = 0.28;
    }
    else if (copies < 1000){
        price =0.27;
    }
    else{
        price = 0.25;
    }
    double total = copies * price;
    cout << "Price per copy is $" << price << endl;
    cout << "Total price is $" << total << endl;
    return 0;
}