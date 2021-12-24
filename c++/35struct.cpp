#include<iostream>
using namespace std;

struct data{
    string nama[1024],nim[1024],kelas[1024],dosen[1024];
};

int main(){
    struct data mahasiswa;
    for(int i=1;i<=5;i++){
        cout<<"Masukkan nama mahasiswa : ";
        cin>>mahasiswa.nama[i-1];
    }
    system("clear");
    for(int i=1;i<=5;i++){
        cout<<"Nama mahasiswa : "<<mahasiswa.nama[i-1]<<endl;
    }
}