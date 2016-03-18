#include <stdio.h>

int main(){
    const int km=1000;
    float res,m;
    printf("Inserte los metros a cambiar: ");
    scanf("%f",&m);
    printf("\nMetros a cambiar: %f",m);
    printf("\nEquivalente en km: %f",m/km);
    return 0;
}