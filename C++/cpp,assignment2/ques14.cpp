#include <iostream>
using namespace std;

class MyException {
public:
    void message() {
        cout << "Custom Exception Occurred";
    }
};

int main() {
    try {
        throw MyException();
    }
    catch (MyException e) {
        e.message();
    }
}