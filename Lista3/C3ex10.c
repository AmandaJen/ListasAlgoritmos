#include <stdio.h>
int main(){
	int x, y;
	float z;
	char w;
	while (w!='S'){
   	 printf ("Selecione a operacao: \n");
   	 scanf (" %c", &w);
   	 if (w=='S' || w=='s'){
   		 break;
   	 }
   	 printf ("Selecione os valores desejados: \n");
   	 scanf ("%i", &x);
   	 scanf ("%i", &y);
   	 if (w=='+'){
   		 z=x+y;
   		 printf ("Seu resultado e %f \n", z);
   	 }
   	 if (w=='-'){
   		 z=x-y;
   		 printf ("Seu resultado e %f \n", z);
   	 }
   	 if (w=='*'){
   		 z=x*y;
   		 printf ("Seu resultado e %f \n", z);
   	 }
   	 if (w=='/'){
   		 z=x/y;
   		 printf ("Seu resultado e %f \n", z);
   	 }
   	 
	}
}
