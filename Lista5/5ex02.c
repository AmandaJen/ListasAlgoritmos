#include<stdio.h>
#include<math.h>

int main(){
    int a[8], b[8], x, y, z;
    printf ("Digite 8 numeros para multiplicar por 5 \n");
    for (x=0;x<8;x++){
        scanf ("%i", &a[x]);
    }
    for (x=0;x<8;x++){
        b[x]=a[x]*5;
    }
    for (x=0;x<7;x++){
        for (y=x+1;y<8;y++){
            if(b[x]>b[y]){
                z = b[x];
                b[x]=b[y];
                b[y]=z;
            }
        }
    }
    printf ("\nDigite qual elemento quer encontrar, e para sair digite um numero negativo \n");
    while (x>0){
        scanf ("%i", &x);
        x=x-1;
        if (x<0){
            break;
        }
        printf ("%i\n", b[x]);
    }
    return 0;
}
