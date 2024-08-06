#include <stdio.h>
int main(){
	int a[5], b[5], x;
	printf ("Digite 5 numeros para multiplicar por 3\n");
	scanf ("%i %i %i %i %i", &a[0], &a[1], &a[2], &a[3], &a[4]);
	printf ("Seu numeros sao: \n");
	for (x=0; x<=4; x++){
		b[x]=a[x]*3;
		printf ("%i\n", b[x]);
	}
}
