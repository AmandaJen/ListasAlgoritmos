# include <stdio.h>
int main(){
	float m, h, imc;
	printf ("Qual a massa e altura da pessoa? \n");
	scanf ("%f %f", &m, &h);
	imc=m/(h*h);
	printf ("O imc dessa pessoa e %f", imc);
}
