/**
 * Michael Buckley
 * Mar 23, 2021
 * Homework 4 part 3
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    // variable delaration
    int shippingCost=10, items=-1;
    double amount, totalCost;


    // negative input check
    while (items < 0) {
        // user input for order qty
        cout << "Enter the number of items ordered: ";
        cin >> items;
        cout << endl;
        if (items < 0)
            cout << "Number entered is invalid" << endl;
    }

    // user input and total cost tally
    for (int i=1; i <= items; i++) {
        cout << "Enter the price of item no. " << i << ": ";
        cin >> amount;

        totalCost += amount;

        // stops endless loop incase of error - shouldnt be needed
        if (i >= 100)
            break;
    }

    // calculate shipping
    if (totalCost >= 200)
        shippingCost = 0;
    else
        shippingCost *= items;
    
    // add shipping total to total cost
    totalCost += shippingCost;

    // set decimal precision
    cout << fixed << showpoint << setprecision(2);

    // output
    cout << "\nThe shipping and handling fee is: $" << shippingCost << endl;
    cout << "The billing amount is :$" << totalCost << endl;

    return 0;
}