#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("data.txt");
    file << "Hello File";
    file.close();

    ifstream read("data.txt");
    string text;
    getline(read, text);
    cout << text;
    read.close();
}