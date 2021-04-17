/**
 * Michael Buckley
 * Apr 15, 2021
 * Homework 6 part 3
*/

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

// return decimal value of added fractions
void addFractions(int n1, int d1, int n2, int d2) {;
    int cD = d1 * d2;
    int n = n1 * d2 + n2 * d1;
    cout << n << "/" << cD;
}

// return decimal value of subtracted fractions
void subtractFractions(int n1, int d1, int n2, int d2) {
    int cD = d1 * d2;
    int n = n1 * d2 - n2 * d1;
    cout << n << "/" << cD;
}

// return decimal value of multiplied fractions
void multiplyFractions(int n1, int d1, int n2, int d2) {
    int n = n1 * n2;
    int cD = d1 * d2;
    cout << n << "/" << cD;
    }

// return decimal value of divided fractions
void divideFractions(int n1, int d1, int n2, int d2) {
    int n = n1 * d2;
    int cD = n2 * d1;
    cout << n << "/" << cD;
}

// User menu
void menu() {
    char symbol;
    int n1, d1, n2, d2;
    long double result;

    cout << "\t\tWelcome to Fraction Calculator" << endl;

    // lets user enter operation type
    while(true) {
        cout << "Would you like to add(+), subtract(-), multiply(*), or divide(/)? (Enter +  -  *  /): ";
        cin.get(symbol);
        if (symbol == '+' || symbol == '-' || symbol == '*' || symbol == '/')
            break;
        else
            cout << "Invalid symbol, try again." << endl;
    }

    // user enters all their fractions

    while (true) {
        cout << "Enter the numberator and denominator of fraction " << 1 << " you would like to " << symbol << ", separatorated by a space: ";
        cin >> n1 >> d1;

        cout << "Enter the numberator and denominator of fraction " << 2 << " you would like to " << symbol << ", separatorated by a space: ";
        cin >> n2 >> d2;

        if (d1 == 0 || d2 == 0)
            cout << "Denominator can not be zero" << endl << endl;
        else
            break;
    }

    // call function based of user symbol choice
    // formatting for the output
    cout << n1 << "/" << d1 << " " << symbol << " " << n2 << "/" << d2 << " = ";
    switch(symbol) {
        case '+': 
            addFractions(n1, d1, n2, d2);
            break;
        case '-':
            subtractFractions(n1, d1, n2, d2);
            break;
        case '*':
            multiplyFractions(n1, d1, n2, d2);
            break;
        case '/':
            divideFractions(n1, d1, n2, d2);
            break;
    }
    cout << endl << endl;
}


int main() {
    
    menu();

    return 0;
}