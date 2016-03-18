#include <stdio.h>
int main(){
    int c[10],b[10],i;
    for(i=0;i<10;i++){
        printf("Inserte el num. %d:\n",i+1);
        scanf("%d",&c[i]);
    }
    for(i=0;i<10;i++)
        b[i]=c[9-i];
    for(i=0;i<10;i++)
        printf("%d\n",b[i]);
    return 0;
}