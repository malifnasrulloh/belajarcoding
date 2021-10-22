#include<iostream>
using namespace std;
int main(){
    int a=3,b=4,hasil;
    //not (untuk membalikkan nilai, aslinya true menjadi false atau sebaliknya)
    cout<<!(a==3)<<endl;

    //and
    hasil=(a==3)and(b==4);
    cout<<hasil<<endl;

    //or
    hasil=(a==2)or(b==4);
    cout<<hasil<<endl;
    return 0;
}