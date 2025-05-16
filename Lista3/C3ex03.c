#include <stdio.h>
int main(){
    int x=1;
    while (x<=20){
    	if (x%2==0){
			printf ("%i e par \n", x);
		}
		else {
			printf ("%i e impar \n", x);
		}
    	x++;
	}
}
