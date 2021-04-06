/**
 * Michael Buckley
 * Apr 6, 2021
 * Homework 5 part 2
*/

#include <iostream>
#include <iomanip>

using namespace std;

// global variables
const double PI = 3.14159;

double rectangle(double l, double w) {
    return l * w;
}

double circle(double r) {
    return PI * r * r;
}

double cylinder(double bR, double h) {
    return PI * bR * bR * h;
}

int main() {
    // main variables
    double radius, height, length, width;
    int choice = 0;

    // set precision
    cout << fixed << showpoint << setprecision(2) << endl;

    // welcome
    cout << "This program can calculate the area of a rectangle, the area of a circle, or volume of a cylinder." << endl;

    while (choice != -1) {
        cout << "To run the program enter: " << endl;
        cout << "1: To find the area of rectangle." << endl;
        cout << "2: To find the area of a circle." << endl;
        cout << "3: To find the volume of a cylinder." << endl;
        cout << "-1: To terminate the program." << endl;
        cin >> choice;
        cout << endl;

        switch (choice) {
            case -1:
                cout << "Good Bye for now" << endl;
                break;

            case 1:
                cout << "Enter the length and the width of the rectangle: ";
                cin >> length >> width;
                cout << endl;
                cout << "Area = " << rectangle(length, width) << endl;
                break;

            case 2:
                cout << "Enter the radius of the circle: ";
                cin >> radius;
                cout << endl;
                cout << "Area = " << circle(radius) << endl;
                break;

            case 3:
                cout << "Enter the radius of the base and the height of the cylinder: ";
                cin >> radius >> height;
                cout << endl;
                cout << "Volume = " << cylinder(radius, height) << endl;
                break;

            default:
                cout << "Invalid choice!" << endl;
        }
    }
}