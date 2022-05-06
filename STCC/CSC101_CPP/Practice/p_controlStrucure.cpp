/**
 * Michael Buckley
 * Mar, 2 2021
 * Review of control structures
*/

#include <iostream>
using namespace std;

int main()
{

    double marks = 101;
    char grade;

    cout << "Enter the total marks you have recieved: ";

    while (marks < 0 || marks > 100){
        cin >> marks;
        if (marks < 0 || marks > 100)
            cout << "Enter marks between 0 and 100: ";
    }

    if (marks >= 93)
        grade = 'A';
    else if (marks >= 83)
        grade = 'B';
    else if (marks >= 73)
        grade = 'C';
    else if (marks >= 63)
        grade = 'D';
    else
        grade = 'F';
    
    cout << "Grade: " << grade << endl << endl;
}