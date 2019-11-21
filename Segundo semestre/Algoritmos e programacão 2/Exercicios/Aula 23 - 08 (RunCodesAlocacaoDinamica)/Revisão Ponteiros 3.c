#include <stdio.h>
#include <stdlib.h>
int AlocaVetor (int n){
	int vet;
	
	scanf ("%d", &vet);
	
	return vet;
}

float Media_Aritmetica(int vetor[], int tamanho){
	int i;
	float soma = 0;
	
	for (i = 0; i < tamanho; i++){
		soma += vetor[i];		
	}
	
	return soma / tamanho;
	
}

int main () {
	int *vetor, n, i;
	float media;
	
	scanf ("%d", &n);
	
	vetor = (int *)calloc(n, sizeof(int));
	
	for (i = 0; i < n; i++) {
		vetor[i] = AlocaVetor(i);	
	}
	
	media = Media_Aritmetica(vetor, n);
	
	printf ("%.2f\n", media);
	
	free(vetor);
	return 0;
}
