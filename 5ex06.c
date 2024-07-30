#include<stdio.h>
#include<math.h>

int main(){
    int a[30], b[30], x;
    printf ("Digite 30 valores \n");
    for (x=0;x<30;x++){
        scanf ("%i", &a[x]);
    }
    for (x=0;x<30;x++){
        b[x]= a[x]*a[x]*a[x];
    }
    printf ("Esses são os 30 valores ao cubo \n");
    for (x=0;x<30;x++){
        printf ("%i ", b[x]);
    }
    return 0;
}
