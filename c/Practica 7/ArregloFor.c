#include<stdio.h>

int main(){
    int n,i;
    printf("Inserte el numero de elementos entero del arreglo");
   // scanf("%d",&n);
    int a[10];
    for (i=0;i<10;i++){
        printf("Inserte el valor del arreglo en posicion [%d] \n",i);
        scanf("%d \n",&a[i]);
    }
    for(i=0;i<10;i++)
        printf("%d\n",a[i]);
    return 0;
}