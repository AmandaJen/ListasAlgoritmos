#include<stdio.h>
#include<math.h>

int main(){
    int a[4],x,y,z;
    printf ("Digite a nota dos 40 alunos\n");
    for (x=0;x<4;x++){
        scanf ("%i", &a[x]);
    }
    for (x=0;x<3;x++){
        for (y=x+1;y<4;y++){
            if(a[x]>a[y]){
                z=a[x];
                a[x]=a[y];
                a[y]=z;
            }
        }
    }
    printf ("\nDigite qual elemento quer encontrar, e para sair digite um numero negativo \n");
    while (x>=0){
        scanf ("%i", &x);
        x=x-1;
        if (x<0){
            break;
        }
        printf ("%i\n", a[x]);
    }
    return 0;
}