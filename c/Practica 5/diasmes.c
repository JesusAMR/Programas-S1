#include<stdio.h>

int main(){
    int d=0,dmf=28,m,a;
    do{
        printf("\nInserte el mes del año: ");
        scanf("%d",&m);
    }while(m<1 || m>12);
    do{
        printf("\nInserte el año: ");
        scanf("%d",&a);
    }while(a<1);
    if(a%4==0)
        dmf=29;
    switch(m){
        case 1:
            d=31;
            break;
        case 2:
            d=dmf;
            break;
        case 3:
            d=31;
            break;
        case 4:
            d=30;
            break;
        case 5:
            d=31;
            break;
        case 6:
            d=30;
            break;
        case 7:
            d=31;
            break;
        case 8:
            d=31;
            break;
        case 9:
            d=30;
            break;
        case 10:
            d=31;
            break;
        case 11:
            d=30;
            break;
        case 12:
            d=31;
            break;
    }
    printf("El mes %d tiene %d dias.\n",m,d);
    return 0;
}