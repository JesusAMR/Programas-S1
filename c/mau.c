#include <stdio.h>

int main(){
    float precios=0,total;
    while(precios!=-1){
        printf("Ingrese el precio del articulo, si ya termino de agregar ponga '-1'\n");
        scanf("%f",&precios);
        if(precios==-1)
            break;
        total+=precios;
    }
    printf("El total del ticket a pagar es %f",total);
    return 0;
}