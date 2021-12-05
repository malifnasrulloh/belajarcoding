#include<stdio.h>
int a[1024],angka;

int main(){
    for(int i=1;i<=5;i++){
        printf("masukkan angka ke-%d : ",i);
        scanf("%d",&a[i-1]);
    }
    angka=a[0];
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            if(a[j-1]<angka){
                angka=a[j-1];
                a[j-1]=100;
            }
        }
        printf("%d, ",angka);
    }
}