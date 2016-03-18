#include<stdio.h>
#include<math.h>

int main(){
    int opc=0;
    float cant=0,sm,ret;
    do{
        printf("1)Despositos\n2)Retiros\n3)Consulta de Saldo\n4)Salir\nSeleccione una opcion: ");
        scanf("%d",&opc);
        switch(opc){
            case 1:
                printf("Cantidad a despositar: ");
                scanf("%f",&sm);
                while(sm<0){
                    printf("\nNo puede depositar dinero negativo...: ");
                    scanf("%f",&sm);
                }
                cant+=sm;
                break;
            case 2:
                printf("\nCantidad a retirar : ");
                scanf("%f",&ret);
                while(ret>cant){
                    printf("\nNo puede retirar mas dinero del que tenga: ");
                    scanf("%f",&ret);
                }
                cant-=abs(ret);
                break;
            case 3:
                printf("Su saldo actual es de: $%.2f\n",cant);
                break;
            case 4:
                break;
        }
    }while(opc!=4);
}