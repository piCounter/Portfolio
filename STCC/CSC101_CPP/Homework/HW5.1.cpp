/**
 * Michael Buckley
 * Apr 6, 2021
 * Homework 5 part 1
*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;


double RootPI(double pi) {

    // returns the squareroot of input argument pi

    return sqrt(pi);
}


double Sphere(double pi) {

    // outputs the surface area and volume of a sphere using const PI as an argument

    // variable decliration
    double r;

    // user input
    cout << "Enter the radius of the sphere: ";
    cin >> r;

    // output
    cout << fixed << showpoint << setprecision(2);
    cout << "Surface area of the sphere: 4 * PI * " << r << " ^ 2 = " << 4.0 * pi * pow(r, 2) << endl;
    cout << "Volume of the sphere: 4 / 3 * PI * " << r << " ^ 3 = " << (4.0/3.0) * pi * pow(r, 3) << endl;

    return 0;
}


int main() {

    // constant decliration
    const double PI = 3.14159;

    // variable decliration
    double no;

    // set precision
    cout << fixed << showpoint << setprecision(2);

    // output
    cout << "The square root of PI = " << RootPI(PI) << endl;
    Sphere(PI);

    return 0;
}