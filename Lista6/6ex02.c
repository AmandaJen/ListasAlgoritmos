#include <stdio.h>
#include <math.h>
#include <string.h>

int main (){
    int a[7], b[7], c[2][7], x, y;
    for (x=0;x<7;x++){
        scanf ("%i",&a[x]);
    }
    for (x=0;x<7;x++){
        scanf ("%i",&b[x]);
    }
    for (x=0;x<7;x++){
        c[0][x]=a[x];
    }
    for (x=0;x<7;x++){
        c[1][x]=b[x];
    }
    for (y=0;y<2;y++){
        for (x=0;x<7;x++){
            printf ("%i ", c[y][x]);
        }
        printf ("\n");
    }
    return 0;
} 
