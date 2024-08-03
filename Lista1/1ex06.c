#include <stdio.h>
int main(){
	float p, t, ta, v;
	printf ("Qual o valor, tempo e a taxa? \n");
	scanf ("%f %f %f", &v, &t, &ta);
	p=v+(v*t*(ta/100));
	printf ("O valor da prestacao e %f", p);
}
