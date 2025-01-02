#include <iostream>
using namespace std;

int main(){
    int num = 1;
    for(int i = 0; i < 4; i++){
    int input;
    cout << "Input: ";
    cin >> input;
    num = num * input;
    }
    cout << num << endl;
    return 0;
}