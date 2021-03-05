/**
 * Michael Buckley
 * Mar 5, 2021
 * Homework 3 - part 2
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    // variable decliration
    int cookies, boxes, containers;

    // input
    cout << "Enter the number of cookies: ";
    cin >> cookies;

    // computations
    boxes = cookies / 24;
    containers = boxes / 75;

    // output
    cout << boxes << " boxe(s) total making " << containers << " container(s)." << endl;
    
    if (boxes % 75 > 1)
        cout << boxes % 75 << " boxes were left over." << endl;
    else if (boxes % 75 > 0)
        cout << boxes % 75 << " box was left over." << endl;

    if (cookies % 24 > 1)
        cout << cookies % 24 << " cookies were left over." << endl;
    else if (cookies % 24 > 0)
        cout << cookies % 24 << " cookie was left over." << endl;

    
    return 0;
}