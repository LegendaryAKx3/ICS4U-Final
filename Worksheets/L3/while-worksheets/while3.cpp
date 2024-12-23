#include <iostream>
using namespace std;
#include <cstdlib>
using namespace std;
#include <ctime>
using namespace std;

// 05.02.03 Guessing game
/*
Write a Guessing Game program. The program will generate a random number between 1 and 50, inclusive.
The user is to enter guesses of that number.
If the user’s guess is too high, print a message that says, “Too high”.
If the user’s guess is too low, print a message that says, “Too low”.
If the guess is correct, print a message that says, “You guessed correctly!”.

*/

int main(){
    srand(time(0));

    int target = (rand() % 50) + 1;
    int input;
    cout << "Input: ";
    cin >> input;
    while (input != target){
        if (input < target){
            cout << "Too low" << endl;
        }
        else{
            cout << "Too high" << endl;
        }
        cout << "Input: ";
        cin >> input;
    }
    cout << "Correct!" << endl;

    return 0;
}