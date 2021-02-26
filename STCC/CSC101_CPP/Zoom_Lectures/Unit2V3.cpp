// Unit 2 - Video 3
// Using same file from video 1 but augmenting values with inputs
// Feb 1, 2021


#include <iostream>
using namespace std;
int main()
{
    // Variable declirations
    double Length;
    double Width;
    double Area, Perimeter;
    string FName, LName;

    // Assign values to variables
    cout << "Enter the length ";
    cin >> Length;
    cout << "Enter the width ";
    cin >> Width;
    cout << "Enter your first and last name ";
    cin >> FName >> LName;  // variable breaks on ' '

    // Calculating values
    Area = Length * Width;
    Perimeter = 2*Length + 2*Width;

    // Display Area and Perimeter
    cout << "Length = " << Length << endl;
    cout << "Width = " << Width << endl;
    cout << "Perimeter = " << Perimeter << endl;
    cout << "Area = " << Area << endl;
    cout << "Thank you " << FName << ' ' << LName << endl;

    cout << endl;
    return 0;
}
