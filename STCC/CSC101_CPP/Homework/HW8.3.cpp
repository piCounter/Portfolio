/**
 * Michael Buckley
 * Apr 4, 2021
 * Homework 8 part 3
*/

#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <algorithm>

using namespace std;

// create global record
struct players {
    string name;
    string position;
    int touchdowns;
    int catches;
    int passingYards;
    int receivingYards;
    int rushingYards;
};

// global variable
struct players playersArray[10];

// load existing data
void inputData() {
    // local variables 
    int index = 0;

    // open file
    ifstream getFile("HW8.3.txt");

    // check if file not open
    if (!getFile.is_open())
        cout << "File didn't open" << endl;

    // if file is open
    else {
        for (int index=0; index<10; index++) {
            // read in all info from each line into variables
            getFile >> playersArray[index].name;
            getFile >> playersArray[index].position;
            getFile >> playersArray[index].touchdowns;
            getFile >> playersArray[index].catches;
            getFile >> playersArray[index].passingYards;
            getFile >> playersArray[index].receivingYards;
            getFile >> playersArray[index].rushingYards;
        }
    }

    // close file
    getFile.close();
}

// save new data
void outputData() {
    // local variables 
    string line;
    int index = 0;

    // open file
    ofstream setFile("HW8.3.txt");

    // check if file not open
    if (!setFile.is_open())
        cout << "File didn't open" << endl;

    // if file is open
    else {
        for (int index=0; index<10; index++) {
            // save in all info from each line into file
            setFile << playersArray[index].name << " " << playersArray[index].position << " " << playersArray[index].touchdowns << " " << playersArray[index].catches << " " << playersArray[index].passingYards << " " << playersArray[index].receivingYards << " " << playersArray[index].rushingYards << endl;
        }
    }

    // close file
    setFile.close();

}

// print header for any player outputs
void printPlayerHeader() {
    cout << setw(20) << left << "Name" << setw(20) << left << "Position" << setw(20) << left << "Touch Downs" << setw(15) << left << "Catches" << setw(20) << left << "Passing Yards" << setw(20) << left << "Receiving Yards" << setw(20) << left << "Rushing Yards" << endl;
    cout << setw((7*20)-12) << setfill('_') << '_' << endl << setfill(' ');
}

// just prints player stats, unlabeled (ment to be used by other functions only)
void printPlayer(int index) {
    cout << setw(20) << left << playersArray[index].name << setw(20) << left << playersArray[index].position << setw(6) << right << playersArray[index].touchdowns << setw(20) << right << playersArray[index].catches << setw(20) << right << playersArray[index].passingYards << setw(20) << right << playersArray[index].receivingYards << setw(20) << right << playersArray[index].rushingYards << endl;
}

// print all data for a single player
void printPlayersData() {
    // local variable
    string name;
    // string tempName;

    cout << "Enter the players name: ";
    cin >> name;

    // find player
    for (int index=0; index<10; index++) {
        // set strings to lower
        // transform(playersArray[index].name.begin(), playersArray[index].name.end(), tempName, ::tolower);
        // transform(name.begin(), name.end(), name, ::tolower);

        if (playersArray[index].name == name) {
            printPlayerHeader();
            printPlayer(index);
        }
        else {
            cout << "player name did not match" << endl;
        }
    }
}

// print all data for all players
void printAllData() {
    printPlayerHeader();
    for (int index=0; index<10; index++) {
        printPlayer(index);
    }
}

void updatePlayersTouchdowns() {
// local variable
    string name;

    cout << "Enter the players name: ";
    cin >> name;

    // find player
    for (int index=0; index<10; index++) {

        if (playersArray[index].name == name) {
            cout << "Current Touch Downs: " << playersArray[index].touchdowns << endl;
            cout << "Enter new total Touch Downs for " << playersArray[index].name << ": ";
            cin >> playersArray[index].touchdowns;
            break;
        }
    }
}

void updatePlayersCatches() {
// local variable
    string name;

    cout << "Enter the players name: ";
    cin >> name;

    // find player
    for (int index=0; index<10; index++) {

        if (playersArray[index].name == name) {
            cout << "Current Catches: " << playersArray[index].catches << endl;
            cout << "Enter new total Catches for " << playersArray[index].name << ": ";
            cin >> playersArray[index].catches;
            break;
        }
    }
}

void updatePlayersPassingYards() {
// local variable
    string name;

    cout << "Enter the players name: ";
    cin >> name;

    // find player
    for (int index=0; index<10; index++) {

        if (playersArray[index].name == name) {
            cout << "Current Passing Yards: " << playersArray[index].passingYards << endl;
            cout << "Enter new total Passing Yards for " << playersArray[index].name << ": ";
            cin >> playersArray[index].passingYards;
            break;
        }
    }
}

void updatePlayersReceivingYards() {
// local variable
    string name;

    cout << "Enter the players name: ";
    cin >> name;

    // find player
    for (int index=0; index<10; index++) {

        if (playersArray[index].name == name) {
            cout << "Current Receiving Yards: " << playersArray[index].receivingYards << endl;
            cout << "Enter new total Receiving Yards for " << playersArray[index].name << ": ";
            cin >> playersArray[index].receivingYards;
            break;
        }
    }
}

void updatePlayersRushingYards() {
// local variable
    string name;

    cout << "Enter the players name: ";
    cin >> name;

    // find player
    for (int index=0; index<10; index++) {

        if (playersArray[index].name == name) {
            cout << "Current Rushing Yards: " << playersArray[index].rushingYards << endl;
            cout << "Enter new total Rushing Yards for " << playersArray[index].name << ": ";
            cin >> playersArray[index].rushingYards;
            break;
        }
    }
}

// prints menu - needs work
int menu() {
    // local variables
    int selection;

    // display menu
    cout << "\nSelect one of the following options:" << endl;
    cout << "1: To print a player's data" << endl;
    cout << "2: To print the entire data" << endl;
    cout << "3: To update a player's touch downs" << endl;
    cout << "4: To update a player's number of catches" << endl;
    cout << "5: To update a player's passing yards" << endl;
    cout << "6: To update a player's receiving yards" << endl;
    cout << "7: To update a player's rushing yards" << endl;
    cout << "99: To quit the program" << endl;
    
    while (!(selection >= 1 && selection <= 7 || selection == 99)) {
        // accept input selection
        cin >> selection;
        if (!(selection >= 1 && selection <= 7 || selection == 99))
            cout << "Enter a number from the menu above: ";
    }

    switch (selection) {
        case 1:
            printPlayersData();
            menu();
            break;
        case 2:
            printAllData();
            menu();
            break;
        case 3:
            updatePlayersTouchdowns();
            menu();
            break;
        case 4:
            updatePlayersCatches();
            menu();
            break;
        case 5:
            updatePlayersPassingYards();
            menu();
            break;
        case 6:
            updatePlayersReceivingYards();
            menu();
            break;
        case 7:
            updatePlayersRushingYards();
            menu();
            break;
        case 99:
            char save;
            cout << "Would you like to save any changes: (y,Y/n,N) ";
            cin >> save;
            if (tolower(save) == 'y') {
                outputData();
            }
            break;
        default:
            cout << "Invalid selection, please try again" << endl;
    }    
    return selection;
}

int main() {

    inputData();
    
    int selection;
    if (selection != 99) {
        selection = menu();
    }

    return 0;
}