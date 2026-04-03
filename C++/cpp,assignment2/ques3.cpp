#include <iostream>
using namespace std;

class Outer {
public:
    class Inner {
    public:
        void display() {
            cout << "Inside Inner Class\n";
        }
    };
};

int main() {
    Outer::Inner obj;
    obj.display();
}