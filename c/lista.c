#include <stdio.h>

int main(){
    int i,list1,list2,s;
    for(i=0;i<30;i++){
        if(i<15){
           printf("Inserte el elemento %d de la lista 1\n",i+1);
           scanf("%d",&s);
           list1=list1+s;
        }else{
            printf("Inserte el elemento %d de la lista 2\n",i-14);
            scanf("%d",&s);
            list2=list2+s;
        }
    }
    if(list1>list2)
        printf("La lista 1 es mayor que la lista 2");
    else
        printf("La lista 2 es mayor que la lista 1");
    return 0;
}