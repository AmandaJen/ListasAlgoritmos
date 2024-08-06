#include<stdio.h>
#include<math.h>

int main(){
    int a[10], b[3][10], x, y;
    printf ("Insira 10 elementos para ve-los somados com 5, seu fatorial e seu quadrado \n");
    for (x=0;x<10;x++){
        scanf("%i",&a[x]);
    }
    for (x=0;x<10;x++){
        b[0][x]=a[x]+5;
    }
    for (x=0;x<10;x++){
        b[2][x]=a[x]*a[x];
    }
    for (x=0;x<10;x++){
        b[1][x]=1;
        for (a[x]=a[x];a[x]>1;a[x]--){
            b[1][x]=b[1][x]*a[x];
        }
    }
    for (y=0;y<3;y++){
        for (x=0;x<10;x++){
            printf ("%i ", b[y][x]);
        }
        printf ("\n");
    }
    return 0;
}