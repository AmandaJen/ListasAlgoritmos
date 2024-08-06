#include <stdio.h>
#include <math.h>
#include <string.h>

int main (){
    int a[4], b[4], c[4][2], x, y;
    printf ("Coloque 4 valores para o vetor A para ver seu dorbo \n");
    for (x=0;x<4;x++){
        scanf ("%i",&a[x]);
    }
    printf ("Coloque 4 valores para o vetor B para subtrair 5 \n");
    for (x=0;x<4;x++){
        scanf ("%i",&b[x]);
    }
    for (x=0;x<4;x++){
        c[x][0]=a[x]*2;
    }
    for (x=0;x<4;x++){
        c[x][1]=b[x]-5;
    }
    printf ("Seu resultado e \n");
    for (y=0;y<2;y++){
        for (x=0;x<4;x++){
            printf ("%i ", c[x][y]);
        }
        printf ("\n");
    }
    return 0;
} 