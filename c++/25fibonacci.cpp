#include<iostream>
using namespace std;
int fibonacci(int a){
    if((a==1) || (a==0)){
        return a; 
    }else{
        //cout<<a<<", ";
        return fibonacci(a-1)+fibonacci(a-2);
    }
}
int main(){
    cout<<fibonacci(7)<<endl;
}