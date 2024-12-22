#include <iostream>
using namespace std;

// 03.03.03 Grades program
/*
Create a grades program that allows the user to enter a letter grade (A, B, C, D or E), which then displays the range of marks associated with that letter. Use the following range:
	A	80 – 100
	B	70 – 79
	C	60 – 69
	D	50 – 59
	E	0 – 49
If the user enters anything else, an error message should appear, for example, “Invalid letter grade”.
*/

int main(){
    string grade;
    cout << "Grade: ";
    cin >> grade;
    if (grade == "A"){
        cout << "A: 80-100" << endl;
    }
    else if (grade == "B"){
        cout << "B: 70-79" << endl;
    }
    else if (grade == "C"){
        cout << "C: 60-69" << endl;
    }
    else if (grade == "D"){
        cout << "D: 50-59" << endl;
    }
    else if (grade == "F"){
        cout << "F: 0-49" << endl;
    }
    else{
        cout << "Invalid letter grade" << endl;
    }
    return 0;
}