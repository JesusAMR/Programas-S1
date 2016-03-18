#include <stdio.h>
#include <math.h>

int main(){
    int x= 10,y=5;
    double xx=5.5,yy=1.6,part,r;
    printf("Funcion modf:%f\n",modf(xx,&part));
    printf("Funcion fmod:%f\n",fmod(xx,yy));
    printf("Funcion tanh:%f\n",tanh(xx));
    printf("Funcion atan2:%f\n",atan2(xx,yy));
    printf("Funcion floor:%f\n",floor(xx));
    printf("Funcion pow:%f\n",pow(xx,yy));
    printf("Funcion log10:%f\n",log10(yy));
    printf("Funcion log:%f\n",log(xx));
    printf("Funcion fabs:%f\n",fabs(yy));
    printf("Funcion atan:%f\n",atan(xx));
    printf("Funcion ceil:%f\n",ceil(yy));
    printf("Funcion abs:%f\n",abs(xx));
    printf("Funcion cos:%f\n",cos(xx));
    printf("Funcion acos:%f\n",acos(xx));
    printf("Funcion sin:%f\n",sin(xx));
    printf("Funcion exp:%f\n",exp(xx));
    printf("Funcion sqrt:%f\n",sqrt(yy));
    getch();
    return 0;
}
