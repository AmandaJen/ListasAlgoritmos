#include <stdio.h>
int main(){
	int a[10], b[10], x, y=9;
	printf ("Digite 10 numeros para trocar a sequencia\n");
	for (x=0;x<=9;x++){
	scanf ("%i", &a[x]);
	}
	printf ("A sequencia invertida e:\n");
	for (x=0;x<=9;x++){
		b[y]=a[x];
		y--;
	}
	for (x=0;x<=9;x++){
		printf ("%i\n", b[x]);
	}
}
