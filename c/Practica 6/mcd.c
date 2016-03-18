#include<stdio.h>

int main(){
    int n1,n2;
    printf("Ingrese el primer numero natural");
    scanf("%d",&n1);
    printf("Ingrese el segundo numero natural");
    scanf("%d",&n2);
    printf("El MCD de %d y %d es: %d",n1,n2,n1%n2);
    return 0;
}