/**
 * Michael Buckley
 * Mar 5, 2021
 * Homework 3 - part 3
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    // variable decliration
    double baseSalary, totalSales, additionalBonus, pay;
    int noOfServiceYears, bonus;

    // set decimial precision
    cout << fixed << showpoint << setprecision(2);

    // input
    cout << "Enter base salary: $";
    cin >> baseSalary;
    cout << "Enter total sales: $";
    cin >> totalSales;
    cout << "Enter number of years of service: ";
    cin >> noOfServiceYears;

    // years of service
    if (noOfServiceYears <= 5)
        bonus = 10 * noOfServiceYears;
    else
        bonus = 20 * noOfServiceYears;
    
    // commission
    if ((totalSales >= 5'000) && (totalSales < 10'000))
        additionalBonus = .03;
    else if (totalSales >= 10'000)
        additionalBonus = .06;

    // calculations
    pay = (baseSalary + bonus) + (totalSales * additionalBonus);

    // output
    cout << "________________" << endl;
    cout << "Total pay: $" << pay << endl;
    


}