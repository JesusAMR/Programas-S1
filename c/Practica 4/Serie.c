#include<stdio.h>

int main(){
    int i=1,fb=0,cal;
    while(fb<2500){
        fb=fb+i;
        i=fb-i;
        if(fb%5!=0 && fb!=2584)
            printf("%d ",fb);
    }
}