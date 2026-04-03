#include <iostream>
using namespace std;

class Date {
    int d, m, y;
public:
    void read() {
        cin >> d >> m >> y;
    }

    void show() {
        cout << d << "/" << m << "/" << y << endl;
    }

    Date operator+(int days) {
        d += days;
        return *this;
    }
};

class Time {
    int h, m, s;
public:
    void read() {
        cin >> h >> m >> s;
    }

    void show() {
        cout << h << ":" << m << ":" << s << endl;
    }
};

int main() {
    Date d1;
    d1.read();
    d1 = d1 + 5;
    d1.show();
}