#include<stdio.h>
int main(){
    int a[20],b,i;
    char* g = "No esta dentro del arreglo";
    for(i=0;i<20;i++){
        printf("Inserte el num: %d del arreglo\n",i+1);
        scanf("%d",&a[i]);
        while(a[i]>100 || a[i]<0){
            printf("Numero no en en rango 0<x<100\n");
            scanf("%d",&a[i]);
        }
    }
    printf("Que numero desea buscar\n");
    scanf("%d",&b);
    for(i=0;i<20;i++){
        if(a[i]==b){
            g = "Esta dentro del arreglo";
            break;
        }
    }
    printf("%s.\n",g);
    return 0;
}