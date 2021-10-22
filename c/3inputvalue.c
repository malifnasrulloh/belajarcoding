#include<stdio.h>
int a;
char b[100];
int main(){
    printf("Masukkan Nilai A : ");
    scanf("%d",&a);//bisa semua tipe data mungkin
    printf("Masukkan Nilai B : ");
    fgets(b,100,stdin);//hanya untuk string
    //gets(b);//hanya untuk string
    printf("Nilai A == %d dan Nilai B == %s",a,b);
}