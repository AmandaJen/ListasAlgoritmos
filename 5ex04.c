#include<stdio.h>
#include<math.h>

int main(){
    int a[5], b[5], c[5], x, y, z;
    printf ("Coloque os 15 valores de a \n");
    for (x=0;x<5;x++){
        scanf ("%i", &a[x]);
    } 
    printf ("Coloque os 15 valores de b \n");
    for (x=0;x<5;x++){
        scanf ("%i", &b[x]);
    } 
    for (x=0;x<4;x++){
        for (y=x+1;y<5;y++){
            if (a[x]>a[y]){
                z=a[x];
                a[x]=a[y];
                a[y]=z; 
            }
        }
    }
    for (x=0;x<5;x++){
        printf ("%i ", a[x]);
    }
    for (x=0;x<4;x++){
        for (y=x+1;y<5;y++){
            if (b[x]>b[y]){
                z=b[x];
                b[x]=b[y];
                b[y]=z; 
            }
        }
    }
    for (x=0;x<5;x++){
        printf ("%i ", b[x]);
    }
    for (x=0;x<5;x++){
        c[x]= a[x]+b[x];
    }
        for (x=0;x<4;x++){
        for (y=x+1;y<5;y++){
            if (c[x]>c[y]){
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