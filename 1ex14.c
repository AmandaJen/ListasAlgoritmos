# include <stdio.h>
int main(){
	float r, a, v, pi=3.14159;
	printf ("Qual o raio da esfera? \n");
	scanf ("%f", &r);
	v=(4*pi*r*r*r)/3;
	a=4*pi*r*r;
	printf ("A area e %f e o volume e %f", a, v);
}
