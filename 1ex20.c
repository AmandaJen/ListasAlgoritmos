#include <stdio.h>
int main(){
	int s0=2, v0=3, a=10, t, s;
	printf ("Qual o tempo? \n");
	scanf ("%i", &t);
	s=s0+v0*t+(a*t*t)/2;
	printf ("Sua distancia e de: %i", s);
}
