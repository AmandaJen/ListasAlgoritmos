#include <stdio.h>
int main(){
    int x, y;
	for (x;y<200;x++){
		y=x*x;
		if (y<=200 && y>=15){
			printf ("%i \n", y);
		}
	}
}
