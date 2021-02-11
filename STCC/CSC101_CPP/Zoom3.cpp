/**
 * Michael Buckley
 * Feb 11, 2021
 * Write to a file
 * Read from a file
 */

#include <iostream>
#include <fstream>

using namespace std;
int main() {
    // write to file
    ofstream joe;  // joe can be named whatever i want but "file" is standard
    joe.open("Music.txt");
    joe << "Bach 1897\n";
    joe << "Bethoven 1906\n";
    joe << "Mozart 1911\n";
    joe.close();


    // create second file to store as output
    ofstream outputFile;
    outputFile.open("Music2.txt");


    // read from file
    ifstream jamie;
    jamie.open("Music.txt");
    string Name;
    int Year;


    // read first line
    jamie >> Name >> Year;
    cout << Name << " was born in " << Year << endl;
    outputFile << Name << " was born in " << Year << endl;
    // read second line
    jamie >> Name >> Year;
    cout << Name << " was born in " << Year << endl;outputFile << Name << " was born in " << Year << endl;
    // read third line
    jamie >> Name >> Year;
    cout << Name << " was born in " << Year << endl;outputFile << Name << " was born in " << Year << endl;
    jamie.close();
    outputFile.close();


    // finds the average of each student
    string student;
    float t1, t2, t3, avg;
    ifstream input; // input is the user chosen name for the file
    input.open("Scores.txt");
    
    input >> student >> t1 >> t2 >> t3;
    avg = (t1 + t2 + t3) / 3;
    cout << student << " your average is " << avg << endl;
    
    input >> student >> t1 >> t2 >> t3;
    avg = (t1 + t2 + t3) / 3;
    cout << student << " your average is " << avg << endl;
    
    input >> student >> t1 >> t2 >> t3;
    avg = (t1 + t2 + t3) / 3;
    cout << student << " your average is " << avg << endl;
    


    return 0;
}