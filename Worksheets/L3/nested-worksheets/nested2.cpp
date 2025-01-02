#include <iostream>
using namespace std;

// 05.03.02

int main(){
    int horiz;
    cout << "Horizontal: ";
    cin >> horiz;

    int vert;
    cout << "Vertical: ";
    cin >> vert;

    for (int i = 0; i < vert; i++){
        for (int j = 0; j < horiz; j++){
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}