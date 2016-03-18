#include <stdio.h>
int main(){
    int c[10],i;
    for(i=0;i<10;i++){
        printf("Inserte el num. %d:\n",i+1);
        scanf("%d",&c[i]);
    }
    for(i=0;i<10;i++)
        printf("%d\n",c[i]);
    return 0;
}