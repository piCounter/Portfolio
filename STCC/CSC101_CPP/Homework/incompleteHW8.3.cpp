/**
 * Michael Buckley
 * Apr 4, 2021
 * Homework 8 part 3
*/

#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>

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
    string line;
    int index = 0;

    // open file
    ifstream getFile("HW8.3.txt");

    // check if file not open
    if (!getFile.is_open())
        cout << "File didn't open" << endl;

    // if file is open
    else {
        while (getline(getFile, line)) {
            // read in all info from each line into variables
            getFile >> playersArray[index].name;
            getFile >> playersArray[index].position;
            getFile >> playersArray[index].touchdowns;
            getFile >> playersArray[index].catches;
            getFile >> playersArray[index].passingYards;
            getFile >> playersArray[index].receivingYards;
            getFile >> playersArray[index].rushingYards;

            // go to next line
            index++;
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
            setFile << playersArray[index].name;
            setFile << playersArray[index].position;
            setFile << playersArray[index].touchdowns;
            setFile << playersArray[index].catches;
            setFile << playersArray[index].passingYards;
            setFile << playersArray[index].receivingYards;
            setFile << playersArray[index].rushingYards;
        }
    }

    // close file
    setFile.close();

}

void printHeader() {
    cout << setw(20) << left << "Name" << setw(20) << left << "Position" << setw(20) << left << "Touch Downs" << setw(20) << left << "Catches" << setw(20) << left << "Passing Yards" << setw(20) << left << "Receiving Yards" << setw(20) << left << "Rushing Yards" << endl;
    cout << setw((7*20)-1) << setfill('_') << '_' << endl;
}

void printPlayersData() {
    // local variable
    string name;

    cout << "Enter the players name: ";
    cin >> name;

    for (int index=0; index<10; index++) {
        
    }
}



void printAllData() {

}

void updatePlayersTouchdowns() {

}

void updatePlayersCatches() {

}

void updatePlayersPassingYards() {

}

void updatePlayersReceivingYards() {

}

void updatePlayersRushingYards() {

}

// prints menu
void menu() {
    // local variables
    int selection;

    // display menu
    cout << "Select one of the following options:" << endl;
    cout << "1: To print a player's data" << endl;
    cout << "2: To print the entire data" << endl;
    cout << "3: To update a player's touch downs" << endl;
    cout << "4: To update a player's number of catches" << endl;
    cout << "5: To update a player's passing yards" << endl;
    cout << "6: To update a player's receiving yards" << endl;
    cout << "7: To update a player's rushing yards" << endl;
    cout << "99: To quit the program" << endl;
    
    while (true) {
        // accept input selection
        cin >> selection;

        switch (selection) {
            case 1:
                printPlayersData();
                break;
            case 2:
                printAllData();
                break;
            case 3:
                updatePlayersTouchdowns();
                break;
            case 4:
                updatePlayersCatches();
                break;
            case 5:
                updatePlayersPassingYards();
                break;
            case 6:
                updatePlayersReceivingYards();
                break;
            case 7:
                updatePlayersRushingYards();
                break;
            case 99:
                char save;
                cout << "Would you like to save any changes: (y,Y/n,N) ";
                cin >> save;
                if (tolower(save) == 'y') outputData();
                break;
            default:
                cout << "Invalid selection, please try again" << endl;
        }
    }
}

int main() {

    inputData();

    return 0;
}