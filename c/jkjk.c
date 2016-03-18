#include <stdio.h>
#include <math.h>
int main(){
	int i;
	float a1,a3=0,a5=0,a2,n;
	for (i=0;i<10;i++){
		printf("Introduce el numero \n");
		scanf("%f",&n);
		a1=fmod(n,3);
		a2=fmod(n,5);
		if(a1==0){
			a3=a3+1;}
		if(a2==0){
			a5=a5+1;}
		}printf("Multiplos de 3 y 5\n %f %f",n,a3,a5);
		return 0;
		}
	

