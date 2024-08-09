#include <stdio.h>
int main(){
	int a[5], b[5], c[10], x, y=5;
	printf ("Digite 5 numeros\n");
	scanf ("%i %i %i %i %i", &a[0], &a[1], &a[2], &a[3], &a[4]);
	printf ("Digite 5 numeros\n");
	scanf ("%i %i %i %i %i", &b[0], &b[1], &b[2], &b[3], &b[4]);
	printf ("Seu numeros sao:\n");
	for (x=0;x<=4;x++){
		c[x]=a[x];
		printf ("%i\n", c[x]);
	}
	for (x=0;x<=4;x++){
		c[y]=b[x];
		printf ("%i\n", c[y]);
		y++;
	}
}
