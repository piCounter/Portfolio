/**
 * Michael Buckley
 * Mar 3, 2021
 * switch vs if
*/

#include <iostream>
using namespace std;
int main()
{
    int num;

    cout << "Enter an integer between 0 and 4: ";
    cin >> num;
    cout << endl;

    // if (num == 0)
    //     cout << "Welcome to Java\n";
    // else if ((num == 1) || (num == 2))
    //     cout << "Welcome to C++\n";
    // else if ((num == 3) || (num == 4))
    //     cout << "Welcome to Pysics\n";
    // else
    //     cout << "The number is out of range\n";

    // switch (num) {
    //     case 0:
    //         cout << "Welcome to Java\n";
    //         break;
    //     case 1:
    //     case 2:
    //         cout << "Welcome to C++\n";
    //         break;
    //     case 3:
    //     case 4:
    //         cout << "Welcome to Pysics\n";
    //         break;
    //    default:
    //         cout << "The number is out of range\n";
    // }

    /**
    // switch num from int to char

switch (tolower(num)) {
    case 'j':
    // case 'J':
        cout << "Welcome to Java\n";
        break;
    case 'c':
    // case 'C':
        cout << "Welcome to C++\n";
        break;
    case 'p':
    // case 'P': 
        cout << "Welcome to Pysics\n";
        break;
   default:
        cout << "The number is out of range\n";
}
*/

    return 0;
}