# include <stdio.h>
int main(){
	int l, h, a, p;
	printf ("Qual a altura e largura do retangulo? \n");
	scanf ("%i %i", &h, &l);
	a=h*l;
	p=2*l+2*h;
	printf ("A area e o perimetro do retangulo sao respectivamente %i e %i", a, p);
}
