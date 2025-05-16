#include <stdio.h>
int main(){
    int x;
    printf ("Insira valor de n: ");
    scanf ("%i",&x);
    if (x<=50){
   		for(x;x<250;x){
   			x=x*3;
   			if (x>=250) {
   	 			break;
   	 		}
   	 	printf ("%i \n",x);
   		}
	}
    else {
   		printf ("Insira um valor abaixo de 50");
   		scanf ("%i",&x);
   		for(x;x<250;x){
   			x=x*3;
			if (x>=250) {
				break;
   	 		}
   		printf ("%i \n",x);
   		}
    }
}
