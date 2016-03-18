#include <stdio.h>

int main(){
    int q,i,c3=0,c5=0;
    for(i=0;i<10;i++){
        printf("Inserte el numero %d:",i+1);
        scanf("%d",&q);
        if(q%3==0 && q%5==0){
            printf("El numero %d: es multiplo del 3 y 5\n",q);
            c3++;
            c5++;
            continue;
        }
        if(q%3==0)
            printf("El numero %d, es multiplo del 3\n");
            c3++;
        if(q%5==0)
            printf("El numero %d, es multiplo del 5\n");
            c5++;
    }
    printf("Hubo un total de %d multiplos de 3 y %d multiplos de 5\n",c3,c5);
    getch();
    return 0;
}
