#include <stdio.h>

int main(){
    int a,b,sa=0,sb,i;
    printf("¡Numero Amigos!\n");
    for(i=50;i<4000;i++){
        for(b=i;b!=0;b--){
            if(b%2==0){
                sa+=b;
                }
        }
        for(a=1;a<=sa;a++){
            if(a%2==0)
                sb+=a;
        }
        if(sa==sb)
            printf("Numeros amigos: %d y %d",sa,sb);
    }
    return 0;
}