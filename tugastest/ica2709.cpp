// #include<iostream>
// using namespace std;
// int c,a,b;
// int main(){
//     system("clear");
//     a=5;
//     c=1;
//     for(int i=1;i<=a;i++){
//         for(int b=1;b<=i;b++){
//             cout<<c<<" ";
//             c++;
//         }
//     cout<<endl;
//     }
// }

#include<iostream>
using namespace std;
int a,b;
int main(){
    system("clear");
    a=1;
    b=5;
    while(a<=b){
       while((a>1)and(a<5)){
            cout<<"*   *"<<endl;
            a++;
        }
        cout<<"*****"<<endl;
        a++;
    }
}