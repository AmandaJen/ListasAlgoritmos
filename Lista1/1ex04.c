# include <stdio.h>
int main(){
	int a, b, c;
	printf ("Quais os valores de troca? \n");
	scanf ("%i %i", &a, &b);
	c=a;
	a=b;
	b=c;
	printf ("%i %i", a, b);
}
