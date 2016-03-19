#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,i,j,cb=0,cc=0,ct=0,k,kk=0,z=0;
    do{
    printf("Inserte el numero de elementos del arreglo\n");
    fflush(stdin);
    }while(scanf("%d",&n)==0);
    int a[n],aa[n];
    for(i=0;i<n;i++){
        printf("Inserte el elemento %d: ",i+1);
        scanf("%d",&a[i]);
        if(a[i]%2==0 || a[i]%3==0)
             cb++;
    }
    int b[cb];
    for(i=0;i<cb;i++){
        b[i]=0;
    }
    for(i=0;i<n;i++){
        if((a[i]%2)==0 || (a[i]%3)==0){
           b[ct]=a[i];
           ct++;
        }
    }
    int c[n];
    for(i=0;i<n;i++){
        c[i]=0;
    }   
    for(i=0;i<n;i++){
        ct=0;
        k=a[i];
        aa[kk]=k;
        kk++;
        for(j=0;j<n;j++){
            if(aa[j]==k)
               ct++;
        }
        if(ct==1){
           c[z]=k;
           z++;
        }
    }
    printf("Arreglo Original:\n");
    for(i=0;i<n;i++)
        printf("%d \n",a[i]);
    printf("Arreglo con multiplos\n");
    for(i=0;i<cb;i++)
        printf("%d \n",b[i]);
    printf("Arreglo sin repetidos\n");
    for(i=0;i<z;i++)
        printf("%d \n",c[i]);
    system("pause");
    return 0;
}
