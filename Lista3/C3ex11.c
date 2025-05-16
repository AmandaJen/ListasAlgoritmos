#include <stdio.h>
int main(){
	int x;
	int y=0;
	printf ("Escreva um numero para ver sua tabuada %n");
	scanf("%d", &x);
	while (y<11) {
		printf ("%i X %i = %i\n", x, y, x*y);
		y++;
	}

}
