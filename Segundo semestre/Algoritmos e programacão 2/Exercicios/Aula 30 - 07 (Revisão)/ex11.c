#include <stdio.h>
#include <stdlib.h>
#define max 50

int contImparesPosImpares (int vet[], int n){
	int i, cont = 0;
	
	for (i = 1; i < n; i++){
		if (vet[i] % 2 != 0){
			cont++;
		}
		i++;
	}
	return cont;
}

int somaPosPares (int vet[], int n){
	int i, soma = 0;
	
	for (i = 0; i < n; i++){
		soma += vet[i];
		i++;
	}
	return soma;
}

void leVetor (int vetor[], int n){
	int i;
	for (i = 0; i < n; i++){
		scanf("%d", &vetor[i]);
	}
}

int main () {
	int n, vet[max], somaPar, contImpar;
	do{
		scanf("%d", &n);
	}while(n < 1 || n > 50);
	
	leVetor(vet, n);
	somaPar = somaPosPares(vet, n);
	contImpar = contImparesPosImpares(vet, n);
	
	printf("%d ", somaPar);
	printf("%d", contImpar);
	
	return 0;
}
