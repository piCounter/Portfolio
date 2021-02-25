/**
 * Michael Buckley
 * Feb 23, 2021
 * Homework 2, question 3
 * Dairy Farm
*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    // variable declaration
    double cRadius, cHeight;
    const double PI = 3.141593;

    // input
    cout << "Input the radius of the cylinder's base: ";
    cin >> cRadius;
    cout << endl << "Input the height of the cylinder: ";
    cin >> cHeight;

    // computations
    double side = cbrt(PI * (pow(cRadius, 2)) * cHeight);

    // set precision
    cout << fixed << showpoint << setprecision(2);

    // output
    cout << "The cude sides are a length of " << side << " x " << side << " x " << side << endl << endl;

    return 0;

}