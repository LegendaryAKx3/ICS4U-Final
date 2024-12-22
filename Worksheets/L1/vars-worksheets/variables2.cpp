#include <iostream>
using namespace std;
// Question 2.03.03 Variable message
// display the mssage my favourite animal is the __ because they are ___ and change variables

int main(){
    string animal = "Dog";
    string reason = "Friendly";
    cout << "My favourite animal is the " << animal << " because they are " << reason << endl;

    animal = "Duck";
    reason = "Cute";
    cout << "My favourite animal is the " << animal << " because they are " << reason << endl;
    return 0;
}