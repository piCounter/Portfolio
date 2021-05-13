/**
 * Michael Buckley
 * May 12, 2021
 * Homework 9 BookType class
*/

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

// global variable
const int maxAuthors = 4;

class BookType {
    private:
        // struct variables
        string title;
        string isbn;
        string publisher;
        int year;
        double price;
        string authors[maxAuthors] = {"", "", "", ""};
        int inStock;

    public:
        // constructors
        // default constuctor
        BookType();
        // value constructors
        BookType(string);
        BookType(string, string);
        BookType(string, string, string);
        BookType(string, string, string, int);
        BookType(string, string, string, int, double);
        BookType(string, string, string, int, double, string);
        BookType(string, string, string, int, double, string, string);
        BookType(string, string, string, int, double, string, string, string);
        BookType(string, string, string, int, double, string, string, string, string);
        BookType(string, string, string, int, double, string, string, string, string, int);



        // methods
        string getTitle();
        void setTitle(string);
        bool checkTitle(string);

        int getInStock();
        void setInStock(int);
        void updateInStock(int); // += s
        void showInStock();

        string getPublisher();
        void setPublisher(string);
        void updatePublisher(string); // += p
        void showPublisher();

        string getISBN();
        void setISBN(string);
        void updateISBN(string); // += i
        void showISBN();

        double getPrice();
        void setPrice(double);
        void updatePrice(double); // += p
        void showPrice();

        void showAuthors();
        void setAuthors(string);

        int getYear();
        void setYear(int);
};
    
// class constructors
// default constructor
BookType::BookType() {
    this->title = "";
    this->isbn = "";
    this->publisher = "";
    this->year = 0;
    this->price = 0;
    for (int i=0; i<maxAuthors; i++) {
        this->authors[i] = "";
    }
    this->inStock = 0;
}
// value given constructor
BookType::BookType(string t) {
    this->title = t;
    this->isbn = "";
    this->publisher = "";
    this->year = 0;
    this->price = 0;
    for (int i=0; i<maxAuthors; i++) {
        this->authors[i] = "";
    }
    this->inStock = 0;
}
BookType::BookType(string t, string i) {
    this->title = t;
    this->isbn = i;
    this->publisher = "";
    this->year = 0;
    this->price = 0;
    for (int i=0; i<maxAuthors; i++) {
        this->authors[i] = "";
    }
    this->inStock = 0;
}
BookType::BookType(string t, string i, string p) {
    this->title = t;
    this->isbn = i;
    this->publisher = p;
    this->year = 0;
    this->price = 0;
    for (int i=0; i<maxAuthors; i++) {
        this->authors[i] = "";
    }
    this->inStock = 0;
}
BookType::BookType(string t, string i, string p, int y) {
    this->title = t;
    this->isbn = i;
    this->publisher = p;
    this->year = y;
    this->price = 0;
    for (int i=0; i<maxAuthors; i++) {
        this->authors[i] = "";
    }
    this->inStock = 0;
}
BookType::BookType(string t, string i, string p, int y, double pr) {
    this->title = t;
    this->isbn = i;
    this->publisher = p;
    this->year = y;
    this->price = pr;
    for (int i=0; i<maxAuthors; i++) {
        this->authors[i] = "";
    }
    this->inStock = 0;
}
BookType::BookType(string t, string i, string p, int y, double pr, string a0) {
    this->title = t;
    this->isbn = i;
    this->publisher = p;
    this->year = y;
    this->price = pr;
    for (int i=0; i<maxAuthors; i++) {
        if (i == 0) {
            this->authors[i] = a0;
        }
    }
    this->inStock = 0;
}
BookType::BookType(string t, string i, string p, int y, double pr, string a0, string a1) {
    this->title = t;
    this->isbn = i;
    this->publisher = p;
    this->year = y;
    this->price = pr;
    for (int i=0; i<maxAuthors; i++) {
        if (i == 0) {
            this->authors[i] = a0;
        }
        else if (i == 1) {
            this->authors[i] = a1;
        }
    }
    this->inStock = 0;
}
BookType::BookType(string t, string i, string p, int y, double pr, string a0, string a1, string a2) {
    this->title = t;
    this->isbn = i;
    this->publisher = p;
    this->year = y;
    this->price = pr;
    for (int i=0; i<maxAuthors; i++) {
        if (i == 0) {
            this->authors[i] = a0;
        }
        else if (i == 1) {
            this->authors[i] = a1;
        }
        else if (i == 2) {
            this->authors[i] = a2;
        }
    }
    this->inStock = 0;
}
BookType::BookType(string t, string i, string p, int y, double pr, string a0, string a1, string a2, string a3) {
    this->title = t;
    this->isbn = i;
    this->publisher = p;
    this->year = y;
    this->price = pr;
    for (int i=0; i<maxAuthors; i++) {
        if (i == 0) {
            this->authors[i] = a0;
        }
        else if (i == 1) {
            this->authors[i] = a1;
        }
        else if (i == 2) {
            this->authors[i] = a2;
        }
        else if (i == 3) {
            this->authors[i] = a3;
        }
    }
    this->inStock = 0;
}
BookType::BookType(string t, string i, string p, int y, double pr, string a0, string a1, string a2, string a3, int s) {
    this->title = t;
    this->isbn = i;
    this->publisher = p;
    this->year = y;
    this->price = pr;
    for (int i=0; i<maxAuthors; i++) {
        if (i == 0) {
            this->authors[i] = a0;
        }
        else if (i == 1) {
            this->authors[i] = a1;
        }
        else if (i == 2) {
            this->authors[i] = a2;
        }
        else if (i == 3) {
            this->authors[i] = a3;
        }
    }
    this->inStock = s;
}

// methods
string BookType::getTitle() {
    return title;
}
void BookType::setTitle(string t) {
    title = t;
}
bool BookType::checkTitle(string t) {
    if (t == title) {
        return true;
    }
    else {
        return false;
    }
}

int BookType::getInStock() {
    return inStock;
};
void BookType::setInStock(int s) {
    inStock = s;
};
// inStock += s
void BookType::updateInStock(int s) {
    int currentStock = this->getInStock();
    this->setInStock(currentStock += s);
};
void BookType::showInStock() {
    cout << "In Stock: " << this->getInStock() << endl;
};

string BookType::getPublisher() {
    return publisher;
};
void BookType::setPublisher(string p) {
    publisher = p;
};
 // publisher += 1
void BookType::updatePublisher(string p) {
    string currentPublisher = this->getPublisher();
    this->setPublisher(currentPublisher += p);
};
void BookType::showPublisher() {
    cout << "Publisher: " << this->getPublisher() << endl;
};

string BookType::getISBN() {
    return isbn;
};
void BookType::setISBN(string i) {
    isbn = i;
};
 // ISBN += 1
void BookType::updateISBN(string i) {
    string currentISBN = this->getISBN();
    this->setISBN(currentISBN += i);
};
void BookType::showISBN() {
    cout << "ISBN: " << this->getISBN() << endl;
};

double BookType::getPrice() {
    return price;
};
void BookType::setPrice(double i) {
    price = i;
};
 // price += 1
void BookType::updatePrice(double i) {
    double currentPrice = this->getPrice();
    this->setPrice(currentPrice += i);
};
void BookType::showPrice() {
    cout << "Price: $" << this->getPrice() << endl;
};

void BookType::showAuthors() {
    // author, author, author, author
    for (int i=0; i<maxAuthors; i++) {
        cout << this->authors[i];
        if (this->authors[i+1] == "")
            break; 
        else
            cout << "; ";
    }
};
void BookType::setAuthors(string s) {
    for (int i=0; i<maxAuthors; i++) {
        if (this->authors[i] == "") {
            this->authors[i] = s;
            break;
        }
    }
}

int BookType::getYear() {
    return this->year;
};
void BookType::setYear(int i) {
    year = i;
}
