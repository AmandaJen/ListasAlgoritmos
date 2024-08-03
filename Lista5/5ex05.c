#include<stdio.h>
#include<math.h>

int main(){
    int a[2], b[3], c[5], x, y=0, z;
    printf ("Coloque os 2 valores de a \n");
    for (x=0;x<2;x++){
        scanf ("%i", &a[x]);
    }
    printf ("Coloque os 3 valores de b \n");
    for (x=0;x<3;x++){
        scanf ("%i", &b[x]);
    }
    for (x=0;x<2;x++){
        c[x]=a[x];
    }
    for (x=2;x<5;x++){
        c[x]=b[y];
        y++;
    }
    for (x=0;x<4;x++){
        for (y=x+1;y<5;y++){
            if (c[x]<c[y]){
                z=c[x];
                c[x]=c[y];
                c[y]=z;
            }
        }
    }
    for (x=0;x<5;x++){
        printf ("%i ", c[x]);
    }
    return 0;
}
