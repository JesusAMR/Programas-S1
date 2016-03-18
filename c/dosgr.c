#include <stdio.h>
int main(){
    int c[5],i,n[3];
    for(i=0;i<5;i++){
        printf("Inserte el num. %d:\n",i+1);
        scanf("%d",&c[i]);
    }
    for(i=0;i<5;i++){
        if(c[i]>n[0]){
            n[0]=c[i];
            n[1]=i;
        }
    }
     for(i=0;i<5;i++){
        if(c[i]<n[0]){
            n[2]=c[i];
            n[3]=i;
        }
    }
    printf("Numero mayor: %d, posicion %d,segundo numero mayor: %d y posicion %d\n",n[0],n[1]+1),n[2],n[3]+1;
    return 0;
}