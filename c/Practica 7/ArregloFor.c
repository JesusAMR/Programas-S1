#include<stdio.h>

int main(){
    int n,i,pm=0,sm=0;
    do{
        printf("Inserte el numero de elementos entero del arreglo\n");
        fflush(stdin);
    }while(scanf("%d",&n)==0 || n<=0);
    int a[n];
    for(i=0;i<n;i++){
        do{
           printf("Inserte el num. %d:\n",i+1);
           fflush(stdin);
        }while(scanf("%d",&a[i])==0);
        pm+=a[i];
    }
    pm=pm/n;
    printf("Listado del arreglo: \n");
    for(i=0;i<n;i++){
        printf("%d \n",a[i]);
        if(a[i]>pm)
            sm+=a[i];
    }
    printf("Promedio: %d, suma de numeros mayores al promedio : %d\n",pm,sm);
    system("pause");
    return 0;
}
