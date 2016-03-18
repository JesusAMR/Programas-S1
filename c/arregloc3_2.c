#include<stdio.h>

int main(){
    char d[3][2];
    int i,x;
    for(i=0;i<3;i++){
        for(x=0;x<2;x++){
            printf("Inserte el valor en: [%d],[%d] \n",i+1,x+1);
            scanf("%s",&d[i][x]);
        }
    }
    for(i=0;i<3;i++){
        for(x=0;x<2;x++)
            printf("%c \n",toupper(d[i][x]));
    }
    return 0;
}