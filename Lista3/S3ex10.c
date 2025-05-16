#include <stdio.h>
#include <math.h>
int main(){
    int x, y=0;
    for (x=1;x<=500;x++){
    	if (x%2==0){
    		y=x+y;
		}
	}
	printf ("%i", y);
}
