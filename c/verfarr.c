#include <stdio.h>
#define true 1
#define false 0
typedef int bool;
int main(){
    int c[10],i;
    char* g="Ordenado";
    for(i=0;i<10;i++){
        printf("Inserte el num. %d:\n",i+1);
        scanf("%d",&c[i]);
    }
    for(i=0;i<9;i++){
        if(c[i]>c[i+1]){
            g="No ordenado";
            break;
        }
        else
            continue;
    }
        printf("%s \n",g);
    return 0;
}