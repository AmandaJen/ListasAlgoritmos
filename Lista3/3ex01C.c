# include <stdio.h>

int main(){
	int x;
	while (x<21) {
		if (x % 2 == 1){
			printf ("%i\n", x);
		}
		x++;
	}
	return 0;
}
