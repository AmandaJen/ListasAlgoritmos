#include<stdio.h>
#include<math.h>

int main(){
    int a[5][3], b[5][3], c[5][3], x, y;
    printf ("Coloque 15 valores para matriz A 5 por 3");
    for (x=0;x<5;x++){
        for (y=0;y<3;y++){
        scanf ("%i",&a[x][y]);
        }
    }
    printf ("Coloque 15 valores para matriz B 5 por 3");
    for (x=0;x<5;x++){
        for (y=0;y<3;y++){
        scanf ("%i",&b[x][y]);
        }
    }
    for (x=0;x<5;x++){
        for (y=0;y<3;y++){
        c[x][y]=a[x][y]+b[x][y];
        }
    }
    for (x=0;x<5;x++){
        for (y=0;y<3;y++){
        printf ("%i ", c[x][y]);
        }
    printf ("\n");
    }
    return 0;
}