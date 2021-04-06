/**
 * 
*/

#include <iostream>
using namespace std;

void Sum(int, int);
void Product(int&, int&);
double z = 3; // global variable

int main() {
    int num1 = 5, num2 = 7;
    Sum(num1, num2);
    Product(num1, num2);
    cout << "Num1 = " << num1 << " and num2 = " << num2 << endl;
    cout << "Z in main = " << z << endl;
    return 0;

}

void Sum(int a, int b) { // Value Parameters
    int ans = a + b;
    cout << "The sum of the 2 numbers is " << ans << endl;
    a = a + 5;
    cout << "Z in Sum = " << z << endl;

}

void Product(int& a, int& b) { // Reference Parameters - Share the address
    int ans = a * b;
    cout << "The sum of the 2 numbers is " << ans << endl;
    a = a + 5;
    b = b - 5;
    cout << "Z in Product = " << z << endl;
}