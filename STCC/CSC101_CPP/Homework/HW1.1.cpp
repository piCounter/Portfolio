/*
    Michael Buckley
    Feb 4, 2021
    Homework 1 - Question 1
    Generate the average of three input numbers
*/

#include <iostream>
using namespace std;

int main()
{
    // program desription
    cout << "Get the average of any three numbers.\n\n";

    // variable declaration
    int num1, num2, num3, average;

    // executable statements
    cout << "Enter first number: ";
    cin >> num1;
    cin.ignore();

    cout << "Enter second number: ";
    cin >> num2;
    cin.ignore();

    cout << "Enter third number: ";
    cin >> num3;
    cin.ignore();

    // calculate average
    average = (num1 + num2 + num3)/3;

    // return statements
    cout << "\n\tThe average of " << num1 << ", " << num2 << ", and " << num3 << " is: " << average << endl << endl;
    return 0;

}