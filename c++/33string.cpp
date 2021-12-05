#include<iostream>
#include<string>
using namespace std;

int main(){
    string nama("alif");
    string pacar(" tidak punya");

    // menyambung kata
    nama=(nama + " alip");
    cout<<nama<<endl;
    nama.append(pacar);
    cout<<nama<<endl;
    nama+=pacar;
    cout<<nama<<endl;
    cin>>nama;
    nama.clear();
    cout<<nama<<endl;
    
    // mengganti index
    nama="alippppppppppp";
    cout<<nama;

}