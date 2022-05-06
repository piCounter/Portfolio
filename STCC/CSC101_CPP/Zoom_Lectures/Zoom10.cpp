/**
 * Michael Buckley
 * Apr 22, 2021
 * Multidimentional Arrays
*/

#include <iostream>
#include <iomanip>

using namespace std;

void printArray(int [7][6]);
void largestValueRow(int [7][6]);
void largestValueColumn(int [7][6]);

int main() {
    const int rows = 6;
    const int columns = 5;
    int nums[rows+1][columns+1] = {
        {17, 8, 24, 10, 28, 0},
        {9, 14, 33, 21, 27, 0},
        {8, 12, 20, 21, 29, 0},
        {5, 22, 31, 17, 19, 0},
        {20, 18, 7, 26, 21, 0},
        {17, 15, 25, 20, 9, 0},
        {0, 0, 0, 0, 0, 0}
    };
    
    printArray(nums);
    cout << endl;

    largestValueRow(nums);
    largestValueColumn(nums);

    for (int r=0; r<6; r++) {
        cout << "The largest element in row " << (r+1) << " = " << nums[r][5] << endl;
    }
    cout << endl;
    for (int c=0; c<6-1; c++) {
        cout << "The largest element in column " << (c+1) << " = " << nums[6][c] << endl;
    }
    
    return 0;
}

// function to find the largest element in each column
void largestValueColumn(int y[7][6]) {
    for (int c=0; c<5; c++) {
        for (int r=0; r<6; r++) {
            if (y[r][c] > y[6][c]) {
                y[6][c] = y[r][c];
            }
        }
    }
}

// function to find the largest number in each row
void largestValueRow(int x[7][6]) {
    for (int r=0; r<6; r++) {
        for (int c=0; c<5; c++) {
            if (x[r][c] > x[r][5]) {
                x[r][5] = x[r][c];
            }
        }
    }
}

// subroutine to print the array
void printArray(int n[7][6]) {
    for (int r=0; r<6; r++) {
        for (int c=0; c<5; c++) {
            cout << setw(5) << n[r][c];
        }
        cout << endl;
    }
}

