#include<stdio.h>
#include<math.h>
 
int main(){
    float d, t, v, lu;
	printf ("Qual o tempo? ");
	scanf ("%f",&t);
	printf ("Qual a velocidade? ");
	scanf ("%f",&v);
	d=t*v;
	lu=d/12;
	printf ("Seu tempo e %f \n",t);
	printf ("Sua velocidade e %f \n",v);
	printf ("Sua distancia e %f \n",d);
	printf ("Em litros, foram usados %f \n",lu);
    return 0;
}
