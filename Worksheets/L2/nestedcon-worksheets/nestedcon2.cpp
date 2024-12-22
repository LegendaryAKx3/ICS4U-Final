#include <iostream>
using namespace std;

// 03.04.02 package sizes
/*
A delivery service does not accept packages heavier than 27 kilograms or larger than 0.1 cubic meters (100, 000 cubic centimeters).
Create a package_check application that prompts the user for the weight of a package and its dimensions.
The program will check the conditions and print an appropriate message
*/

int main(){
    int weight;
    cout << "Weight(kg)";
    cin >> weight;

    int length;
    cout << "Length(cm): ";
    cin >> length;

    int width;
    cout << "Width(cm): ";
    cin >> width;

    int height;
    cout << "Height(cm): ";
    cin >> height;

    int volume = length * width * height;
    if (weight > 27){
        if (volume > 100000){
            cout << "Too large and heavy" << endl;
        }
        else{
            cout << "Too heavy" << endl;
        }
    }
    else{
        if (volume > 100000){
            cout << "Too large" << endl;
        }
        else{
            cout << "Package accepted" << endl;
        }
    }

    return 0;
}