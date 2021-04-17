/**
 * Michael Buckley
 * Apr 15, 2021
 * Homework 6 part 1
*/

#include <iostream>
#include <string>

using namespace std;

enum triangleType {
    scalene, isosceles, equailateral, noTriangle
};

// take in sides and returns triangleType
triangleType triangleShape(double s1, double s2, double s3) {

    if (s1 == s2 && s2 == s3)
        return equailateral;
    else if ((s1 == s2 || s1 == s3 || s2 == s3) && (!(s1+s2<=s3 || s1+s3<=s2 || s2+s3<=s1)))
        return isosceles;
    else if (!(s1+s2<=s3 || s1+s3<=s2 || s2+s3<=s1))
        return scalene;
    else
        return noTriangle;

}

int main() {
    double side1, side2, side3;
    string name;

    cout << "Enter 3 sides seperated by a space: ";
    cin >> side1 >> side2 >> side3;

    switch(triangleShape(side1, side2, side3)) {
        case 0:
            name = "a scalene";
            break;
        case 1:
            name = "an isosceles";
            break;
        case 2:
            name = "an equailateral";
            break;
        case 3:
            name = "not a";
            break;
    }

    cout << "The triangle is " << name << " triangle." << endl;

    return 0;
}