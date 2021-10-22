#include<iostream>
#include<cstdlib> //library yang mengandung fungsi random
//#include<string.h>
char lempar;
using namespace std;
int main(){
    // for(int i=1;i<=10;i++){
    //     //cout<<rand()<<endl; //akan menghasilkan angka random (tipe data long)
    //     cout<<rand() % 6<<endl; // angka random akan di modulus dengan 6 dan menghasilkan sisa pembagian
    //     //cout<<1+(rand()%6)<<endl; // karena dalam modulus ada angka 0, dan dadu tidak ada angka 0, maka setiap output akan ditambah 1
    // }
    while(true){
        cout<<"lempar dadu nya anjing (y / n) : ";
        cin>>lempar;
        if(lempar=='y'){
            cout<<1+(rand() % 6)<<endl;
        }else if(lempar=='n'){
            break;
        }else{
            cout<<"jawab yang bener dong asw"<<endl;
        }
    }
}