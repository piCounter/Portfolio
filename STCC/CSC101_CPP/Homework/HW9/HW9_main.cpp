/**
 * Michael Buckley
 * May 12, 2021
 * Homework 9 main program
*/

#include <iostream>
#include <fstream>
#include <iomanip>
#include <algorithm>
#include "HW9_class.cpp"

using namespace std;

int main() {
    // create adt object array of BookType
    const int maxObjects = 100;
    BookType adt[maxObjects]; // an array of 100 BookType objects

    // create file
    ifstream getFile("HW9_txt.txt");

    // check if file not open
    if (!getFile.is_open()) {
        cout << "File didn't open" << endl;
    }
    // if file is open, load and store information
    else {
        // main variables
        string line;
        int object = 0;

        // read in each line

        int lineItem = 1; // start with title as no blank spaces are at the beginning of the file
        while (getline(getFile, line)) {
            // if the line is blank, increment object number and reset lineItem
            if (line == "") {
                object += 1;
                lineItem = 0;
            }
            // each line that is not blank will increase the lineItem variable and assign the information accordingly
            switch (lineItem) {
                case 1:
                    adt[object].setTitle(line);
                    break;
                case 2:
                    adt[object].setISBN(line);
                    break;
                case 3:
                    adt[object].setPublisher(line);
                    break;
                case 4:
                    adt[object].setYear(stoi(line));
                    break;
                case 5:
                    adt[object].setPrice(stod(line));
                    break;
                case 6:
                    adt[object].setAuthors(line);
                    break;
                case 7:
                    adt[object].setAuthors(line);
                    break;
                case 8:
                    adt[object].setAuthors(line);
                    break;
                case 9:
                    adt[object].setAuthors(line);
                    break;
                case 10:
                    adt[object].setInStock(stoi(line));
                }
            lineItem += 1;
        }
    }
    

    // test operations for display only
    adt[1].showAuthors();
    adt[1].showPrice();

    cout << adt[51].getTitle() << endl; // 52 books are not in the file, should show as a blank line

    cout << "adt[0] price: " << adt[0].getPrice() << endl;
    cout << "Enter a new price for adt[0]: $";
    double tempPrice;
    cin >> tempPrice;
    adt[0].setPrice(tempPrice);
    cout << "adt[0] price: " << adt[0].getPrice() << endl << endl;;

    for (int i=0; i<maxObjects; i++) {
        if (adt[i].getTitle() == "")
            break;
        cout << "Object # " << i << ":" << endl;
        cout << "\tTitle: " << adt[i].getTitle() << endl;
        cout << "\tISBN: " << adt[i].getISBN() << endl;
        cout << "\tPublisher: " << adt[i].getPublisher() << endl;
        cout << "\tPublished Year: " << adt[i].getYear() << endl;
        cout << "\tPrice: " << adt[i].getPrice() << endl;
        cout << "\tAuthor(s): "; adt[i].showAuthors(); cout << endl;
        cout << "\tIn Stock: " << adt[i].getInStock() << endl;
    }


    getFile.close();
    return 0;
}
