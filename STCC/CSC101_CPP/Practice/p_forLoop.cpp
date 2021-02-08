/**
 * Michael Buckley
 * Feb 8, 2021
 * A simple program that incredments to zero using for loops
*/

#include <iostream>
using namespace std;

int main() {

    // for (init; condition; increment)
    // {
    //     statement(s);
    // }

    int userNum;
    cout << "Enter a number: ";
    cin >> userNum;
    int divide = 10000;
    int increment = userNum/divide;

    if (userNum > 0) {
        for (userNum; userNum > 0; userNum--) {
            if (userNum % divide == 0) {
                cout << --increment << endl;
            }
        }
    }
    else {
        for (userNum; userNum < 0; userNum++) {
            if (userNum % divide == 0) {
                cout << --increment << endl;
            }
        }
    }
}