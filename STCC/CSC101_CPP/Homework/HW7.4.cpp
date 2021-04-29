/**
 * Michael Buckley
 * Apr 27, 2021
 * Homework 7 part 4
*/

#include <iostream>
#include <iomanip>
using namespace std;
  
bool isMagic(int array[][3], int size) {
    // local variable
    int magicNumber = 15;
    
    // check all conditions of a magic square
    if ((array[0][0] + array[1][0] + array[2][0] == magicNumber) &&
        (array[0][1] + array[1][1] + array[2][1] == magicNumber) && 
        (array[0][2] + array[1][2] + array[2][2] == magicNumber) &&
        (array[0][0] + array[0][1] + array[0][2] == magicNumber) &&
        (array[1][0] + array[1][1] + array[1][2] == magicNumber) &&
        (array[2][0] + array[2][1] + array[2][2] == magicNumber) &&
        (array[0][0] + array[1][1] + array[2][2] == magicNumber) &&
        (array[0][2] + array[1][1] + array[2][0] == magicNumber)) {
        return true;
    }
    else {
        return false;
    }    
}

void shuffle(int nums[], int len) {
    // local variables
    int temp = 0;
    int randomIndex = 0;

    // shuffler randomly rearranges an existing 1 dim array
    for (int i=0; i<len; i++) {
        randomIndex = rand() % len;
        temp = nums[i];
        nums[i] = nums[randomIndex];
        nums[randomIndex] = temp;
    }
}

bool fillRandom() {
    // local variables
    int options[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int arraySize = 3;
    int magicSquare[arraySize][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};
    int index = 0;

    // shuffle array
    shuffle(options, 9);
    
    // convert shuffled array into 3x3 magic square
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            magicSquare[i][j] = options[index];
            index++;
        }  
    }
    
    // if the magicSquare 2 dim array is actually a magicSquare, it prints the square and returns true
    if (isMagic(magicSquare, arraySize) == true) {
        // to print magicSquare
        for (int x=0; x<3; x++) {
            for (int y=0; y<3; y++) {
                cout << setw(2) << magicSquare[x][y];
            }
            cout << endl;
        }
        return true;
    }
    else {
        return false;
    }
}

int main() {
    // local variables
    int tests = 100'000'000; // change this to run code more or less times
    int isMagic = 0;

    // run the tests one at a time
    for (int i=0; i<tests; i++) {
        if (fillRandom() == true) {
            isMagic++;
            // display test number if magicSquare
            cout << "^^ Test # " << (i+1) << endl << endl;
        }
    }

    // display successes
    cout << isMagic << " out of " << tests << " are magic" << endl << endl;

    return 0;
}