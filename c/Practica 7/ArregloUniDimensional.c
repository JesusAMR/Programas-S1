#include <stdio.h>

int main(){
    int n,i,pm=0,sm=0;
    printf("Inserte el numero de elementos entero del arreglo\n");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("Inserte el num. %d:\n",i+1);
        scanf("%d",&a[i]);
    }
}