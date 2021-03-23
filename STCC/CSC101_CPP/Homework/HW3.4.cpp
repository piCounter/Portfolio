/**
 * Michael Buckley
 * Mar 5, 2021
 * Homework 3 - part 4
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    // variable decliration
    double rentalCost, salesTax, totalRoomsCost, totalBill, discount=0;
    int roomsBooked, noOfDays, owidth=15;

    // input
    cout << "Enter cost of nightly rental for each room: $";
    cin >> rentalCost;
    cout << "Enter the number of rooms booked: ";
    cin >> roomsBooked;
    cout << "Enter number of days booked: ";
    cin >> noOfDays;
    cout << "Sales tax (as a percent): ";
    cin >> salesTax;
    cout << endl << endl;

    // discount
    if (roomsBooked >= 30)
        discount += .3;
    else if (roomsBooked >= 20)
        discount += .2;
    else if (roomsBooked >= 10)
        discount += .1;
    
    if (noOfDays >= 3)
        discount += .05;

    // calculations
    totalRoomsCost = roomsBooked * noOfDays * rentalCost * (1-discount); // total room cost after discount
    salesTax = (salesTax/100.0) * totalRoomsCost;
    totalBill = totalRoomsCost + salesTax;

    // set decimal precision to 2
    cout << fixed << setprecision(2);

    // output
    cout << "****************************************" << setfill('.') << endl;
    cout << setw(owidth) << left << "Rental: $" << right << setw(owidth-5) << rentalCost << endl;
    cout << setw(owidth) << left << "Discount: " << setw(owidth-5) << right << discount*100 << "%" << endl;
    cout << setw(owidth) << left << "Rooms: " << setw(owidth-5) << right << roomsBooked << endl;
    cout << setw(owidth) << left << "Days: " << setw(owidth-5) << right << noOfDays << endl;
    cout << setw(owidth) << left << "Rooms Total: $" << right << setw(owidth-5) << totalRoomsCost << endl;
    cout << setw(owidth) << left << "Sales Tax: $" << right << setw(owidth-5) << salesTax << endl;
    cout << setw(owidth) << left << "Total Bill: $" << right << setw(owidth-5) << totalBill << endl << endl;

    return 0;
}