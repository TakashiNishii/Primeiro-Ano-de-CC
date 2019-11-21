#include <stdio.h>
#include <stdlib.h>

int main () {
	int x, i, *vet;
	
	scanf ("%d", &x);
	
	vet = (int *)malloc(x * sizeof(int));
	
	for (i = 0; i < x; i++){
		scanf ("%d", &vet[i]);
	}
	
	for (i = x - 1; i >= 0; i--){
		printf ("%d  ", vet[i]);
	}
}
