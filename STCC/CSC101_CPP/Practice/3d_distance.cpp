/**
 * Michael Buckley
 * Mar 2, 2021
 * Calculate the distance in a straight line in a 3d plane
*/
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    
    // declare variables
    int x1, x2, y1, y2, z1, z2;

    // accept input
    cout << "Enter the coordinates in the form < x1 y1 z1 x y2 z2 >: ";
    cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;
    cout << endl;

    // computations
    double distance = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2) + pow((z2 - z1), 2));

    // output
    cout << "Entered: (" << x1 << ", " << y1 << ", " << z1 << ") (" << x2 << ", " << y2 << ", " << z2 << ")" << endl;
    cout << fixed << showpoint << setprecision(2) << "Distance: " << distance << endl << endl;

    return 0;
}