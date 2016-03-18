#include <stdio.h>

int main(){
    float a,b;
    printf("Inserte el primer valor:");
    scanf("%f",&a);
    printf("\nInserte el segundo valor:");
    scanf("%f",&b);
    if(a>0 && b>0)
        printf("\nLa media aritmetica es: %f", (a+b)/2);
    return 0;
}