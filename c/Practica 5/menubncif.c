#include<stdio.h>
#include<math.h>

int main(){
    int opc=0;
    float cant=0,ret,sm;
    do{
        printf("1)Despositos\n2)Retiros\n3)Consulta de Saldo\n4)Salir\nSeleccione una opcion: ");
        scanf("%d",&opc);
        if(opc==1){
            printf("Cantidad a despositar: ");
            scanf("%f",&sm);
            while(sm<0){
                    printf("\nNo puede depositar dinero negativo...: ");
                    scanf("%f",&sm);
                }
            cant+=sm;
        }
        else if(opc==2){
            printf("\nCantidad a retirar : ");
            scanf("%f",&ret);
            while(ret>cant){
                printf("\nNo puede retirar mas dinero del que tenga: ");
                scanf("%f",&ret);
            }
            cant-=abs(ret);
        }
        else if(opc==3)
            printf("Su saldo actual es de: $%.2f\n",cant);
        else if(opc==4)
            break;
        else{
            printf("No inserto una opcion correcta vuelva a intentar\n");
        }
    }while(opc!=4);
}