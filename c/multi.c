//multiplos de 3 a 5 desde el 15 hasta el 45
#include <stdio.h>
int main(){
    int i,x=15;
    do{
        if(x%3==0 || x%5==0)
            printf("Multiplo de 3 o 5 %d\n",x);
        x++;
    }while(x!=46);
    return 0;
}