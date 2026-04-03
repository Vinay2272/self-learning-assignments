#include <iostream>
using namespace std;


int mystrcmp(char *a, char *b) {
    while (*a && *b) {
        if (*a != *b)
            return *a - *b;
        a++; b++;
    }
    return *a - *b;
}


void mystrcat(char *a, char *b) {
    while (*a) a++;
    while (*b) {
        *a = *b;
        a++; b++;
    }
    *a = '\0';
}


void mystrcpy(char *a, char *b) {
    while (*b) {
        *a = *b;
        a++; b++;
    }
    *a = '\0';
}


int mystrlen(char *a) {
    int count = 0;
    while (*a) {
        count++;
        a++;
    }
    return count;
}

int main() {
    char a[50] = "Hello";
    char b[50] = "World";

    cout << "Length: " << mystrlen(a) << endl;

    mystrcat(a, b);
    cout << "Concat: " << a << endl;

    char c[50];
    mystrcpy(c, a);
    cout << "Copy: " << c << endl;

    cout << "Compare: " << mystrcmp(a, c) << endl;

    return 0;
}