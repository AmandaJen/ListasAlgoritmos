# include <stdio.h>
int main(){
	int ap, lp, aa, la, qnt;
	printf ("Qual a altura e largura da parede e do azulejo? \n");
	scanf ("%i %i %i %i", &ap, &lp, &aa, &la);
	qnt=(ap*lp)/(aa*la);
	printf ("A quantidade azulejos necessarios sera de %i", qnt);
}
