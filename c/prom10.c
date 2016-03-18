#include <stdio.h>

int main(){
    int i,matt;
    float cal,prom;
    char* mat;
    for(i=0;i<10;i++){
        printf("Ingrese su matricula: \n");
        scanf("%d",&matt);
        printf("Ingrese la materia: \n");
        scanf("%s",&mat);
        printf("Calificacion 1:\n");
        scanf("%f",&cal);
        prom=cal;
        printf("Calificacion 2:\n");
        scanf("%f",&cal);
        prom+=cal;
        printf("Calificaicon 3:\n");
        scanf("%f",&cal);
        prom=(prom+cal)/3;
        printf("Promedio: %f\n",prom);
    }
    return 0;
}