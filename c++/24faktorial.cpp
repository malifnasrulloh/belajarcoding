#include<iostream>
using namespace std;
int faktorial(int a){
    if(a==1){
       return a;
    }else{
        return a*faktorial((a-1));
    }
}
int main(){
    cout<<faktorial(5)<<endl;
}