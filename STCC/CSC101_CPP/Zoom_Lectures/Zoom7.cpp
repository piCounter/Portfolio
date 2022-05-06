/**
 * Michael Buckley
 * Mar 25, 2021
 * Zoom 7
*/

#include <iostream>
#include <cctype>

using namespace std;

// first function
void First() {
    cout << "We are inside the first function.\n ";
}

// second function
int Size () {
    int x;
    cout << "Please enter the class size --> ";
    cin >> x;
    return x;
}

// third function - receive 3 number from the main program and print the largest
double Largest (double a, double b, double c) {
    if (a > b && a > c)
        return a;
    else if (b > a && b > c)
        return b;
    else
        return c;
}

// forth function - recieves a charater from main and return the upper case
char Cap (char x) {
    return static_cast<char>(toupper(x));
}

// fifth function - recieves two numbers and return true if number is greater than number 2
bool One (int a, int b) {
    if (a > b)
        return true;
    else
        return false;
}

// primary funtion that runs the code
int main() {
    
    First(); // call first function

    int s = Size(); // call second function and assign the return to int s
    cout << "The class size is  " << s << endl;

    double x, y, z;
    cout << "Enter three numbers: ";
    cin >> x >> y >> z;
    double biggest = Largest(x,y,z); // call third function and assign return values from function Largest to the variable biggest
    cout << "The largest number is " << biggest << endl;

    cout << "Enter any character: ";
    char cat;
    cin >> cat;
    cout << "The uppercase of " << cat << " is " << Cap(cat) << endl; // call forth function using a variable from main()

    cout << "Enter 2 integers: ";
    int a, b;
    cin >> a >> b;
    bool Mom = One(a,b); // call fifth function and assign return values from function One
    if (Mom == true)
        cout << "Number 1 is larger than number 2.";
    else
        cout << "Number 2 is larger than number 1.";

    return 0;
}
