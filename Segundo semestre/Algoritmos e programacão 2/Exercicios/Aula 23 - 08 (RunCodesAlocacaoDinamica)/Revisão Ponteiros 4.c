#include <stdio.h>
#include <stdlib.h>
#define max 10

int Soma_Vetor(int *vetor1, int *vetor2,int pos){
	int resultado;
	resultado = vetor1[pos] + vetor2[pos];
	return resultado;
}
int main () {
	int *vetor1, *vetor2, *resultante, i, pos = 0;
	
	vetor1 = (int *) malloc(10 * sizeof(int));
	vetor2 = (int *) malloc(10 * sizeof(int));
	resultante = (int *) malloc(10 * sizeof(int));
	
	for (i = 0; i < 10; i++){
		scanf ("%d", &vetor1[i]);
	} 
	
	for (i = 0; i < 10; i++){
		scanf ("%d", &vetor2[i]);
	}
	
	for (i = 0; i < 10; i++){
		resultante[i] = Soma_Vetor(vetor1, vetor2, pos);
		pos++;
	}
	
	for (i = 0; i < 10; i++){
		printf ("%d ", resultante[i]);
	}
	
	return 0;
}
