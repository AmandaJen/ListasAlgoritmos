#include <stdio.h>
int main (){
	int x=1, y=0, z, w;
	printf ("%i\n%i\n", y, x);
	for (z=0;z<=13;z++){
		w=x+y;
		if (z>=15){
			break;
		}
		printf ("%i \n", w);
		y=x;
		x=w;
	}
}
