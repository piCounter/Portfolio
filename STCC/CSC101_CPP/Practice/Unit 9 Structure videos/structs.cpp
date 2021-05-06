/**
 * Michael Buckley
 * May 4, 2021
 * This program demonstrates the use of structures
*/

#include <iostream>
#include <iomanip>

using namespace std;

struct Payroll {
    int empNumber;
    char name[25]; // max number of characters in the string name
    double hours;
    double payRate;
    double grossPay;
};

int main() {
        
    // initilize employee
    Payroll employee1;
    Payroll employee2 = {6578, "Betty Rose", 37, 25.73}; // grossPay is left as null until created on line 46

    // get employee1 number
    cout << "Enter employee1 number: ";
    cin >> employee1.empNumber;

    // get employee1 name
    cout << "Enter employee1 name: ";
    cin.ignore(); // ignore enter key
    cin.getline(employee1.name, 25);

    // get employee1 hours worked
    cout << "Enter employee1 hours: ";
    cin >> employee1.hours;

    // get employee1 payRate
    cout << "Enter employee1 pay rate: ";
    cin >> employee1.payRate;

    // get employee1 grossPay
    employee1.grossPay = employee1.hours * employee1.payRate;
    // get employee2 grossPay
    employee2.grossPay = employee2.hours * employee2.payRate;
    

    // display employee1 data
    cout << "Here is the employee payroll data: " << endl;
    cout << fixed << showpoint << setprecision(2) << endl;

    cout << "Name: " << employee1.name << endl;
    cout << "Hours: " << employee1.hours << endl;
    cout << "Rate: " << employee1.payRate << endl;
    cout << "Gross Pay: " << employee1.grossPay << endl;
    

    return 0;
}