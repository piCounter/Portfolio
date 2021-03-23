/*
    Michael Buckley
    Feb 4, 2021
    Homework 1 - Question 3
    Markup calculator
*/

#include <iostream>
using namespace std;

int main()
{
    // program description
    cout << "--Markup Calculator--" << endl;

    // variable declaration
    double originalPrice;
    double markupPercentage;
    double taxRate;
    double retailPrice;
    double taxesCost;

        // user input
    cout << "Original price: $";
    cin >> originalPrice;
    cout << "Desired Markup percentage (decimal): ";
    cin >> markupPercentage;
    cout << "Sales tax rate (decimal): ";
    cin >> taxRate;
    cout << endl;

    // computaions
    retailPrice = originalPrice * (markupPercentage + 1);  
    taxesCost = retailPrice * taxRate;  // tax cost to consumer

    // return statement
    cout << "Original Price:\t\t" << "$" << originalPrice << endl;
    cout << "Desired Markup:\t\t" << markupPercentage << "%" << endl;
    cout << "Suggested Retail:\t" << "$" << retailPrice << endl;
    cout << "Tax rate:\t\t" << taxRate << "%" << endl;
    cout << "Taxes charged:\t\t" << "$" << taxesCost << endl;
    cout << "After tax retail:\t" << "$" << retailPrice * (taxRate + 1) << endl << endl;
    return 0;
}