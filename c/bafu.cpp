#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

long double f1(float x, float power)
{
    long double t=pow(sin(10*x),power);
    return t;
}

int main()
{
    float n=100000,a=10,b=12,area=0,i,fxa,fxb,sm=0,power=10;
    float width=(b-a)/n;
    for(i=a;i<=b;i+=width){
        fxa=f1(i,power);
        fxb=f1(i+width,power);
        area=((fxa+fxb)/2)*width;
        sm=area+sm;
        //cout << sm << endl;
    }
    cout.precision(1000);
    cout << "Sum: \t" << sm;
    return 0;
}