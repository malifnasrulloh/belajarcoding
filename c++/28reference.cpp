#include<iostream>
using namespace std;

int main(){
    int a=100;
    cout<<"a\t\t: "<<a<<endl;
    cout<<"address a\t: "<<&a<<endl;


    int &b=a; // reference, b menggunakan address yang sama dengan a, sehingga kedua variabel akan selali sama;
    cout<<"b\t\t: "<<b<<endl;
    cout<<"address b\t: "<<&b<<endl;
}
