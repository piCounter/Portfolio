/**
 * Michael Buckley
 * Mar 23, 2021
 * Homework 4 part 2
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    
    // variable declaration
    int firstNum=0, secondNum=0;
    int sum;


    // user input
    cout << "You'll need to enter two numbers. ";
    for (int i = 0; i < 2; i++) {
        if (firstNum == 0) {
            cout << "Enter the first number: ";
            cin >> firstNum;
        }
        else {  // makes sure that the value in firstNum is smaller than secondNum
            cout << "The second number should be greater than the first: ";
            cin >> secondNum;
            if (firstNum > secondNum) {
                int temp = firstNum;
                firstNum = secondNum;
                secondNum = temp;
            }
        }
    }


    // odd numbers output
    cout << "\nOdd numbers between " << firstNum << " and " << secondNum << ": ";
    for (int i = firstNum; i < secondNum; i++) {
        if (i % 2 == 1)
            cout << i << ", ";
    }
    cout << endl;


    // sum of all even numbers output
    sum = 0;
    for (int i = firstNum; i < secondNum; i++) {
        if (i % 2 == 0)
            sum += i;
    }
    cout << "\nThe sum of all even numbers between " << firstNum << " and " << secondNum << ": " << sum << endl;


    // numbers and their squares
    cout << "\nNumber and its square: " << endl;
    for (int i=1; i <= 10; i++)
        cout << setw(3) << right << i << setw(4) << right << i * i << endl;


    // sum of odd numbers squared
    sum = 0;
    for (int i = firstNum; i < secondNum; i++) {
        if (i % 2 == 1)
            sum += i * i;
    }
    cout << "\nThe sum of all odd numbers squares between " << firstNum << " and " << secondNum << " squared: " << sum << endl;


    // all uppercase letters using ascii
    cout << "\nAll uppercase letters are: ";
    for (int i = 65; i <= 90; i++)
        cout << setw(2) << (char)i;
    cout << endl;
}