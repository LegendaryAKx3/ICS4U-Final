#include <iostream>
using namespace std;

// Functions practice question 2

bool checkRange(int num, int bot, int top){
    for (int i = bot; i < top; i++){
        if (i == num){
            return true;
        }
    }
    return false;
}

int main(){
    int num;
    cout << "Number: ";
    cin >> num;

    int bottom;
    cout << "Bottom of range: ";
    cin >> bottom;

    int top;
    cout << "Top of range: ";
    cin >> top;

    cout << checkRange(num, bottom, top) << endl;

    return 0;
}



