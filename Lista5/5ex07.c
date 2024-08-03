#include<stdio.h>
#include<math.h>

int main(){
    int a[20], b[20], x, y, z;
    for (x=0;x<20;x++){
        scanf ("%i", &a[x]);
    }
    for (x=0;x<20;x++){
        b[x]=a[x]+2;
    }
    for (x=0;x<19;x++){
        for (y=x+1;y<20;y++){
            if (b[x]>b[y]){
                z=b[x];
                b[x]=b[y];
                b[y]=z;
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
        printf ("%i\n", b[x]);
    }
    return 0;
}
