#include<iostream>
using namespace std;
int main(){
    int a=0;
    while(a<=10){
        if(a==7){
            //continue; 
            break;
            /*continue jika dipakai di while maka (while kerjanya berurutan) akan menyekip program sesuai
            urutannya, dalam kasus ini maka saat a=7 program akan kembali ke looping tanpa a++, sehingga
            nilai a akan selalu 7 dan terlooping terosss, untuk mengatasinya maka a++ harus di tulis sebelum
            if / sebelum disebutkan kondisi jika nya
            */
        }
        cout<<a<<endl;
        a++;

    }
    cout<<"\nINI FOR"<<endl;
    for(int i=0;i<=10;i++){
        if(i==7){
            continue;
            //break;
            /*aturan continue di while tidak berlaku di sini, sehingga saat a=7 maka akan di skip dan
            langsung ke program selanjutnya
            */
        }
        cout<<i<<endl;
    }




    return 0;
}