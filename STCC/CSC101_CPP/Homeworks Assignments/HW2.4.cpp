/**
 * Michael Buckley
 * Feb 23, 2021
 * Homework 2, question 4
 * Files
*/

#include <fstream>
#include <iostream>

using namespace std;

int main () {

    string fileName, fname, lname;
    float updatedSalary, temp;

    cout << "Enter the file name: ";
    cin >> fileName;

    ifstream readFile;

    readFile.open(fileName);
    ofstream outputFile;

    outputFile.open("Ch3_Ex5Output.dat");

    readFile >> fname >> lname >> updatedSalary >> temp;
    outputFile << fname << " " << lname << " " << updatedSalary << endl;

    readFile >> fname >> lname >> updatedSalary >> temp;
    outputFile << fname << " " << lname << " " << updatedSalary << endl;

    readFile >> fname >> lname >> updatedSalary >> temp;
    outputFile << fname << " " << lname << " " << updatedSalary << endl;

    // readFile.close();
    // outputFile.close();

}