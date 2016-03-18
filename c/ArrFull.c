#include<stdio.h>

int main(){
    int a[10],j,b,prm=0,ny,nm,tmp;
    for(j=0;j<10;j++){
        printf("Inserte el num. %d:\n",j+1);
        scanf("%d",&a[j]);
        prm+=a[j];
    }
    for(j=1;j<10;j++){
        tmp=a[j];
        b=j;
        while(b>0 && tmp<a[b-1]){
            a[b] = a[b-1];
            b=b-1;
        }
        a[b]=tmp;
    }
    printf("Menor a mayor: \n");
    for(j=0;j<10;j++)
        printf("%d\n",a[j]);
    printf("Mayor a menor: \n");
    for(j=9;j>=0;j--)
        printf("%d\n",a[j]);
    printf("Promedio es: %d\n",prm/10);
    printf("Numero mayor es: %d\n",a[9]);
    printf("Numero menor es: %d\n",a[0]);
    return 0;
}