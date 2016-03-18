#include <stdio.h>

int main(){
    int i;
    for(i=0;i<200000;i++){
        printf("|");
        printf("\r");
        printf("/");
        printf("\r");
        printf("-");
        printf("\r");
        printf("\\");
        printf("\r");
        printf("|");
        printf("\r");
        printf("-");
        printf("\r");
    }
    return 0;
}