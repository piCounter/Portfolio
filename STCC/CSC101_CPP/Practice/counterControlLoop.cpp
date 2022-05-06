/**
 * Michael Buckley
 * March 23, 2021
 * Counter controlled loops
*/

#include <iomanip>
#include <iostream>

using namespace std;

int main() {

    // variable declaration
    int numSales, numItems, totalItems=0, counter=1;
    double unitCost;

    // set decimial percision
    cout << fixed << showpoint << setprecision(2);
    
    // set loop count
    cout << "Enter the number of sales people: ";
    cin >> numSales;


    // set unit cost
    cout << "Enter the price of each item: ";
    cin >> unitCost;
    cout << endl;

    // 
    while (counter <= numSales) {
        cout << "Enter number of items sold by sales person #" << counter << ": ";
        cin >> numItems;
        totalItems += numItems;
        counter++;
    }

    cout << "\nThe total number of items sold: " << totalItems << endl;
    cout << "\nThe total sales is $" << totalItems * unitCost << endl;
    cout << "\nThe average number of units sold: " << totalItems / (counter - 1.0) << endl;

    return 0;
}