/*
    Unit 2 - Video 2
    Order of operations and other functions
    Fed 1, 2021
*/


#include <iostream>
using namespace std;

int main()
{
    // Division
    cout << "14/3 = " << 14/3 << endl;  //  / gives a quotient/floor divide
    cout << "14%3 = " << 14%3 << endl;  //  % gives a remainder
    cout << "14.0/3 = " << 14.0/3 << endl;  // decimal value needed in at least one value during division equasion for float return
    cout << "14/3.0 = " << 14/3.0 << endl;  // decimal value needed in at least one value during division equasion for float return
    cout << "12/5 + 4.5 = " << 12/5 + 4.5 << endl;  // gives wrong answer due to lack of decimal in quation

    // Static_cast <int> & <double>
    cout << static_cast<int>(6.96546) << endl;  // <int> does not round
    cout << static_cast<double>(7) << endl;
    cout << static_cast<double>(14/3) << endl;  // perform <double> to a single value for accurate maths
    cout << static_cast<double>(14)/3 << endl;  // perform <double> to a single value for accurate maths

    // const
    double pi = 3.14;  // assigning variable pi as a double with value 3.14
    pi = pi + 2.2;  // changing the variable value
    cout << pi << endl;  // print value to screen
    
    const double pi = 3.14;  // assigning variable pi as a constant double with value 3.14
    pi = pi + 2.2;  // will throw error because you can not change a constant variable once it has been creat
    cout << pi << endl;

    cout << endl;
    return 0;
}