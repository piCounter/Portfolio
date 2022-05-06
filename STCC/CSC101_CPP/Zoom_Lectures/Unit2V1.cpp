/*  
    Unit 2 - Video 1
    Calculate the area and perimeter of a rectangle
    Feb 1, 2021
*/


#include <iostream>
using namespace std;
int main()
{
    // Variable declirations
    double Length;
    double Width;
    double Area, Perimeter;

    // Assign values to variables
    Length = 534.54;
    Width = 16.534;

    // Calculating values
    Area = Length * Width;
    Perimeter = 2*Length + 2*Width;  // could also do 2*(Length + Width)

    // Display Area and Perimeter
    cout << "Length = " << Length << endl;
    cout << "Width = " << Width << endl;
    cout << "Perimeter = " << Perimeter << endl;
    cout << "Area = " << Area << endl << endl;

    return 0;  // Must be the final line of a program
}
