#include <iostream>
using namespace std;

// Functions practice question 7

float calculate(int m, int r, int v){
    float answer = m * ((v*v) / r);
    return answer;
}

int main(){
    int mass;
    cout << "Mass: ";
    cin >> mass;

    int velo;
    cout << "Velocity: ";
    cin >> velo;

    for (int i = 10; i < 101; i = i + 5){
        cout << calculate (mass, i, velo) << endl;
    }

    return 0;
}