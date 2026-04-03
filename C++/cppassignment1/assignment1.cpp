#include<iostream>
using namespace std;

int main(){
    int a=6,b=5;

    //logical operator

    cout<<(a>b && b>0)<<endl;
    cout<<(a<b || b>0)<<endl;
    cout<<!(a>b)<<endl;

    //unary operator

    cout<<++a<<endl;
    cout<<a++<<endl;
    cout<<a--<<endl;
    cout<<++a<<endl;
    cout<<a<<endl;

    //assignment operator

    int c=a+b;
    cout<<"value of c is :"<<c<<endl;


    //ternary operator

    int value;
    value = (a>b) ? a : b ;
    cout<<value;


}