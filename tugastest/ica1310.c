#include<stdio.h>
#include<stdlib.h>
int pecahanuang[]={100000,75000,50000,20000,10000,5000,2000,1000,500,200,100,1},uang,banyak,n;
int main(){
    n=sizeof(pecahanuang)/sizeof(pecahanuang[0]);
    system("clear");//gae linux
    //system("cls");//gae windows
    printf("Program Konversi Uang IDN ke Pecahan\n\n\n");
    printf("Masukkan Uang Anda : ");
    scanf("%d",&uang);
    printf("\n==== Konversi ke Pecahan Uang ====\n\n");
    for(int i=0;i<n;i++){
        banyak=uang/pecahanuang[i];
        if(banyak == 0){
            continue;
        }
        printf("%d sebanyak %d\n",pecahanuang[i],banyak);
        uang=uang-(pecahanuang[i]*banyak);
    }
}