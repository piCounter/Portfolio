/**
 * Michael Buckley
 * Mar 5, 2021
 * Homework 3 - part 1
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    // variable decliration
    int num1, num2, num3, first, second, third;
    string answer;

    // user input
    cout << "Enter your first number: ";
    cin >> num1;
    cout << "Enter your second number: ";
    cin >> num2;
    cout << "Enter your third number: ";
    cin >> num3;

    // reorder numbers
    if ((num1 <= num2) && (num1 <= num3)) {
        first = num1;
        if (num2 <= num3) {
            second = num2;
            third = num3;
        }
        else {
            second = num3;
            third = num2;
        }
    }
        else if ((num2 <= num3) && (num2 <= num1)) {
        first = num2;
        if (num3 <= num1) {
            second = num3;
            third = num1;
        }
        else {
            second = num1;
            third = num3;
        }
    }
        else if ((num3 <= num1) && (num3 <= num2)) {
        first = num3;
        if (num1 <= num2) {
            second = num1;
            third = num2;
        }
        else {
            second = num2;
            third = num1;
        }
    }
        else
            cout << "All numbers entered are equal" << endl;

    // output
    
    cout << first << " " << second << " " << third << endl;

}