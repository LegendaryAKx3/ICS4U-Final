#include <iostream>
using namespace std;

// 2.02.03 Long jump application
// calculate the average jump length of an athlete whose jumps were 3.3 m. 4.0 m and 3.0 m.

int main(){
    double jump1 = 3.3;
    double jump2 = 4.0;
    double jump3 = 3.0;
    double average = (jump1 + jump2 + jump3) / 3;
    cout << average << endl;

    return 0;
}