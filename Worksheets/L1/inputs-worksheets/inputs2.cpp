#include <iostream>
using namespace std;

// 02.04.02
/*
Write a program that prompts for three scores, then the name of a player. 
The program then calculates the average of the three scores and displays an appropriate message
*/

int main(){
    int score1;
    int score2;
    int score3;
    string name;
    cout << "score 1: ";
    cin >> score1;
    cout << "score 2: ";
    cin >> score2;
    cout << "score 3: ";
    cin >> score3;
    cout << "player name: ";
    cin >> name;

    double average = (score1 + score2 + score3) / 3;
    cout << name << " scored an average of " << average << " per game" << endl;
    return 0;
}
