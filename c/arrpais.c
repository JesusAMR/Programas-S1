#include<stdio.h>
typedef struct string{
    char string[100];
}string;
int main(){
    int b[10],i,x;
    string d[10];
    for(i=0;i<10;i++){
        printf("Inserte el nombre del pais en posicion %d\n",i+1);
        scanf("%s",&d[i]);
        printf("Inserte los votos del equipo \n");
        scanf("%d",&b[i]);
    }
    for(i=0;i<10;i++){
        printf("%s %d\t",d[i],b[i]);
        for(x=0;x<b[i];x++)
            printf("*");
        printf("\n");
    }
    return 0;
}