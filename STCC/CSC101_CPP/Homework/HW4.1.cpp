/**
 * Michael Buckley
 * Mar 23, 2021
 * Homework 4 part 1
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    // copied from homework paper
    double pi = 0;
    long i;
    long n;

    cout << "Enter the value of n: ";
    cin >> n;
    cout << endl;

    for (i = 0; i < n; i++) {
        // pi = 0;
        if (i % 2 == 0)
            pi = pi + (1 / (2 * i + 1.0));
        else
            pi = pi - (1 / (2 * i + 1.0));
    }

    pi = 4 * pi;

    cout << endl << "pi = " << pi << endl;
    return 0;
}