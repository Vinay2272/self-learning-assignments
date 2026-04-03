#include <iostream>
using namespace std;

class Printer {
public:
    virtual void print() = 0;
};

class Inkjet : public Printer {
public:
    void print() {
        cout << "Inkjet Printing\n";
    }
};

int main() {
    Printer *p;
    Inkjet i;
    p = &i;
    p->print();
}