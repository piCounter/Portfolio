/*
    Michael Buckley
    Feb 4, 2021
    Ask for sales figures from 3 days,
    then calulates total sales and displays
*/

#include <iostream>
#include <iomanip>  //input output manipulation - setprecision() showpoint setw()
using namespace std;

int main(){

    char person1[50] = "abcdefghijklmnopqrstuvwxyz";  // char defines the string limit-1. so this line takes UP TO 49 characters
    char person2[10] = "abcdewxyz";
    cout << right << setw(50) << person1 << endl;
    cout << right << setw(50) << person2 << endl;
    string cat;

    char ch;
    int number;
    cout << "Enter a number ";
    cin >> number;
    cout << "Enter your name ";
    cin.ignore();  // use for skipping programs as its reading enter as an input
    getline(cin, cat);  // stores name prompt in string cat
    // cout << "enter any character ";
    // cin >> ch;
    // cout << "Number is " << number << " character is " << ch << endl;
    cout << number << endl;
    cout << cat << endl;



//     // Define variables
//     int day1, day2, day3, total;

//     // Get sales numbers
//     cout << "Enter the sales for day 1: ";
//     cin >> day1;
//     cout << "Enter the sales for day 2: ";
//     cin >> day2;
//     cout << "Enter the sales for day 3: ";
//     cin >> day3;  //BUG sometimes jumps inputs

//     // Calculate total
//     total = day1 + day2 + day3;

//     // Display total
//     cout << "\n\n\t Sales Figures\n";
//     cout << "\t---------------\n";
//     cout << fixed << setprecision(2) << showpoint;  // set precision of decimal places  // showpoint makes sure that the decimal point shows
//     cout << right << "\tDay 1: " << setw(15) << day1 << endl;
//     cout << "\tDay 2: " << setw(8) << day2 << endl;
//     cout << "\tDay 3: " << setw(8) << day3 << endl;
//     cout << "\tTotal: " << setw(8) << total << endl;

    cout << endl;
    return 0;
}