/*
    Michael Buckley
    Feb 4, 2021
    Homework 1 - Question 2
    SECRET number and wages
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    // variable declaration
    const int SECRET = 11;
    const double RATE = 12.5;
    int num1, num2;
    int newNum;
    double hoursWorked;
    string name;
    double wages;

    // executable statements
        // user input
    cout << "Name: ";
    cin >> name;

    cout << "Hello " << name << ", please enter 2 integers...\n\tFirst integer: ";
    cin >> num1;
    cout << "\tSecond integer: ";
    cin >> num2;

        // computations
    newNum = (2*num1) + num2;
    cout << "The new number is: " << newNum << endl;
    newNum += SECRET;

    // return statement
    cout << "The new number plus the secret number is: " << newNum << endl << endl;


    // executable statements
        // user input
    cout << "\nEnter a decimal number between 0 and 70...\n\tHours Worked: ";
    cin >> hoursWorked;

        // computations
    wages = RATE * hoursWorked;

    // return statements
    cout << "Name:\t\t" << name << endl;
    cout << "Pay Rate:\t" << "$" << RATE << endl;
    cout << "Hours Worked:\t" << hoursWorked << endl;
    cout << "--------------------------" << endl;
    cout << "Salary: \t" << "$" << wages << endl << endl;
    return 0;
}