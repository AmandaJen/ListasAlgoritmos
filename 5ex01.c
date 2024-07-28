#include<stdio.h>
#include<math.h>

int main(){
    int vetor[12], x, y, z;
    for (x=0;x<12;x++){
        scanf ("%i", &vetor[x]);
    }
    for (x=0;x<=10;x++){
        for (y=x+1; y<=11; y++){
            if (vetor[x] < vetor[y]) {
                z=vetor[x];
                vetor[x]=vetor[y];
                vetor[y]=z;
            }
        }
    }
    for (x=0;x<12;x++){
        printf ("%i ", vetor[x]);
    }
    return 0;
}