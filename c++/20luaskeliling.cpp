#include<iostream>
using namespace std;

int luas(int p, int l){
    int hasil;
    hasil=p*l;
    return hasil;
}
int keliling(int p,int l){
    int hasil;
    hasil=2*(p+l);
    return hasil;
}
int main(){
    int panjang,lebar;
    cout<<"menghitung luas dan keliling persegi panjang"<<endl;
    cout<<"masukkan panjang : ";
    cin>>panjang;
    cout<<"masukkan lebar   : ";
    cin>>lebar;
    cout<<"Luasnya adalah "<<luas(panjang,lebar)<<endl;
    cout<<"Keliling nya adalah "<<keliling(panjang,lebar);

}




