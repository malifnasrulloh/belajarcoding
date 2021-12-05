#include<iostream>
#include<algorithm>
using namespace std;
int n,a[1024];

int main(){
    cout<<"Masukkan berapa banyak data yang ingin di input : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<"masukkan nilai ke-"<<i<<" : ";
        cin>>a[i-1];
    }
    sort(a,a+n);
    for(int i=1;i<=n;i++){
        cout<<a[i-1]<<endl;
    }

}