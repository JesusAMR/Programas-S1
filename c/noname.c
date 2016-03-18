#include <stdio.h>

int main(){
    //convertir de c a f f=9/5*c+32
    int c=-10;
    do{
        printf("\nGrados en C:%d, grados en F:%d",c,((9*c)/5)+32);
        c++;
    }while(c!=51);
    return 0;
}