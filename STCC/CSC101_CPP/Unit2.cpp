/*
    Michael Buckley
    Feb 2, 2021
    dataType identifiers and arithetic operators
*/

#include <iostream>
using namespace std;
int main()
{
    // dataType identifier; - creates the variables and assigns datatypes
    int counter;
    double interestRate;  // although float uses less space, double is the default datatype for equations. So unless space is a concern, best practice is to use double instead of float to prevent a type error.
    char grade;

    // Variable assignment
    counter = 5;
    interestRate = .05;
    grade = 'A';



    // Arithmetic Operators are:
    // + (add)
    // - (subtract)
    // * (multiply)
    // / (divide) - / requires at least one number to have a decimal for accurate computaion
    // % (modulo)aka remainder
    cout << "Division problems" << endl;
    cout << "  5 / 4 = " << 5 / 4 << endl;
    cout << "5.0 / 4 = " << 5.0 / 4 << endl;
    cout << "  5 % 4 = " << 5 % 4 << endl;
    // cout << "5.0 % 4 = " << 5.0 % 4 << endl;  // could not compute due to '5.0' being type double. needs to be int
    // cout << "5.0 % 4.0 = " << 5.0 % 4.0 << endl;  // could not compute due to '5.0' and '4.0' being type double. needs to be int


    // static_cast<dataTypeName>(expression)
    static_cast<int>(7.9);  // = 7
    static_cast<double>(7);  // = 7.0
    static_cast<double>(5+2);  // = 7.0
    static_cast<double>(15) / 2;  // = 15.0
    static_cast<double>(15 / 2);  // = 7.0
    static_cast<int>(7.8 +static_cast<double>(15)/2);


    cout << endl;
    return 0;
}