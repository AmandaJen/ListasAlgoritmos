# include <stdio.h>
int main(){
	int x;
	for (x=1;x<201;++x) {
		if (x % 4 == 0){
			printf ("%i\n",x);
		}
	}
}
