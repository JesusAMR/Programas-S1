#include <stdio.h>
#include <math.h>

void func1() {  printf("Function 1 Called\n"); }

int main(){
	
	double x = 5.6;
	double tan();
	static void (*ptr[3])()={func1};
	ptr[0];
	ptr[1];
	int k;
	char *func[]={"modf","fmod","tanh","atan2","rint","floor","pow","log10","log","fabs","tan","atan","ceil","abs","cos","acos","sin","exp","sqrt","curt"};
	for (k = 0; k < 20; k++)
		printf("Funcion: %s\n",func[k] );
	getch();
    return 0;
}
