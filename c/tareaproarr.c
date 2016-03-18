#include <stdio.h>

int main(){
    int a[5][5],b=0,i,j,c=0;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("Inserte el valor en posicion (%d,%d)",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(a[i][j]==0)
                c+=1;
        }
    }
    printf("Hubo :%d ceros",c);
    return 0;
}