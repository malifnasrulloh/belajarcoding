#include <iostream>
using namespace std;

int luas(int p, int l){
    return p*l;
}
int luas(int s){
    return s*s;
}
double luas(double s){
    return s*s;
}
/*
baris 7 dan 10 adalah overloading function yang mana nantinya akan otomatis memilih dari program berdasarkan parameter mana
yang akan digunakan. syarat dari overloading function adalah nama dar fungsi itu sendiri harus sama.
*/
int main(){
    cout<<"2 kuadrat   : "<<luas(2)<<endl;
    cout<<"2 * 4       : "<<luas(2,4)<<endl;
    cout<<"1.2 kuadrat : "<<luas(1.2)<<endl;
}