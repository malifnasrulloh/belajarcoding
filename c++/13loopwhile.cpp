#include<iostream>
using namespace std;
int a,b,n,suku,un,hasil;
int main(){
    system("clear");
    suku=1;
    n=1;
    cout<<"baris aritmatika\nUn = a + (n-1) * b\n"<<endl;
    cout<<"\nIngin mencari sampai suku berapa   : ";
    cin>>un;
    cout<<"Masukkan nilai a  : ";
    cin>>a;
    cout<<"Masukkan nilai b  : ";
    cin>>b;
    while (suku<=un){
        hasil=a+(n-1)*b;
        cout<<"Suku ke "<<suku<<" adalah "<<hasil<<endl;
        suku++;
        n++;
    }
    







    return 0;
}