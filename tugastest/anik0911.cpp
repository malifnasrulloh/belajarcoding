#include<iostream>
#include<cmath>
using namespace std;
// int a,b=1,c=4;
// int main(){
//     for(float i=50;i<=;i++){
//         a=pow(3,c);
//         if(a<500){
//             cout<<"bilangan ke-"<<b<<" : "<<a<<endl;
//         }
//     b++;
//     c++;
//     }
// }
int a[]={1942,5988,11642,47856,109096176,81,6},b,c[]={2,4,6,16};
int main(){
    for(int i=0;i<6;i++){
        b=a[i]%c[0];
        if(b==0){
            b=a[i]%c[1];
            if(b==0){
                b=a[i]%c[2];
                if(b==0){
                    b=a[i]%c[3];
                    if(b==0){
                        cout<<"bilangan : "<<a[i]<<endl;
                    }
                }
            }
        }
    }
}