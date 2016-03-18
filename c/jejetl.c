#include <stdio.h>

int main(){
    int i,k=0,j;
    for(i=0;i<5;i++){
        printf("\nInserte el num de veces que quiere que se repita el *\n");
        scanf("%d",&k);
        for(j=0;j<=k;j++)
            printf("*");
    }
    return 0;
}