/**
 * Michael Buckley
 * Apr 6, 2021
 * Homework 5 part 3
*/

#include <iostream>

using namespace std;

void initialize (int& x, int& y, char& z) {
    x = 0;
    y = 0;
    z = ' ';
}

void getHoursRate (double& hours, double& rate) {
    cout << "Enter hours worked: ";
    cin >> hours;
    cout << "Enter pay rate: ";
    cin >> rate;
}

double payCheck (double hours, double rate) {
    double pay;
    if (hours > 40)
        pay = ((hours - 40) * 1.5 * rate) + (40 * rate);
    else
        pay = hours * rate;
    return pay;
}

void printCheck (double hours, double rate) {
    cout << "Hours worked: " << hours << endl;
    cout << "Pay rate: " << rate << endl;
    cout << "This weeks salary: $" << payCheck(hours, rate) << endl;
}

void funcOne (int& x, int& y) {
    x = 35;
    y = 20;

    int userNum;
    cout << "Enter an integer: ";
    cin >> userNum;

    x = x * 2 + y - userNum;
}

void nextChar (char& z) {
    z++;
}

int main() {
    // main variable decliration
    int x, y;
    char z;
    double rate=0, hours=0, amount=0;

    // output
    initialize(x, y, z);
    cout << "After initalization: x = " << x << ", y = " << y << ", z = " << z << endl;
    getHoursRate(hours, rate);
    printCheck(hours, rate);
    cout << "Before calling funcOne: x = " << x << ", y = " << y << endl;
    funcOne(x, y);
    cout << "After calling funcOne: x = " << x << ", y = " << y << endl;
    cout << "Enter a character: ";
    cin >> z;
    cout << "Before calling nextChar: z = " << z << endl;
    nextChar(z);
    cout << "After calling nextChar: z = " << z << endl;
}