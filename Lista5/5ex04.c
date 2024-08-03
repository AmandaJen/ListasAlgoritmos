#include<stdio.h>
#include<math.h>

int main(){
    int a[12], b[12], c[12], x, y, z;
    printf ("Coloque os 12 valores de a \n");
    for (x=0;x<12;x++){
        scanf ("%i", &a[x]);
    } 
    printf ("Coloque os 12 valores de b \n");
    for (x=0;x<12;x++){
        scanf ("%i", &b[x]);
    } 
    for (x=0;x<11;x++){
        for (y=x+1;y<12;y++){
            if (a[x]>a[y]){
                z=a[x];
                a[x]=a[y];
                a[y]=z; 
            }
        }
    }
    for (x=0;x<11;x++){
        for (y=x+1;y<12;y++){
            if (b[x]>b[y]){
                z=b[x];
                b[x]=b[y];
                b[y]=z; 
            }
        }
    }
    for (x=0;x<12;x++){
        c[x]= a[x]+b[x];
    }
        for (x=0;x<11;x++){
        for (y=x+1;y<12;y++){
            if (c[x]>c[y]){
                z=c[x];
                c[x]=c[y];
                c[y]=z; 
            }
        }
    }
    for (x=0;x<12;x++){
        printf ("%i ", c[x]);
    }
    return 0;
}
