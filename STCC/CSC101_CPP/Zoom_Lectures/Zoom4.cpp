/**
 * Michael Buckley
 * Feb 18, 2021
 * How to use predefined functions
 */

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

const double PI = 3.1416;

int main() {
    string name;
    int age = 0;
    cout << "Enter name and age: ";
    cin >> name >> age;
    cout << "Name: " << name << endl << "\tAge: " << age << endl;



    // char built in manipulations
    // char ch;
    // cout << "Enter a sting: ";
    // cin.get(ch);
    // cout << endl;
    // cout << "After first cin.get(ch): ch = " << ch << endl;
    // cin.get(ch);
    // cin.putback(ch);
    // cout << "After putback then cin.get(ch): ch = " << ch << endl;
    // cin.get(ch);
    // cout << "After third cin.get(ch): ch = " << ch << endl;
    // ch = cin.peek();
    // cout << "After cin.peek(): ch = " << ch << endl;




    // double x = 5.43;
    // cout << "the ln(5.43) = " << log(x) << endl;
    // cout << "the log(5.43) = " << log10(x) << endl;
    // cout << "e^5.43 = " << exp(x) << endl;
    // cout << "ceiling(5.43) = " << ceil(x) << endl;
    // cout << "floor(5.43) = " << floor(x) << endl;




    // double radius, volume;
    // string str;

    // // Volume of a sphere
    // cout << "Enter the radius of the sphere: ";
    // cin >> radius;
    // cout << endl;

    // volume = (4.0/3.0) * PI * pow(radius, 3.0);
    // cout << "The volume of the sphere is: " << volume << endl << endl;

    // // Distance between 2 points
    // double x1, y1, x2, y2, distance;
    // cout << "Enter the coordinates of two points in the x-y plane: ";
    // cin >> x1 >> y1 >> x2 >> y2;
    // distance = sqrt(pow((x2-x1), 2) + pow ((y2-y1), 2));
    // cout << endl;
    // cout << "The distance between the points (" << x1 << ", " << y1 << ") and (" << x2 << ", " << y2 << ") is: " << distance << endl;

    // // Strings
    // str = "Programming with C++";
    // cout << "The number of characters, including blanks in '" << str << "' is " << str.length() << "." << endl << endl;


    return 0;
}