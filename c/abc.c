#include <stdio.h>

int main(){
    int alm[100][6],i,j,b=0,c=1,cb=0,g,mat,cf,np,x=0;
    char inf[6][9]={"Grupo","Matricula","Parcial1","Parcial2","Parcial3","Promedio"};
    for(i=0;i<100;i++){
        for(j=0;j<6;j++)
            alm[i][j]=-1;
    }
    do{
        do{
            printf("\nSeleccione la opcion\n1)Registro de calificacion parcial\n2)Consulta de calificaciones por matricula\n3)Generar Promedio\n4)Listado Calificacion por grupo y por parcial\n5)Listado de Promedio por matricula\n6)Salir\n");
            scanf("%d",&c);
        }while(c<0 && c>6);
        cb=0;
        switch(c){
            case 1:
                printf("Registro de calificacion parcial\n");
                do{
                    printf("¿En que grupo se encuentra el alumno? (No puede ser mayor de 3 o menor de 0)\n");
                    scanf("%d",&g);
                }while(g<=0 || g>3);
                printf("¿Cual es la matricula del alumno?\n");
                scanf("%d",&mat);
                for(i=0;i<100;i++){
                    printf("%d",alm[i][1]);
                }
                for(i=0;i<100;i++){
                    if(alm[i][1]==mat){
                        printf("Ya esta registrada esa matricula en un grupo, se utilizara ese grupo %d %d %d\n",alm[i][1],mat,alm[1][1]);
                        cb=i;
                        break;
                    }
                    else if(alm[i][0]==-1){
                        cb=b;
                        alm[cb][0]=g;
                        alm[cb][1]=mat;
                    }
                }
                do{
                    printf("¿Que parcial va a ingresar (Solo hay 3 parciales)?\n");
                    scanf("%d",&np);
                }while(np<=0 || np>3);
                if(alm[cb][2]>=0 && alm[cb][3]>=0 && alm[cb][4]>=0){
                    printf("Ya estan llenadas todas las calificaciones no puede hacer nada\n");
                    break;
                }
                while(alm[cb][np+1]>=0){
                    printf("Ya esta llenado ese parcial, intente con otro\n");
                    scanf("%d",&np);
                }
                printf("¿Cual es la calificacion del parcial?\n");
                scanf("%d",&cf);
                alm[cb][np+1]=cf;
                b++;
                break;
            case 2:
                printf("Consulta de calificacion por matricula\n");
                printf("¿Que matricula desea consultar?");
                scanf("%d",&mat);
                for(i=0;i<100;i++){
                    if(alm[i][1]==mat){
                        cb=i;
                        break;
                    }
                }
                if(cb=0){
                    printf("La matricula no esta registrada\n");
                    break;
                    }
                for(i=2;i<5;i++){
                    if(alm[cb][i]!=-1)
                        printf("Parcial #%d: %d, ",i-1, alm[cb][i]);
                }
                if(alm[cb][5]!=-1)
                    printf("Promedio: %d\n",alm[cb][5]);
                break;
            case 3:
                printf("Generar Promedio\n");
                for(i=0;i<100;i++){
                    if(alm[i][0]!=-1){
                        for(j=2;j<5;j++){
                            if(alm[i][j]==-1)
                                cb++;
                        }
                        alm[i][5]=(alm[i][2]+alm[i][3]+alm[i][4]+cb)/3;
                    }
                }
                break;
            case 4:
                printf("Listado Calificacion por grupo y por parcial\n");
                do{
                printf("Inserte el grupo que desea consultar\n");
                scanf("%d",&cb);
                }while(cb<0 && cb>3);
                do{
                printf("Inserte el parcial que desea consultar\n");
                scanf("%d",&np);
                }while(np<0 && np>3);
                for(i=0;i<100;i++){
                    if(alm[i][0]==cb && alm[i][np+1]!=-1)
                        printf("Grupo: %d, Parcial #%d : %d\n",cb,np,alm[i][np+1]);
                }
                break;
            case 5:
                printf("Listado de promedio por matricula\n");
                printf("Inserte la matricula a la cual desea consultar su promedio\n");
                scanf("%d",&mat);
                for(i=0;i<100;i++){
                    if(alm[i][1]==mat){
                        cb=i;
                        break;
                    }
                }
                if(cb=0)
                    break;
                if(alm[cb][5]==-1){
                    printf("El promedio no ha sido generado favor de generarlo con la opcion del menu\n");
                    break;
                }
                printf("El promedio de la matricula: %d es: %d",mat,alm[cb][5]);
                break;
            case 6:
                printf("Saliendo del programa...");
                break;
        }
    }while(c!=6);
    for(i=0;i<100;i++){
        for(j=0;j<6;j++){
            if(alm[i][0]!=-1 && alm[i][j]!=-1)
                printf("%d ",alm[i][j]);
        }
        if(alm[i+1][0]!=-1)
            printf("\n");
        else
            break;
    }
    return 0;
}