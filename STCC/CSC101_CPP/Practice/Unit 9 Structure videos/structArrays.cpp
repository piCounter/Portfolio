/**
 * Michael Buckley
 * May 4, 2021
 * This program uses an array of structure
*/

#include <iostream>
#include <iomanip>

using namespace std;

struct PayInfo {
    int hours;
    double payRate;

};

int main() {
    // main variables
    int n;

    cout << "Enter the number of employees: ";
    cin >> n;

    PayInfo workers[n]; // create array workers of length [n]

    // get employee pay data
    cout << "\nEnter the hours worked by all " << n << " employees and their hourly rate.\n\n";
    for (int i=0; i<n; i++) {
        cout << "Hours worked by employee # " << i+1 << ": ";
        cin >> workers[i].hours;
        cout << "Pay rate of employee # " << i+1 << ": ";
        cin >> workers[i].payRate;
    }

    // display each employee's gross pay
    cout << fixed << showpoint << setprecision(2);
    for (int i=0; i<n; i++) {
        cout << "Employee # " << i+1 << " gross pay = $" << (workers[i].hours * workers[i].payRate) << endl;
    }

    cout << endl;
    return 0;
}