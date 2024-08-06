#include <stdio.h>
int main(){
	int a[6], b[6], x;
	printf ("Digite 6 numeros para ver seu fatorial\n");
	scanf ("%i %i %i %i %i %i", &a[0], &a[1], &a[2], &a[3], &a[4], &a[5]);
	printf ("Seu numeros sao: \n");
	for (x=0;x<=5;x++){
		for (b[x]=1;a[x]>=1;a[x]--){
			b[x]=a[x]*b[x];
		}
		printf ("%i\n", b[x]);
	}
}
