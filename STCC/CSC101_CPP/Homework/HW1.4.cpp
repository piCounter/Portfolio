/*
    Michael Buckley
    Feb 4, 2021
    Homework 1 - Question 4
    Calculate the amount of nuts needed
*/

#include <iostream>
using namespace std;

int main()
{
    // program description
    cout << "Calculate the amount of nuts needed for all the students.\n\n";  

    // variable declaration
    int students;
    int caloriesPerStud;
    int caloriesPerLbs;
    double total;

    // user input
    cout << "Number of students in the elementary school: ";
    cin >> students;
    cout << "Number of calories required for each sudent from the mixture: ";
    cin >> caloriesPerStud;
    cout << "Number of calories in each pound of nuts: ";
    cin >> caloriesPerLbs;

    // computation
    total = students * caloriesPerStud * .7 / caloriesPerLbs;

    // output
    cout << "\nThe amount of the nut and fruit mixure needed is " << total << "lbs." << endl << endl;
    return 0;
}