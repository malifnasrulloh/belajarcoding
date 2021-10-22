#include<stdio.h>
int a,b,n,prima;
int main(){
    printf("masukkan banyak data : ");
    scanf("%d",&n);
    for(int i = 1;i<=n;i++){
        printf("Data ke %d : ",i);
        for(int a=2;a<=__INT_MAX__ && prima==1;a++){
            prima=a%2;
            printf("%d",a);
        }
        printf("\n");
    }
    //printf("Jumlah total dari data yang dimasukkan : %d",a);
}