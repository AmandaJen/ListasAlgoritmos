#include<stdio.h>
#include<math.h>

int main(){
    int a[30], b[30], x;
    printf ("Digite 30 valores para ver o cubo \n");
    for (x=0;x<30;x++){
        scanf ("%i", &a[x]);
    }
    for (x=0;x<30;x++){
        b[x]= a[x]*a[x]*a[x];
    }
    printf ("\nDigite qual elemento quer encontrar, e para sair digite um numero negativo \n");
    while (x>0){
        scanf ("%i", &x);
        x=x-1;
        if (x<0){
            break;
        }
        printf ("%i\n", b[x]);
    }
    return 0;
}
