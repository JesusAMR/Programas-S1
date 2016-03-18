#include <stdio.h>
#include <math.h>

int main(){
    float a,b,resultado;
    printf("Inserte el valor de a(positivo)\n");
    scanf("%f",&a);
    printf("Inserte el valor de b(restar)\n");
    scanf("%f",&b);
    resultado=a-b;
    printf("Resta: %f-%f=%f\n",a,b,resultado);
    printf("Inserte el valor del numerador\n");
    scanf("%f",&a);
    printf("Inserte el valor del denominador\n");
    scanf("%f",&b);
    resultado=a/b;
    printf("Division: %f/%f=%f\n",a,b,resultado);
    printf("Inserte el valor del numero a elevar\n");
    scanf("%f",&a);
    printf("Inserte el valor de la potencia\n");
    scanf("%f",&b);
    resultado=pow(a,b);
    printf("Potencia: %f^%f=%f\n",a,b,resultado);
    return 0;
}