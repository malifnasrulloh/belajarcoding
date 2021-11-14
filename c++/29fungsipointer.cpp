#include<iostream>
using namespace std;

void kuadrat(int *);

int main(){
    int a=10;
    // cout<<"Masukkan angka : ";
    // cin>>a;
    kuadrat(&a);
    return 0;
}

void kuadrat(int *b){
    *b=*b**b;
    cout<<*b;
}
