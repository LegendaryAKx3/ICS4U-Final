#include <iostream>
using namespace std;

// Functions practice question 3

void output(string p, int num){
    for (int i = 0; i<num; i++){
        cout << p << endl;
    }
}

int main(){
    int num;
    cout << "Number: ";
    cin >> num;

    string phrase;
    cout << "Phrase: ";
    cin >> phrase;

    output(phrase, num);

    return 0;
}

