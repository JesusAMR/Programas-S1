#include<stdio.h>

int main(){
    int n,i,pm=0,sm=0;
    printf("Inserte el numero de elementos entero del arreglo\n");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("Inserte el num. %d:\n",i+1);
        scanf("%d",&a[i]);
        pm+=a[i];
    }
    pm=pm/n;
    printf("Listado del arreglo: \n");
    for(i=0;i<n;i++){
        printf("%d \n",a[i]);
        if(a[i]>pm)
            sm+=a[i];
    }
    printf("Promedio: %d, suma de numeros mayores al promedio : %d",pm,sm);
    return 0;
}