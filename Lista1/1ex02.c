#include <stdio.h>
int main (){
    float c, f;
    printf ("Quantos farenheits? \n");
    scanf ("%f",&f);
    c=((f-32)*5)/9;
    printf ("Sua temperatura em celcius e %f",c);
}
