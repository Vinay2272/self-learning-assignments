#include<iostream>
using namespace std;

void newValue(int *p){
    *p=20;
}

int main(){
    int num=10;

    cout<<"value of num is :"<<num<<endl;

    newValue(&num);

    cout<<"\n after passing pointer in funtion :"<<num<<endl;
}