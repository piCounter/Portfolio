/**
 * Michael Buckley
 * Feb 23, 2021
 * Homework 2, question 2
 * Interest
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main () {

    // variable declaration
    double netBalance = 0;
    double payment = 0;
    int d1, d2;
    double interestRate;


    // input
    cout << "Net Balance: ";
    cin >> netBalance;
    cout << endl << "Enter the number of days in the billing cycle: ";
    cin >> d1;
    cout << endl << "Enter the payment made: ";
    cin >> payment;
    cout << endl << "Enter the number of days payment is made before billing cycle: ";
    cin >> d2;
    cout << endl << "Enter the interest rate: ";
    cin >> interestRate;

    // computations
    double averageDailyBalance = (netBalance * d1 - payment * d2) / d1;
    double interest = averageDailyBalance * interestRate;

    // output
	cout << fixed << showpoint << setprecision(2);
    cout << "The interest is $" << interest << endl << endl;

    return 0;
}