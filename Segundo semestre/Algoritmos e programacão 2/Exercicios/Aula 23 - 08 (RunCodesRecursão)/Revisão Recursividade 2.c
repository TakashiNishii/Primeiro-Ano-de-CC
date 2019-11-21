#include <stdio.h>
#include <stdlib.h>

int somaVetor (int v[], int i){
	int acumulador;
	if (i == 0){
		return v[i];
	}else{
		acumulador = somaVetor(v, i - 1) + v[i];
		return acumulador;
	}
} 	

int main () {
	int vet[5], i, soma;
	
	for (i = 0; i < 5; i++){
		scanf ("%d", &vet[i]);
	}
	
	soma = somaVetor(vet, i - 1);
	
	printf ("Soma = %d", soma);
	return 0;
}
