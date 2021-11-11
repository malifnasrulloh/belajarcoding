#include<iostream>
#include<bitset>
using namespace std;

void biner(char var,int a, int b){
    cout<<var<<"\t : \t"<<a<<"\t : \t"<<bitset<8>(b)<<endl;
}
int main(){
    u_short a=4;
    u_short b=7;
    u_short c;
    
    cout<<"++++++++++++++++++++ and (&)"<<endl;
    c=a&b;
    biner('a',a,a);
    biner('b',b,b);
    biner('c',c,c);

    cout<<"\n++++++++++++++++++++ or (|)"<<endl;
    c=a|b;
    biner('a',a,a);
    biner('b',b,b);
    biner('c',c,c);

    cout<<"\n++++++++++++++++++++ xor (^)"<<endl; //xor akan true jika hanya salah satu bernilai true
    c=a^b;
    biner('a',a,a);
    biner('b',b,b);
    biner('c',c,c);
    
    cout<<"\n++++++++++++++++++++ not (~)"<<endl; // not akan membalikkan semua biner
    c=~a;
    biner('a',a,a);
    biner('c',c,c);

    cout<<"\n++++++++++++++++++++ shift left (<<)"<<endl; // shift left akan menggeser angka biner dari aslinya
    c=a<<2; // akan menggeser sebanyak 2
    biner('a',a,a);
    biner('c',c,c);

    cout<<"\n++++++++++++++++++++ shift right (>>)"<<endl; // shift right akan menggeser angka biner dari aslinya
    c=a>>2; // akan menggeser sebanyak 2
    biner('a',a,a);
    biner('c',c,c);

    /*
    untuk shift jika kebanyakan geser biner sehingga mengakibatkan aka biner yang hilang, maka itu bukan hilang
    tetapi akan ditaruh di address setelahnya
    */

}