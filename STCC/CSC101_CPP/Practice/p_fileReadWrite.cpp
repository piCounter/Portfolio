/** 
 * Michael Buckley
 * March 9, 2021
 * Files read and write
*/


#include <iostream>
#include <fstream>

using namespace std;

int main() {
    // read from the file
    ifstream input;
    input.open("tempRead.txt");
    string firstName, lastName;
    int average;

    // write to file
    ofstream output;
    output.open("tempWrite.txt");
    

    for (int line = 0; line < 5; line++) {
        input >> firstName >> lastName >> average;
        output << lastName << ", " << firstName << "'s average: " << average << endl;
    }

    input.close();
    return 0;
}