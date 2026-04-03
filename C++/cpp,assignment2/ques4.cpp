#include <iostream>
using namespace std;

class Printer {
protected:
    int pages;
public:
    Printer() { pages = 0; }
};

class Scanner {
protected:
    int scans;
public:
    Scanner() { scans = 0; }
};

class AllInOne : public Printer, public Scanner {
public:
    void print() { pages++; }
    void scan() { scans++; }

    friend void show(AllInOne obj);
};

void show(AllInOne obj) {
    cout << "Pages: " << obj.pages << endl;
    cout << "Scans: " << obj.scans << endl;
}

int main() {
    AllInOne obj;
    obj.print();
    obj.scan();
    show(obj);
}