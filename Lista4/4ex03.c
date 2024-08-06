#include <stdio.h>
int main(){
	int a[5], b[5], c[5], x;
	printf ("Digite 5 numeros para serem subtraidos\n");
	scanf ("%i %i %i %i %i", &a[0], &a[1], &a[2], &a[3], &a[4]);
	printf ("Digite 5 numeros para subtrair\n");
	scanf ("%i %i %i %i %i", &b[0], &b[1], &b[2], &b[3], &b[4]);
	printf ("Seu numeros sao:\n");
	for (x=0;x<=4;x++){
		c[x]=a[x]-b[x];
		printf ("%i\n", c[x]);
	}
}
