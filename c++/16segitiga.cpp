#include<iostream>
using namespace std;
int n,a,b,c,d,e;
int main(){
    cout<<"Masukkan panjang segitiga : ";
    cin>>n;
    cout<<"\nPERTAMA========================="<<endl;
    for(int i=1;i<=n;i++){
        for(int a=1;a<=i;a++){
            cout<<"O";
        }
        cout<<endl;
    }
    cout<<"\nKEDUA==========================="<<endl;
    for(int i=1;i<=n;i++){
        for(int a=n;a>=i;a--){
            cout<<"O";
        }
        cout<<endl;
    }
    cout<<"\nKETIGA=========================="<<endl;
    for(int i=1;i<=n;i++){
        for(int a=n;a>i;a--){
            cout<<" ";
        }
        for(int b=1;b<=i;b++){
            cout<<"0";
        }
        cout<<endl;
    }
    cout<<"\nKEEMPAT========================="<<endl;
    for(int i=1;i<=n;i++){
        for(int a=2;a<=i;a++){
            cout<<" ";
        }
        for(int b=n;b>=i;b--){
            cout<<"o";
        }
        cout<<endl;
    }
    cout<<"\nKELIMA=========================="<<endl;
    for(int i=1;i<=n;i++){
        for(int a=n;a>i;a--){
            cout<<" ";
        }
        for(int b=1;b<=i;b++){
            cout<<"o";
        }
        for(int c=2;c<=i;c++){
            cout<<"o";
        }
        cout<<endl;
    }
    for(int i=1;i<=n;i++){
        for(int a=1;a<=i;a++){
            cout<<" ";
        }
        for(int b=n-1;b>=i;b--){
            if(b==n-1){
                continue;
            }
            cout<<"o";
        }
        for(int a=n;a>=i;a--){
            if(a==n){
                continue;
            }
            cout<<"o";
        }
        cout<<endl;
    }

    return 0;
}