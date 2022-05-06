/**
 * Michael Buckley
 * Apr 27, 2021
 * Homework 7 part 1
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // declare variables
    int size = 50;
    double alpha[size];

    // set up for loop
    for (int i=0; i<size; i++) {
        // set alpha values for alpha[0] through alpha[24]
        if (i < size/2) {
            alpha[i] = i * i;
        }
        // set alpha values for alpha[25] through alpha[49]
        else {
            alpha[i] = i * 3;
        }
        // increments output to next line after 10 values displayed
        if (i % 10 == 0) {
            cout << endl;
        }
        // displays output
        cout << setw(5) << alpha[i];
    }
    cout << endl;

    return 0;
}