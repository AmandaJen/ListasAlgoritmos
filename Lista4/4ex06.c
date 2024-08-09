#include <stdio.h>
int main(){
	int a[8], b[8], x;
	printf ("Digite 8 numeros para ver seu quadrado\n");
	for (x=0;x<=7;x++){
	scanf ("%i", &a[x]);
	}
	printf ("Os quadrados sao:\n");
	for (x=0;x<=7;x++){
		b[x]=a[x]*a[x];
		printf ("%i\n", b[x]);
	}
}
