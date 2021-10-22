#include<iostream>
using namespace std;
int a;
int main(){
    a=10;
    cout<<a<<endl;
    cout<<(a+=3)<<endl;
    cout<<(a-=3)<<endl;
    cout<<(a*=3)<<endl;
    cout<<(a/=3)<<endl;
    cout<<(a%=3)<<endl;
    return 0;
}