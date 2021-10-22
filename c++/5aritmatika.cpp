#include<iostream>
using namespace std;
double hasil,a,b;
int hasil2,c,d;
char operasi;
void operasibilangan();

//modulus gak iso nggae double/float, kudu nggae int

int main(){
    cout<<"kalkulator sederhana"<<endl;
    cout<<"masukkan operasi bilangan (+,-,*,/,%) : ";
    cin>>operasi;
    operasibilangan();
    return 0;
}
void operasibilangan(){
        if (operasi=='+'){
            cout<<"masukkan bilangan pertama : ";
            cin>>a;
            cout<<"masukkan bilangan kedua   : ";
            cin>>b;
            hasil=a+b;
            cout<<"Hasil dari "<<a<<" "<<operasi<<" "<<b<<" = "<<hasil<<endl;
        }else if (operasi=='-'){
            cout<<"masukkan bilangan pertama : ";
            cin>>a;
            cout<<"masukkan bilangan kedua   : ";
            cin>>b;
            hasil=a-b;
            cout<<"Hasil dari "<<a<<" "<<operasi<<" "<<b<<" = "<<hasil<<endl;
        }else if (operasi=='*'){
            cout<<"masukkan bilangan pertama : ";
            cin>>a;
            cout<<"masukkan bilangan kedua   : ";
            cin>>b;
            hasil=a*b;
            cout<<"Hasil dari "<<a<<" "<<operasi<<" "<<b<<" = "<<hasil<<endl;
        }else if (operasi=='/'){
            cout<<"masukkan bilangan pertama : ";
            cin>>a;
            cout<<"masukkan bilangan kedua   : ";
            cin>>b;
            hasil=a/b;
            cout<<"Hasil dari "<<a<<" "<<operasi<<" "<<b<<" = "<<hasil<<endl;
        }else if (operasi=='%'){
            cout<<"masukkan bilangan pertama : ";
            cin>>c;
            cout<<"masukkan bilangan kedua   : ";
            cin>>d;
            hasil2=c%d;
            cout<<"Hasil dari "<<c<<" "<<operasi<<" "<<d<<" = "<<hasil2<<endl;
        }else{
            main();
        }
        
    }