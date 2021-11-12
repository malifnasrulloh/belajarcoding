#include<iostream>
using namespace std;

int main(){
    int a =10;

    cout<<"a\t\t: "<<a<<endl;
    cout<<"address a\t: "<<&a<<endl;
    cout<<"\npointerrr..................................."<<endl;
    int *pointera=&a; //menaruh alamat a dalam pointer
    cout<<"address a\t: "<<pointera<<endl;
    cout<<"nilai dari a\t: "<<*pointera<<endl;

    a=21;
    int *pointeraq=&a;
    cout<<*pointera<<endl;
    int *pointernull=nullptr; //menge-null kan sebuah address
    cout<<pointernull<<endl;
}