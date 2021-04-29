/**
 * Michael Buckley
 * Apr 27, 2021
 * Homework 7 part 2
*/

#include <iostream>
#include <fstream>

using namespace std;

int main() {
    // read from the file
    ifstream input;
    input.open("Ch8_students.txt");

    // local variables
    int scores = 26; // number of scores in txt file
    int studentScores[scores];
    string data = "";
    int index = 0;
    int ranges[8]; // 0-24 = index 0, 25-49 = index 1...

    // take comma seperated string values and convert to int in array studentScores
    while (getline(input, data, ',')) {
        // cout << data << endl;
        studentScores[index] = stoi(data);
        index++;
    }

    // arrange student scores by groups
    for (int i=0; i<scores; i++) {
        if (studentScores[i] >= 0 && studentScores[i] <= 24) {
            ranges[0]++;
        }
        else if (studentScores[i] >= 25 && studentScores[i] <= 49) {
            ranges[1]++;
        }
        else if (studentScores[i] >= 50 && studentScores[i] <= 74) {
            ranges[2]++;
        }
        else if (studentScores[i] >= 75 && studentScores[i] <= 99) {
            ranges[3]++;
        }
        else if (studentScores[i] >= 100 && studentScores[i] <= 124) {
            ranges[4]++;
        }
        else if (studentScores[i] >= 125 && studentScores[i] <= 149) {
            ranges[5]++;
        }
        else if (studentScores[i] >= 150 && studentScores[i] <= 174) {
            ranges[6]++;
        }
        else if (studentScores[i] >= 175 && studentScores[i] <= 200) {
            ranges[7]++;
        }
    }

    // output
    cout << ranges[0] << " students scored in the 0 - 24 range" << endl;
    cout << ranges[1] << " students scored in the 25 - 49 range" << endl;
    cout << ranges[2] << " students scored in the 50 - 74 range" << endl;
    cout << ranges[3] << " students scored in the 75 - 99 range" << endl;
    cout << ranges[4] << " students scored in the 100 - 124 range" << endl;
    cout << ranges[5] << " students scored in the 125 - 149 range" << endl;
    cout << ranges[6] << " students scored in the 150 - 174 range" << endl;
    cout << ranges[7] << " students scored in the 175 - 200 range" << endl;

    // close file input
    input.close();
    
    return 0;
}