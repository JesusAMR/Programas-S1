#include <stdio.h>
//1 si 2 no s,r,mult
int main(){
    int f=0,c=0;
    float x,y,tot;
    while(c!=2){
        if(c==1){
            printf("1)SUMA\n2)RESTA\n3)MULTIPLICACION\nSeleccione la opcion: ");
            scanf("%d",&f);
            printf("Inserte el valor x: ");
            scanf("%f",&x);
            printf("Inserte el valor y: ");
            scanf("%f",&y);
            switch(f){
                case 1: tot=x+y;
                break;
                case 2: tot=x-y;
                break;
                case 3: tot=x*y;
                break;
                default: break;
            }
        
            printf("El total es %f, desea hacer otra operacion (1=SI, 2=NO)\n",tot);
            scanf("%d",&c);
        }else
            break;
    }
    return 0;
}