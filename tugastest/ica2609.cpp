#include <iostream>
using namespace std;
// int i,j,r,n,d;
// int main(){
//     cout<<"masukkan bilangan bulat positif : ";
//     cin>>n;
//     i=1,j=0;
//     while(i<=n){
//         cout<<"masukkan data berupa bilangan real : ";
//         cin>>d;
//         i=i+1;
//         j=j+d;
//     }
//     r=j/n;
//     cout<<r<<endl;
    
    
// }

int i,n,a,b;
int main(){
    system("clear");
    a=20;
    b=30;
    i=12;
    n=100;
    while(a<=n){
        while((i<=b)/*and(b<=n)*/){
            cout<<i<<" ";
            i=i+2;
            if(i==100){
                break;
            }
        }
        cout<<endl;
        a=a+20;
        b=b+20;
    }
}