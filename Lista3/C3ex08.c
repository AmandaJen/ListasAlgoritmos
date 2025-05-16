#include <stdio.h>
int main(){
    int x=1;
	do {
		if (x%2==0){
			printf ("%i\n", x);
		}
				x++;
	}while (x<=20);
}
