#include <stdio.h>
int main(){
    int d=0,dmf=28,m,a,nm,na,nd;
    printf("Inserte el Año\n");
    scanf("%d",&a);
    printf("Inserte el Mes\n");
    scanf("%d",&m);
    if(a%4==0)
        dmf=29;
    int dd[12]={31,dmf,31,30,31,30,31,31,30,31,30,31};
    do{
        printf("Inserte el Dia(No intente engañarme)\n");
        scanf("%d",&d);
    }while(d>dd[m-1]);
    if(m==12 && d==dd[m-1]){
        na=a+1;
        nm=1;
        nd=1;
    }
    else if(d==dd[m-1]){
        nm=m+1;
        nd=1;
        na=a;
    }
    else{
        nd=d+1;
        nm=m;
        na=a;
    }
    printf("Dia siguiente es: %d/%d/%d",nd,nm,na);
    return 0;
}