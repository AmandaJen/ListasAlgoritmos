# include <stdio.h>
int main(){
	int x;
	for (x=0; x<=20; ++x) {
		if (x % 2 == 1){
			printf ("%i\n", x);
		}
	}
	return 0;
}
