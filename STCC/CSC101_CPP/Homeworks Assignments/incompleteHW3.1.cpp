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
    if ((num1 <= num2) && (num1 <= num3))
        first = num1;
    else if ((num2 <= num3) && (num2 <= num1))
        first = num2;
    else if ((num3 <= num1) && (num3 <= num2))
        first = num3;
    
    if ((num1 <= num2) && (num1 <= num3))
        num1 = second;
    else if ((num2 <= num3) && (num2 <= num1))
        num2 = second;
    else if ((num3 <= num1) && (num3 <= num2))
        num3 = second;
    
    if ((num1 <= num2) && (num1 <= num3))
        num1 = third;
    else if ((num2 <= num3) && (num2 <= num1))
        num2 = third;
    else if ((num3 <= num1) && (num3 <= num2))
        num3 = third;
    

    // output
    
    cout << first << " " << second << " " << third << endl;

}