#include<iostream>
using namespace std;
int p,a,b,c;
int main(){
    //for(inisialisasi;kondisi/syarat;incre/decre/assigment)
    system("clear");
    b=1;
    c=0;
    cout<<"Bilangan Fibonacci"<<endl;
    cout<<"ralat, bilangan fibonacci yang pertama yang benar adalah 0 dan 1\n"<<endl;
    cout<<"Ingin sampai berapa bilangan fibonacci nya : ";
    cin>>p;
    for(int i=1;i<=p;i++){
        a=b+c;
        c=b;
        b=a;
        cout<<"bilangan ke-"<<i<<" adalah "<<c<<endl;
    }
}