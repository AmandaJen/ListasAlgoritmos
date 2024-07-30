#include <stdio.h>
int main (){
	float v, r, h;
	printf ("Qual o raio? \n");
	scanf ("%f",&r);
	printf ("Qual a altura? \n");
	scanf ("%f",&h);
	v=3.14159*r*r*h;
	printf ("Seu volume e %f \n",v);
}
