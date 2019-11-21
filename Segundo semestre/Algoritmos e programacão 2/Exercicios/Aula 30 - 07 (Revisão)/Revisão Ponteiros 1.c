#include <stdio.h>
#include <stdlib.h>

int main () {
	int *vet, n;
	
	vet = (int *)malloc(5 * sizeof(int));
	
	for (n = 0; n < 5; n++){
		scanf ("%d", &vet[n]);
	}
	
	printf ("Memoria Alocada!\n");
	
	for (n = 0; n < 5; n++){
		printf ("%d ", vet[n]);
	}
	return 0;
}
