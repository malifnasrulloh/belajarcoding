#include<stdio.h>
int n;
int main(){
    printf("masukkan nilai n : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int a=n;a>i;a--){
            printf(" ");
        }
        for(int b=1;b<=i;b++){
            printf("*");
        }
        printf("\n");
    }
    for(int i=1;i<=n;i++){
        for(int c=1;c<=i;c++){
            printf(" ");
        }
        for(int d=n;d>i;d--){
            printf("*");
        }
        printf("\n");
    }
}