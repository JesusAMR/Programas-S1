#include <stdio.h>

int main(){
    int a[5][5],i,x,res=0;
    for(i=0;i<5;i++){
        for(x=0;x<4;x++){
            printf("Inserte (%d,%d)\n",i+1,x+1);
            scanf("%d",&a[i][x]);
        }
    }
    for(i=0;i<5;i++){
        a[i][4]=0;
        for(x=0;x<4;x++)
            a[i][4]+=a[i][x];
        printf("%d ",a[i][4]);
    }
    return 0;
}