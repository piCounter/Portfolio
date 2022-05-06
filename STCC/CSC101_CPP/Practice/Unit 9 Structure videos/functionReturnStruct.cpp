/**
 * Michael Buckley
 * May 4, 2021
 * Use a function to return a structure
*/

#include <iostream>
#include <iomanip>
#include <cmath>


using namespace std;

// global variables
double PI = 3.14159265;

// date structure
struct Circle {
    double radius;
    double diameter;
    double area;
};

Circle getInfo();

int main() {
    Circle c;
    c = getInfo();

    // display the circle data
    cout << fixed << showpoint << setprecision(4);
    cout << "Radius = " << c.radius << endl;
    cout << "Diameter = " << c.diameter << endl;
    cout << "Area = " << c.area << endl;

    return 0;
}

// function getInfo
Circle getInfo() {
    Circle temp;
    cout << "Enter the diameter: ";
    cin >> temp.diameter;
    temp.radius = temp.diameter/2.0;
    temp.area = PI * pow(temp.radius, 2);

    return temp;
}
