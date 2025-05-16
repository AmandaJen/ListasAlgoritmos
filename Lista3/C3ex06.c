#include <stdio.h>
int main(){
  int x;
	for (x=20;x>=1;x--){
		if (x%2==1){
			printf ("%i e impar \n",x);
		}
		else {
			printf ("%i e par \n", x);
		}
	}
}
