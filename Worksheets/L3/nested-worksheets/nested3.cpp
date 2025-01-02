#include <iostream>
using namespace std;

// 05.03.03

int main(){
    for (int i = 1; i < 7; i++){
        for (int j = 1; j < 7; j++){
            if ((i+j == 3) || (i+j == 4) || (i+j == 12)){
                cout << i << " & " << j << endl;
            }
        }
    }
    return 0;
}