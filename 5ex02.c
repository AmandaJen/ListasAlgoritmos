#include<stdio.h>
#include<math.h>

int main(){
    int a[8], b[8], x, y, z;
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
    for (x=0;x<8;x++){
        printf ("%i ", b[x]);
    }
    printf ("digite qual elemento quer encontrar");
    scanf ("%i", &x);
    x=x-1;
    printf ("%i", b[x]);
    return 0;
}