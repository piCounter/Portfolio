/**
 * Michael Buckley
 * Apr 27, 2021
 * Homework 7 part 3
*/

#include <iostream>
#include <iomanip>

using namespace std;

int sumOfVotes(int votes[], int size) {
    int totalVotes = 0;
    for(int i=0; i<size; i++) {
        totalVotes += votes[i];
    }
    return totalVotes;
}

void winner(string names[], int votes[], int size) {
    int mostVotes = 0;

    for (int i=0; i<size; i++) {
        if (votes[i] > mostVotes) {
            mostVotes = votes[i];
        }
    }

    for (int i=0; i<size; i++) {
        if (votes[i] == mostVotes) {
            cout << "\nThe Winner of the Election is " << names[i] << endl << endl;
        }
    }
}

int main() {
    int arraySize = 5;
    string candidatesNames[arraySize];
    int votesRecieved[arraySize];
    int totalVotes = 0;
    int width = 12;

    for(int i=0; i<arraySize; i++) {
        cout << "Enter candidate " << (i+1) << "'s name followed by the number of votes recieved: ";
        cin >> candidatesNames[i] >> votesRecieved[i];
    }

    totalVotes += sumOfVotes(votesRecieved, arraySize);

    // output
    cout << "_____________________________________" << endl;
    for (int i=0; i<arraySize; i++) {
        cout << setw(width) << left << candidatesNames[i]; // candidate name
        cout << defaultfloat << right << setw(width/2) << votesRecieved[i]; // candidate votes
        cout << fixed << setw(width) << setprecision(2) << ((votesRecieved[i]*100.0) / totalVotes) << endl; // candidate vote %
    }
    cout << "Total votes: " << setw(width) << totalVotes << endl;
    
    winner(candidatesNames, votesRecieved, arraySize);

    return 0;
}