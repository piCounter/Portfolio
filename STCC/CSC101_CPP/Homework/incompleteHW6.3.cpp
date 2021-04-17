/**
 * Michael Buckley
 * Apr 15, 2021
 * Homework 6 part 3
*/

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

// checks if numerator or denominator is prime indicating LCD
// bool isPrime(int x) {
//     bool prime=true;

//     if (x == 0 || x == 1)
//         prime = false;
//     else 
//         for (int i=2; i<(x/2); i++) 
//             if (x % i == 0) {
//                 prime = false;
//                 break;
//             }
//     return prime;        
// }

// // convert decimal value to lowest common denominator fraction
// void decToFrac(long double r) {
//     // variables
//     long int precision = 100'000'000;
//     long int num = r * precision;
//     long int den = precision;

//     int i = 2;
//     while (true) {
//         for (i; i<=(num/2); i++) {
//             if (num % i == 0 && den % i == 0) {
//                 num /= i;
//                 den /= i;
//                 break;
//             }
//             else if (isPrime(num) || isPrime(den))
//                 break;
//         }   
        
//     }
//     cout << num << "/" << den;

// }

// return decimal value of added fractions
long double addFractions(int n1, int d1, int n2, int d2) {
    int cDenominator = d1 + d2;
    int num = n1 + n2;

    return (double)(num / cDenominator);
}

// return decimal value of subtracted fractions
long double subtractFractions(int n1, int d1, int n2, int d2) {
    int cDenominator = d1 * d2;
    int num = n1 - n2;

    return (abs(num) / cDenominator);
}

// return decimal value of multiplied fractions
long double multiplyFractions(int n1, int d1, int n2, int d2) {
    return ((double)(n1 * n2) / (double)(d1 / d2));
    }

// return decimal value of divided fractions
long double divideFractions(int n1, int d1, int n2, int d2) {
    int n = (n1 * d2), d = (n2 * d1);
   
    return (n/d);
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
        else {
            cout << "break ln 111";
            break;
        }
    }

    // call function based of user symbol choice
    switch(symbol) {
        case '+': 
            result = addFractions(n1, d1, n2, d2);
            break;
        case '-':
            result = subtractFractions(n1, d1, n2, d2);
            break;
        case '*':
            result = multiplyFractions(n1, d1, n2, d2);
            break;
        case '/':
            result = divideFractions(n1, d1, n2, d2);
            break;
    }

    // formatting for the output
    cout << n1 << "/" << d1 << " " << symbol << " " << n2 << "/" << d2 << " = ";
    
    cout << endl << endl;
        
}


int main() {
    
    menu();

    return 0;
}