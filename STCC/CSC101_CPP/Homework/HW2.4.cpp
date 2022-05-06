/**
 * Michael Buckley
 * Feb 23, 2021
 * Homework 2, question 4
 * Files
*/

#include <fstream>
#include <iostream>
#include <iomanip>

using namespace std;

int main () {

    // input
    string fileName, firstName, lastName;
    float updatedSalary, temp;

    // input fileName
    cout << "Enter the file name: ";
    cin >> fileName;

    // declare file variables
    ifstream readFile; // (input)fstream
    ofstream outputFile; //(output)fstream

    // open files
    readFile.open(fileName);
    outputFile.open("Ch3_Ex5Output.dat");

    // set answers to two decimal places
    outputFile << fixed << showpoint << setprecision(2);

    // read files into variables
    readFile >> firstName >> lastName >> updatedSalary >> temp;
    outputFile << firstName << " " << lastName << " " << updatedSalary << endl;

    readFile >> firstName >> lastName >> updatedSalary >> temp;
    outputFile << firstName << " " << lastName << " " << updatedSalary << endl;

    readFile >> firstName >> lastName >> updatedSalary >> temp;
    outputFile << firstName << " " << lastName << " " << updatedSalary << endl;

    // readFile.close();
    // outputFile.close();
    return 0;
}