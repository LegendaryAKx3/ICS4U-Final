#include <iostream>
using namespace std;

// 03.04.03 Modify Printing Prices
/*Modify 03.03.02 so that users can be designated a Prime user.
If the order is from a Prime user, and the order is for 900 copies or more,
then they are entitled to a 10% discount on their final price.
*/

int main(){
    int copies;
    double price;
    cout << "Copies: ";
    cin >> copies;

    string prime;
    cout << "Prime user?(Y/N): ";
    cin >> prime;

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

    if (prime == "Y"){
        if (copies >=900){
            double discount = total * 0.1;
            total = total - discount;
        }
    }
    cout << "Price per copy is $" << price << endl;
    cout << "Total price is $" << total << endl;
    return 0;
}