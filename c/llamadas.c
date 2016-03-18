#include <stdio.h>

int main(){
    int i,f;
    printf("Inserte la clave:\n");
    scanf("%d",&i);
    printf("Inserte los minutos(entero):\n");
    scanf("%d",&f);
    switch(i){
        case 12: printf("Zona:%d) América del Norte, precio total: %f",i,2*f);break;
        case 15: printf("Zona:%d)América Central, precio total: %f",i,2.2*f);break;
        case 18: printf("Zona:%d)América del Sur, precio total: %f",i,4.5*f);break;
        case 19: printf("Zona:%d)Europa, precio total: %f",i,3.5*f);break;
        case 23: printf("Zona:%d)Asia, precio total: %f",i,6*f);break;
        case 25: printf("Zona:%d)África, precio total: %f",i,6*f);break;
        case 29: printf("Zona:%d)Oceanía, precio total: %f",i,5*f);break;
        default: break;
    }
    getch();
    return 0;
}
