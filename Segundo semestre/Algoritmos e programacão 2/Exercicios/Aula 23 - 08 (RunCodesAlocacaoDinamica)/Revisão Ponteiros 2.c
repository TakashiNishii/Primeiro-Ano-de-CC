#include <stdio.h>
#include <stdlib.h>

int main () {
	int *vet, n, i, somaA = 0, quantB = 0, somaC = 0, maiorD;
	float quantC = 0, mediaC;
	
	scanf("%d", &n);
	vet = (int *)malloc(n * sizeof(int));
	
	for (i = 0; i < n; i++){
		scanf ("%d", &vet[i]);
		
		if (vet[i] >= 9 && vet[i] <= 51 && vet[i] % 2 == 0){
			somaA += vet[i];
		}
		if (vet[i] < 0) {
			quantB++;
		}
		if (vet[i] % 2 != 0){
			somaC += vet[i];
			quantC = quantC + 1;
		}
		if (i == 0){
			maiorD = vet[i];
		}else{
			if (vet[i] > maiorD){
				maiorD = vet[i];
			}
		}
	}
	
	if (quantC != 0){
		mediaC = somaC/quantC;	
	}else{
		mediaC = 0.000;
	}
	
	printf ("a = %d\n", somaA);
	printf ("b = %d\n", quantB);
	printf ("c = %.2f\n", mediaC);
	printf ("d = %d\n", maiorD);
	
	return 0;
}
