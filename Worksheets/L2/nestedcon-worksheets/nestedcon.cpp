#include <iostream>
using namespace std;

// 03.04.01 Computer troubleshooting
/*
Create a computer_trouble_shooting program that prompts the user if an ailing computer beeps on startup and if the hard drive spins.
If it beeps and the drive spins, print “Contact tech support”.
If it beeps and the drive does not spin, print “Check drive contacts”.
If it does not beep and the drive does not spin, print “Bring computer to repair center”.
Finally, if it does not beep and the drive spins, print “Check the speaker connections”.
*/

int main(){
    string beeping;
    cout << "Beeping(Y/N): ";
    cin >> beeping;

    string spinning;
    cout << "Spinning(Y/N): ";
    cin >> spinning;

    if (beeping == "Y"){
        if (spinning == "Y"){
            cout << "Contact tech support" << endl;
        }
        else{
            cout << "Check drive contacts" << endl;
        }
    }
    else{
        if (spinning == "Y"){
            cout << "Check speaker connections" << endl;
        }
        else{
            cout << "Bring computer to repair center" << endl;
        }
    }

    return 0;
}