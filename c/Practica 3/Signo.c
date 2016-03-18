#include <stdio.h>

int main(){
    float c;
    printf("Inserte un numero real:\n");
    scanf("%f",&c);
    if(c<0){
        printf("El valor cambiara a positivo\n");
        printf("El valor con signo diferente es: %f",(-1*c));
        }
    else if(c>0){
        printf("El valor cambiara a negativo\n");
        printf("El valor con signo diferente es: %f",(-1*c));
        }
    else
        printf("No habra cambio, por que inserto el 0\n");
    return 0;
}