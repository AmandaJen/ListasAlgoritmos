#include <stdio.h>
int main(){
	int a[9], b[9], x;
	printf ("Digite o RAV\n");
	for (x=0;x<=8;x++){
	scanf ("%i", &a[x]);
	}
	printf ("O RAC e:\n");
	b[0]=a[0];
	b[1]=a[1];
	b[2]=a[7];
	b[3]=a[6];
	b[4]=a[4];
	b[5]=a[5];
	b[6]=a[2];
	b[7]=a[3];
	b[8]=a[8];
	for (x=0;x<=8;x++){
		printf ("%i", b[x]);
	}
}
