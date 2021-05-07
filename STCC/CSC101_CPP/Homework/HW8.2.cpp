/**
 * Michael Buckley
 * Apr 4, 2021
 * Homework 8 part 2
*/

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

// global struct
struct MenuItemType {
    string name;
    double price;
};

// global variable
MenuItemType menuList[8];

void getData() {
    // local variables 
    string line;
    int index = 0;

    // open file
    ifstream file("HW8.2.txt");

    // check if file not open
    if (!file.is_open())
        cout << "File didn't open" << endl;

    // if file is open
    else {
        while (getline(file, line)) {
            // set index name
            menuList[index].name = line.substr(0, (line.find_first_of('$') - 1));

            // set index price and convert to double
            menuList[index].price = stod(line.substr((line.find_first_of('$') + 1), line.length()));
        
            index++;
        }
    }

    // close file
    file.close();
}

void printCheck(int selections[], int size) {
    // local variable
    double sum = 0;
    double tax = 0;

    // calculate sum of all items in order array
    for (int i=0; i<size; i++) {
        sum += menuList[selections[i]-1].price;
    }

    // add 5% tax
    tax = sum * .05;
    sum += tax;

    // output
    cout << endl << endl << "Please come again.\n" << "____________________________" << endl;
    for (int i=0; i<size; i++) {
        cout << setw(20) << setfill('.') << left << menuList[selections[i]-1].name;
        cout << " $" << setw(6) << setfill(' ') << right << menuList[selections[i]-1].price << endl;
    }
    // tax
    cout << "____________________________" << endl;
    cout << setw(20) << left << "Tax:";
    cout << " $" << setw(6) << right << tax << endl;
    // amount due
    cout << "____________________________" << endl;
    cout << setw(20) << left << "Amount Due:";
    cout << " $" << setw(6) << right << sum << endl;
}

void showMenu() {
    // local variables
    char repeat;
    int order[8];
    int last = 8;

    // print menu
    cout << fixed << showpoint << setprecision(2);
    cout << "\nWelcome to Buckley's Breakfast" << endl;
    cout << "____________________________" << endl;
    for (int i=0; i<8; i++) {
        cout << i+1 << ") " << setw(20) << setfill('.') << left << menuList[i].name;
        cout << " $" << setw(6) << setfill(' ') << right << menuList[i].price << endl;
    }

    // user selection input
    cout << "\nYou can make up to 8 single order selections" << endl;
    for (int item=0; item<8;) {
        // output based on first or other item entry
        if (item > 0) {
            cout << "Anything else Y/y (Yes), N/n (No): ";
        }
        else {
            cout << "Do you want to make a selection Y/y (Yes), N/n (No): ";
        }
        cin >> repeat;

        // if customer wants to order
        if (tolower(repeat) == 'y') {
            cout << "Enter item number: "; // known bug. entering any letter will start an endless loop here. cant figure out how to fix it. After 2 hours im throwing in the towel
            cin >> order[item];
            
            // invalid item number handling
            if ((int)order[item] < 1 || (int)order[item] > 8) {
                cout << "Invalid input, please enter a number from the list above: " << endl;
            }
            // for loop will not increment unless a valid number is entered
            else {
                item++;
            }
        }

        // if customer is done ordering
        else {
            if (tolower(repeat) == 'n') {
                last = item;
                break;
            }
            cout << "Invalid input, please enter 'y' or 'n'" << endl;
        }
    }

    // print customer check
    printCheck(order, last);

}

int main() {
    
    // import data
    getData();

    // execute program
    showMenu();

    cout << endl;

    return 0;
}
