/**
 * Michael Buckley
 * Mar 3, 2021
 * Unit 3 - video 5 setfill() setw()
*/

#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

int main() {

    // variable decliration
    string movie;
    double priceAdult, priceChild, donationPercentage, donationAmount, grossAmount;
    int ticketsAdult, ticketsChild, width = 35;

    // input
    cout << "Enter the movie name: ";
    getline(cin, movie); // gets everything until enter is pressed
    cout << "Enter the price of an adult ticket: ";
    cin >> priceAdult;
    cout << "Enter the price of a child ticket: ";
    cin >> priceChild;
    cout << "Enter the number of adult tickets: ";
    cin >> ticketsAdult;
    cout << "Enter the number of child tickets: ";
    cin >> ticketsChild;
    cout << "What percentage of the money do you wish to donate? (Ex: 10.5): ";
    cin >> donationPercentage;

    // computaions
    grossAmount = (priceAdult * ticketsAdult) + (priceChild * ticketsChild);
    donationAmount = grossAmount * (donationPercentage/100.0);
    
    // output
    cout << "\n\n-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n";
    cout << fixed << showpoint << setprecision(2);
    cout << setfill('.') << setw(width) << left << "Movie Name: "  << right << movie << endl;
    cout << setfill('.') << setw(width) << left << "Gross Amount: "  << right << '$' << grossAmount << endl;
    cout << setfill('.') << setw(width) << left << "Donation Percentage: "  << right << donationPercentage << '%' << endl;
    cout << setfill('.') << setw(width) << left << "Donation Amount: "  << right << '$' << donationAmount << endl;
    cout << setfill('.') << setw(width) << left << "Net Amount: "  << right << '$' << grossAmount-donationAmount << endl;

    return 0;
}