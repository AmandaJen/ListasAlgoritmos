# include <stdio.h>
int main(){
	float n1, n2, at, m;
	printf ("Quais as notas do aluno e a atividade? \n");
	scanf ("%f %f %f", &n1, &n2, &at);
	m=(n1*4+n2*4+at*2)/10;
	printf ("A media e %f", m);
}
