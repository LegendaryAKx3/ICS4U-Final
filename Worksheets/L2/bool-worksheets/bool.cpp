#include <iostream>
using namespace std;

// 03.06.03 Rewrite Computer troubleshooting
/*
Rewrite the computer troubleshooting program from earlier with compound booleans instead of nested ifs
*/

int main(){
    string beeping;
    cout << "Beeping(Y/N): ";
    cin >> beeping;

    string spinning;
    cout << "Spinning(Y/N): ";
    cin >> spinning;


    if ((beeping == "Y") && (spinning=="Y")){
        cout << "Contact tech support" << endl;
    }
    else if ((beeping == "Y")&& (spinning=="N")){
        cout << "Check drive contacts" << endl;
    }
    else if ((beeping == "n")&& (spinning=="Y")){
        cout << "Check speaker connections" << endl;
    }
    else if ((beeping == "N")&& (spinning=="N")){
        cout << "Bring computer to repair center" << endl;
    }

    return 0;
}