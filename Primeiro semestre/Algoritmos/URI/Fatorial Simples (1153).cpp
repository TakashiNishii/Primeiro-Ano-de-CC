#include <stdio.h>
int main () {
	int N, i = 0, acumulador = 1;
	
	scanf ("%d", &N);
	while (i<N){
		acumulador = acumulador * (N-i);
		i++;
	}
	printf ("%d\n", acumulador);
	return 0;
}
