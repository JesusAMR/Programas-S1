#include <stdio.h>
#include <math.h>

int main(){
    int i;
    for(i=0;i<=100;i=i+2)
        printf("Num: %d,Raiz:%f,Cuadrado:%d\n",i,sqrt(i),i*i);
    getch();
    return 0;
}
