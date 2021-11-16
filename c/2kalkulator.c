#include <stdio.h>
#include<stdlib.h>//gae command terminal
char operasi;
int c,d,hasil2,pilihan;
double a,b,hasil;
void operasibilangan();
int main(){
    system("clear");
    printf("kalkulator sederhana\n");
    printf("////////////////////");
    printf("\nMasukkan operasi yang diinginkan(+,-,*,/,%%) : ");
    scanf("%s", &operasi);
    operasibilangan();
    //printf("\nTekan apa saja untuk OPSIII.........");
    //system("clear");
    printf("\n\nOPSIIIII\n1. Hitung Lagi\n2. Keluar\nMasukkan pilihan anda : ");
    scanf("%d",&pilihan);
    if(pilihan==1){
        system("clear");
        main();
    }else if(pilihan==2){
        system("clear");
    }else{
        main();
    }
    return 0;
}

void operasibilangan(){
    if(operasi=='+'){
        printf("Masukkan bilangan pertama : ");
        scanf("%lf",&a);
        printf("Masukkan bilangan kedua   : ");
        scanf("%lf",&b);
        hasil=a+b;
        printf("Hasil dari %.0lf + %.0lf = %.0lf",a,b,hasil);
    }else if(operasi=='-'){
        printf("Masukkan bilangan pertama : ");
        scanf("%lf",&a);
        printf("Masukkan bilangan kedua   : ");
        scanf("%lf",&b);
        hasil=a-b;
        printf("Hasil dari %.0lf - %.0lf = %.0lf",a,b,hasil);
    }else if(operasi=='*'){
        printf("Masukkan bilangan pertama : ");
        scanf("%lf",&a);
        printf("Masukkan bilangan kedua   : ");
        scanf("%lf",&b);
        hasil=a*b;
        printf("Hasil dari %.0lf * %.0lf = %.0lf",a,b,hasil);
    }else if(operasi=='/'){
        printf("Masukkan bilangan pertama : ");
        scanf("%lf",&a);
        printf("Masukkan bilangan kedua   : ");
        scanf("%lf",&b);
        hasil=a/b;
        printf("Hasil dari %.0lf / %.0lf = %.0lf",a,b,hasil);
    }else if(operasi=='%'){
        printf("Masukkan bilangan pertama : ");
        scanf("%d",&c);
        printf("Masukkan bilangan kedua   : ");
        scanf("%d",&d);
        hasil2=c%d;
        printf("Hasil dari %d %c %d = %d",c,'%',d,hasil2);
    }
}