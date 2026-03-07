#include<iostream>
using namespace std;

void swap(int &a,int &b){
    int temp;
    temp=a;
    a=b;
    b=temp;

}

int main(){

    int x=2,y=8;
    cout<<"x="<<x<<"\ty="<<y<<endl;
    swap(x,y);
    cout<<"after swaping :\n";
    cout<<"x="<<x<<"\ty="<< y <<endl;
}
