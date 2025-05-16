#include <stdio.h>
#include <math.h>
int main(){
    int x, y, z;
    printf ("Insira o valor da base e da potencia: \n");
    scanf ("%i %i", &x, &y);
    z=pow (x, y);
    printf ("O resultado e %i", z);
}
