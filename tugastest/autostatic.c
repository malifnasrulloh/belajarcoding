#include<stdio.h>

int aa(){
    static int b=1;   
    int n=1;
    printf("   %d\n",b);
    n++;
    //a++;
    b++;
}

int main(){
    for(int na=1;na<=10;na++){
        auto int a=1; 
        printf("a = %d\n",a);
        a++;
        printf("a = %d",a);
        aa();
    }
    return 0;
}