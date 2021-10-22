#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Masukkan nilai a : ";
    cin>>a;
    switch(a){
        case 1:
            cout<<"a = 1"<<endl;
        case 2:
            cout<<"a = 2"<<endl;
        case 3:
            cout<<"a = 3"<<endl;
            break; 
            /*
            untuk menghentikan proses switchcase,
            jika tidak di break dan case 1 benar, maka case bawahnya akan di print out semua
            hilangkan atau jadikan comment break nya untuk melihat hasilnya
            */        
        case 4:
            cout<<"a = 4"<<endl;
        case 5:
            cout<<"a = 5"<<endl;
        default: //seperti else
            cout<<"nggak ada casenyaa"<<endl;
    }
    return 0;
}