/**
 * Michael Buckley
 * Feb 11, 2021
 * Homework 2, question 1
 * 
 * Their were two logic errors. That had the division backwards. They are flagged and corrected below.
*/

//Logic errors.
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
			 double cost;
			 double area;
			 double bagSize;
				cout << fixed << showpoint << setprecision(2);
				cout << "Enter the amount of fertilizer, in pounds, in one bag: ";
				cin >> bagSize;
				cout << endl;
				cout << "Enter the cost of the " << bagSize << " pound fertilizer bag: ";
				cin >> cost;
				cout << endl;
				cout << "Enter the area, in square feet, that can be fertilized by one bag: ";
				cin >> area;
				cout << endl;
				cout << "The cost of the fertilizer per pound is: $" << cost / bagSize << endl; // logic error here
				cout << "The cost of fertilizing per square foot is: $" << cost / area << endl << endl; // logic error here
			 return 0;
}