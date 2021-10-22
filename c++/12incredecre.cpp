#include<iostream>
using namespace std;
int a=10,b=10;
int main(){
    //postincrement(increment)
    cout<<a<<endl;
    cout<<a++<<endl;//baca catatan
    cout<<a<<endl<<endl;
    /*jika postincrement dimasukkan ke dalam cout/fungsi print (cout<<a++) maka a nya akan di print terlebih dahulu
    dan baru akan ditambahkan dengan 1, kecuali jika tidak masuk fungsi print maka akan ditambah dengan 1
    dulu a nya (a++;)
    */



    //preincrement
    cout<<b<<endl;
    cout<<++b<<endl;
    cout<<b<<endl;
    /*jika preincrement maka sama saja maupun masuk fungsi print atau tidak karena ++b, maka ++ dengan b
    dulu baru diprint nilai b nya, berbeda dengan postincrement karena ++ nya dibelakang
    */


    //postdecrement(decrement) dan predecrement
    //sama saja tinggal diganti jadi -

}