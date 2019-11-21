#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define max 50

void leVetor (int vetor[], int n){
    int i;
    for (i = n - 1; i >= 0; i--) {
        scanf ("%d", &vetor[i]);
    }
}

void imprimeVetor (int vetor[], int n){
    int i;
    for (i = 0; i < n; i++) {
        printf ("%d ", vetor[i]);
    }
    printf("\n");
}

int main () {
    int n, vet[max];

    do{
        scanf ("%d", &n);
    }while (n <= 0 || n > 50);
    
    leVetor(vet, n);
	imprimeVetor(vet, n);
	
    return 0;
}
