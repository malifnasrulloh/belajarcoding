#include<iostream>
using namespace std;
int pangkat(int a, int b){
    if(b==1){
        return a;
    }else{
        return a*pangkat(a,(b-1));
    }
}
int main(){
    cout<<pangkat(2,4)<<endl;
}