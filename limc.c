#include <stdio.h>

int main(){
    int nc,te,i;
    float sim,tc,lmc,ns;
    while(i!=1){
        printf("Numero de cuenta: \n");
        scanf("%d",&nc);
        printf("Saldo inicial del mes: \n");
        scanf("%d",&sim);
        printf("Total de elementos cargados al cliente en este mes: \n");
        scanf("%f",&tc);
        printf("Total de creditos aplicados a la cuenta del cliente durante el mes: \n");
        scanf("%f",&tc);
        printf("Límite de crédito autorizado: \n");
        scanf("%f",&lmc);
        ns=sim+tc-tc;
        if(ns>lmc)
            printf("Numero de cuenta: %d, limite de credito: %f, saldo nuevo: %f\nLimite de credito excedido");
        printf("\n¿Desea calcular otro limite de credito(1=NO,2=SI)?");
        scanf("%d",&i);
    }
    return 0;
}