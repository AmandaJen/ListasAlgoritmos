# include <stdio.h>
int main(){
	float n1, n2, n3, n4, m;
	printf ("Quais as notas do aluno? \n");
	scanf ("%f %f %f %f", &n1, &n2, &n3, &n4);
	m=(n1+n2+n3+n4)/4;
	printf ("A media e %f", m);
}
