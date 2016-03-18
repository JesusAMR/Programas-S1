#include<stdio.h>

int main(){
    int sm=0,i;
    for(i=1;i<500;i++){
        if(i%5==0 || i%9==0)
            sm=sm+i;
    }
    printf("Suma de multiplos de 5 y 9 menores de 500: %d",sm);
    return 0;
}