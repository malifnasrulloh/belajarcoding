#include<stdio.h>

float kala(int p, int l){
    int luas=p+l;
    return luas;
}

int main(){
    int o,u;
    o=12;
    u=123;
    printf("hasil : %f",kala(o,u));
}