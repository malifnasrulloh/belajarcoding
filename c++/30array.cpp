#include<iostream>
using namespace std;
// #include<array>
// array<int, 5>arrayku; //deklarasi array pakek library

int nilai[11];
int main(){
    cout<<"Masukkan banyak nilai dengan interval : "<<endl;
    for(int i=1;i<=11;i++){
        if(i==1){
            cout<<i-1<<" - "<<9<<"\t: ";
        }
        else if(i==11){
            cout<<100<<"\t: ";
        }
        else{
            cout<<(i-1)*10<<" - "<<i*10-1<<"\t: ";
        }
        cin>>nilai[i-1];
    }
    cout<<"\n\nData Untuk Nilai Yang Diinput :"<<endl;
    for(int i=1;i<=11;i++){
        if(i==1){
            cout<<i-1<<" - "<<9<<"\t: ";
        }
        else if(i==11){
            cout<<100<<"\t: ";
        }
        else{
            cout<<(i-1)*10<<" - "<<i*10-1<<"\t: ";
        }
        for(int j=1;j<=nilai[i-1];j++){
            cout<<"+";
        }
        cout<<endl;
    }
}