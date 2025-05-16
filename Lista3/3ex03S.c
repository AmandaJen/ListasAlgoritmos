# include <stdio.h>
int main(){
	int x;
	int y=1;
	printf ("Escreva um numero para ver sua tabuada \n");
	scanf("%d", &x);
	while (y<11) {
		printf ("%i\n", x*y);
		y++;
	}
}
