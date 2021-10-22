#include<stdio.h>
int nilai;
int main(){
    printf("PROGRAM KONVERSI NILAI");
    printf("\n\n\nMasukkan Sebuah Nilai : ");
    scanf("%d",&nilai);
    if(nilai>80){
        printf("\n\nNilai             : %d",nilai);
        printf("\nNilai Konversi    : A");
    }else if(nilai>70 && nilai<=80){
        printf("\n\nNilai             : %d",nilai);
        printf("\nNilai Konversi    : B");
    }else if(nilai>60 && nilai<=70){
        printf("\n\nNilai             : %d",nilai);
        printf("\nNilai Konversi    : C");
    }else if(nilai>50 && nilai<=60){
        printf("\n\nNilai             : %d",nilai);
        printf("\nNilai Konversi    : D");
    }else if(nilai<=50){
        printf("\n\nNilai             : %d",nilai);
        printf("\nNilai Konversi    : E");
    }
    return 0;
}