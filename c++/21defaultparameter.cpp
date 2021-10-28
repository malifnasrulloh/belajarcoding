#include<iostream>
using namespace std;
// int kaliii(int a, int b, int c);
// int main(){
//     cout<<kaliii(9,2,3);
// }
// int kaliii(int a, int b, int c){
//     return a*b*c;
// }

int kaliii(int a, int b, int c=2); // default parameter
int main(){
    cout<<kaliii(9,9)<<endl;//hanya di input a=9 dan b=9 sehingga yang c memakai default parameter nya
    cout<<kaliii(9,8,7);// memakai semua 3 inputan sehingga yang di default parameter tidak akan terpakai

}

int kaliii(int a, int b, int c){
    return a*b*c;
}