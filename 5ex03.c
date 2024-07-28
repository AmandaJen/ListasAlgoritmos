#include<stdio.h>
#include<math.h>

int main(){
    int a[15], b[15], x, y, z;
    for (x=0;x<15;x++){
        scanf ("%i", &a[x]);
    }
    for (x=0;x<15;x++){
        b[x]=1;
        for (a[x]=a[x];a[x]>0;a[x]--){
            b[x]=b[x]*a[x];
        }
    }
    for (x=0;x<14;x++){
        for (y=x+1;y<15;y++){
            if(b[x]>b[y]){
                z = b[x];
                b[x]=b[y];
                b[y]=z;
            }
        }
    }
    for (x=0;x<15;x++){
        printf ("%i ", b[x]);
    }
    return 0;
}