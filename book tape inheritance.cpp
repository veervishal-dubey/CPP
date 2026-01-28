#include <iostream>
#include <string>
using namespace std;

class Publication {
protected:
    string title;
    float price;

public:
    void getdata() {
        cout << "Enter title: ";
        cin.ignore();
        getline(cin, title);
        cout << "Enter price: ";
        cin >> price;
    }

    void putdata() {
        cout << "Title: " << title << endl;
        cout << "Price: " << price << endl;
    }
};

class Book : public Publication {
    int pageCount;

public:
    void getdata() {
        Publication::getdata();
        cout << "Enter page count: ";
        cin >> pageCount;
    }

    void putdata() {
        Publication::putdata();
        cout << "Page Count: " << pageCount << endl;
    }
};

class Tape : public Publication {
    float playTime;

public:
    void getdata() {
        Publication::getdata();
        cout << "Enter playing time (minutes): ";
        cin >> playTime;
    }

    void putdata() {
        Publication::putdata();
        cout << "Playing Time: " << playTime << " minutes" << endl;
    }
};

int main() {
    Book b;
    Tape t;

    cout << "\nEnter Book details:\n";
    b.getdata();

    cout << "\nEnter Tape details:\n";
    t.getdata();

    cout << "\nBook details:\n";
    b.putdata();

    cout << "\nTape details:\n";
    t.putdata();

    return 0;
}
