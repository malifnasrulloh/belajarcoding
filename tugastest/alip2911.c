#include<stdio.h>
int main(){
    int n;
    printf("Masukkan nilai n : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=n;j>=i+1;j--){
            printf(" ");
        }
        if(i==2){
            printf("++++++++++++\n");
        }
        if(i==n){
            printf("+");
        }else{
            printf("+");
        }if(i==n){
            printf("           +");
        }else{
            printf("           +\n");
        }
    }
    for(int i=1;i<=n;i++){
        if(i==1){
            printf("\n++++++++++++");
        }
        printf("\n+          +");
        if(i==n){
            printf("\n++++++++++++");
        }
    }
}