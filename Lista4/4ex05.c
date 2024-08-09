#include <stdio.h>
int main(){
	int a[20], b[30], c[50], x, y, w=20;
	printf ("Digite 20 numeros\n");
	for (x=0;x<=19;x++){
	scanf ("%i", &a[x]);
	}
	printf ("Digite 30 numeros\n");
	for (y=0;y<=29;y++){
	scanf ("%i", &b[y]);
	}
	printf ("Seu numeros sao:\n");
	for (x=0;x<=19;x++){
		c[x]=a[x];
		printf ("%i\n", c[x]);
	}
	for (y=0;y<=29;y++){
		c[w]=b[y];
		printf ("%i\n", c[w]);
		w++;
	}
}
