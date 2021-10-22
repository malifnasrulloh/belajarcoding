#include<iostream>
using namespace std;
int main(){
    int a=1;
    long b=2;
    short c=3;
    float d=4;
    double e=5;//koma e iso akeh
    char f='q'; //perbedaan dengan string adalah char hanya bisa 1 huruf, sedangkan string beberapa huruf seperti kata / kalimat
    bool g=true;
    bool h=false;
    string i="alip";
    cout<<"tipe data      value    "<<"size"<<endl;
    cout<<"int            "<<a<<"        "<<sizeof(a)<<" byte"<<endl;
    cout<<"long           "<<b<<"        "<<sizeof(b)<<" byte"<<endl;
    cout<<"short          "<<c<<"        "<<sizeof(c)<<" byte"<<endl;
    cout<<"float          "<<d<<"        "<<sizeof(d)<<" byte"<<endl;
    cout<<"double         "<<e<<"        "<<sizeof(e)<<" byte"<<endl;
    cout<<"char           "<<f<<"        "<<sizeof(f)<<" byte"<<endl;
    cout<<"bool true      "<<g<<"        "<<sizeof(g)<<" byte"<<endl;
    cout<<"bool false     "<<h<<"        "<<sizeof(h)<<" byte"<<endl;
    cout<<"string         "<<i<<"     "<<sizeof(i)<<" byte"<<endl;
    cout<<"\n\n1 byte = 8-bit"<<endl;
    return 0;
}