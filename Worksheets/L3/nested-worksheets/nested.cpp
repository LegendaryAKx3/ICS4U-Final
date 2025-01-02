#include <iostream>
using namespace std;

// 05.03.01

int main(){

    string word1;
    cout << "Input 1: ";
    cin >> word1;

    string word2;
    cout << "Input 2: ";
    cin >> word2;

    for (int i = 1; i < 6; i++){
        cout << word1 << i << endl;
        for (int j = 1; j < 4; j++){
            cout << word2 << j << endl;
        }
    }
    return 0;
}