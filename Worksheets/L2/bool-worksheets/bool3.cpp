#include <iostream>
using namespace std;

// 03.06.05 Pokemon Trainers

/*
Write a program for the College of Pokemon Trainers that calculates the admission fee for Prospective Trainers (PTs), based on a number of factors.
PTs must 16 years old or older. PTs are rated according to their experience using the codes N, E and M, respectively, for New, Experienced and Master level experience.
The program will determine the admission fee charged to PTs according to the given table
*/

int main(){
    int age;
    cout << "Age: ";
    cin >> age;

    string exp;
    cout << "Experience(N,E,M): ";
    cin >> exp;

    double cost;

    if ((age > 60) && (exp == "N")){
        cost = 0.9;
    }
    else if ((age>60) && ((exp == "E") || (exp == "M"))){
        cost = 0.75;
    }
    else if ((age>25) && (exp == "N")){
        cost = 1.5;
    }
    else if ((age>25) && (exp == "E")){
        cost = 1;
    }
    else if ((age>25) && (exp == "M")){
        cost = 0.75;
    }
    else if ((age>=16) && (exp == "N")){
        cost = 2;
    }
    else if ((age>=16) && (exp == "E")){
        cost = 1.5;
    }
    else if ((age>=16) && (exp == "M")){
        cost = 1;
    }


    if (age < 16){
        cout << "Too young to register" << endl;
    }
    else{
        cout << "Admission fee is $" << cost << endl;
    }

    return 0;
}