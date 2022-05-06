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
    cout << "Input the height of the cylinder: ";
    cin >> cHeight;

    // computations
    double volume = PI * (pow(cRadius, 2)) * cHeight;
    double side = pow(volume, 1/3.0); // gets volume o f cylinder then calculates sides

    // set precision
    cout << fixed << showpoint << setprecision(2);

    // output
    cout << "Volume: " << volume << endl;
    cout << "The cude sides are a length of " << side << " x " << side << " x " << side << endl << endl;

    return 0;

}