# include <stdio.h>
int main(){
	float r, a, c, pi=3.14159;
	printf ("Qual o raio do circulo? \n");
	scanf ("%f", &r);
	c=2*r*pi;
	a=r*r*pi;
	printf ("A area e %f e a circunferencia e %f", a, c);
}
