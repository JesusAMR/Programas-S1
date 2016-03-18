#include <stdio.h>

int main(){
    int n=4000,s=0,ss=0,x,i,a,cnt;
    for(x=1;x<n;x++){
        s=0;
        ss=0;
        for(i=1;i<x;i++){
            if(x%i==0)
                s=s+i;
            else
                continue;
        }
        for(a=1;a<s;a++){
            if(s%a==0)
                ss=ss+a;
            else
                continue;
        }
        if(cnt==s)
            break;
        if(ss==x && s!=ss){
            printf("%d y %d son numeros amigos \n",s,ss);
            cnt=s;
        }
    }
    return 0;
}