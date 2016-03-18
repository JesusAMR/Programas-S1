#include<stdio.h>
#include<ctype.h>
int main(){
    int s=0,x=0;
    char xl[];
    printf("Sumatoria de numeros, cuando quiera terminar inserte -1\n");
    do{
        do{
            printf("Inserte un numero:\n");
            scanf("%s",&xl);
        }while(isNUM(x)!=0);
        if(x!=-1)
            s+=x;
    }while(x!=-1);
    printf("La sumatoria fue: %d",s);
}