/*
    Michael Buckley
    Feb 2, 2021
    Convert inches to feet and inches
*/

#include <iostream>
using namespace std;
int main()
{
    // define variable
    int inches;

    // ask for input
    cout << "Enter the number of inches you'd like to convert then press enter: ";
    cin >> inches;

    // output
    cout << inches << " inch(es) = ";
    cout << inches / 12 << " feet (foot) and ";
    cout << inches % 12 << " inch(es)" << endl;

    return 0;
}