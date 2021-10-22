#include<iostream>
using namespace std;
int main(){
    string username,password;
    system("clear");
    cout<<"contoh login sederhana"<<endl;
    cout<<"//////////////////////"<<endl;
    cout<<"\nMasukkan Username   : ";
    cin>>username;
    cout<<"Masukkan Password   : ";
    cin>>password;
    if((username=="alipnibos")and(password=="admin")){
        cout<<"login sebagai admin berhasil"<<endl;
    }else if((username=="guest")and(password=="guest")){
        cout<<"login sebagai tamu berhasil"<<endl;
    }else{
        main();
    }
    return 0;
}