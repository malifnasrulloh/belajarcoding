#include<stdio.h>
int nilai;
int main(){
    printf("\nMasukkan Sebuah Nilai : ");
    scanf("%d",&nilai);
    printf("\nPROGRAM KONVERSI NILAI");
    if(nilai>75){
        printf("\n\nNilai             : %d",nilai);
        printf("\nNilai Konversi    : A");
    }else if(nilai>60 && nilai<=75){
        printf("\n\nNilai             : %d",nilai);
        printf("\nNilai Konversi    : B");
    }else if(nilai>50 && nilai<=60){
        printf("\n\nNilai             : %d",nilai);
        printf("\nNilai Konversi    : C");
    }else if(nilai>40 && nilai<=50){
        printf("\n\nNilai             : %d",nilai);
        printf("\nNilai Konversi    : D");
    }else if(nilai<=40){
        printf("\n\nNilai             : %d",nilai);
        printf("\nNilai Konversi    : E");
    }
    return 0;
}